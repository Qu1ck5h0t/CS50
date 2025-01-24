// this is cool because it doesn't use <cs50.h> either
#include <math.h>
#include <stdio.h>

int main()
{
    double num;
    printf("Enter card number: \n");
    while (scanf("%lf", &num) != 1)
    {
        // clears buffer
        while (getchar() != '\n')
            ;
        printf("Enter card number: \n");
    }
    int len = 0;
    while (num / pow(10, len) > 1)
    {
        len++;
    }
    if (len != 13 && len != 15 && len != 16 && len != 17)
    {
        printf("INVALID\n");
        return (0);
    }
    int arr[len];
    int i = 0;
    // omg I can't believe this actually works
    while (i <= len)
    {
        arr[len - i - 1] = fmod(num, 10);
        num /= 10;
        i++;
    }
    i = 0;
    int sum = 0;
    int digits[(int) round(len / 2)];
    i = 2;
    int j = 0;
    while (i <= len)
    {
        digits[j] = arr[len - i];
        j++;
        i = i + 2;
    }
    i = 0;
    while (i + 1 <= (int) round(len / 2))
    {
        digits[i] = digits[i] * 2;
        if (digits[i] > 9)
        {
            sum = sum + 1 + (digits[i] % 10);
        }
        else
        {
            sum = sum + digits[i];
        }
        i++;
    }
    i = 1;
    while (i <= len)
    {
        sum = sum + arr[len - i];
        i = i + 2;
    }
    if (sum % 10 == 0)
    {
        if ((arr[0] == 3 && arr[1] == 4 && len == 15) || (arr[0] == 3 && arr[1] == 7 && len == 15))
        {
            printf("AMEX\n");
        }
        else if (arr[0] == 5 && (arr[1] > 0 && arr[1] < 6) && len == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((arr[0] == 4 && len == 13) || (arr[0] == 4 && len == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
            return (0);
        }
    }
    else
    {
        printf("INVALID\n");
        return (0);
    }
}
