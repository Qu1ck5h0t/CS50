//this is cool because it doesn't use <cs50.h>
#include <stdio.h>

int main() {
    int lines;
    while (lines <= 0 || lines > 8)
    {
    printf("Enter number of lines (between 1 and 8): \n");
    //checks if input is an int
    while (scanf("%d", &lines) != 1)
    {
        //clears buffer
        while (getchar() != '\n');
        printf("Enter number of lines (between 1 and 8): \n");
    }
    }
    int i = 0;
    int j = 0;
    while (i < lines)
    {
        j = 1;
        while (j + i < lines)
        {
        printf(" ");
        j = j + 1;
        }
        j = 0;
        while (j < i + 1)
        {
            printf("#");
            j = j + 1;
        }
        printf("  ");
        j = 0;
        while (j < i + 1)
        {
            printf("#");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}
