#include <math.h>
#include <stdio.h>
int main()
{
    char text[10000];
    printf("Text: ");
    scanf(" %[^\n]", text);
    int i = 0;
    double letters = 0;
    double words = 0;
    double sentences = 0;
    while (text[i] != '\0')
    {
        // printf("%d\n",(int)(text[i]));
        if (((int) (text[i]) > 64 && (int) (text[i]) < 91) ||
            ((int) (text[i]) > 96 && (int) (text[i]) < 123))
        {
            letters = letters + 1;
        }
        else if ((int) (text[i]) == 46 || (int) (text[i]) == 33 | (int) (text[i]) == 63)
        {
            if ((int) (text[i - 1]) != 46 && (int) (text[i - 1]) != 33 && (int) (text[i - 1]) != 63)
            {
                sentences = sentences + 1;
            }
        }
        else if ((int) (text[i]) == 32)
        {
            words = words + 1;
        }
        i++;
    }
    words = words + 1;
    int index =
        round(0.0588 * (letters / (words / 100)) - 0.296 * (sentences / (words / 100)) - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
