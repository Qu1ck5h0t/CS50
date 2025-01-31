#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    if (argc != 2)
    {
        // Specification says error message of MY CHOICE
        printf("nuh uh\n");
        return 1;
    }
    for (i = 0; argv[1][i] != '\0'; i++)
    {
        if (((int) (argv[1][i]) < 64 || (int) (argv[1][i]) > 91) &&
            ((int) (argv[1][i]) < 96 || (int) (argv[1][i]) > 123))
        {
            printf("nuh uh\n");
            return 1;
        }
        if ((int) (argv[1][i]) < 91)
        {
            argv[1][i] = (char) (argv[1][i] + 32);
        }
        for (j = 0; j < i; j++)
        {
            if (argv[1][j] == argv[1][i])
            {
                printf("nuh uh\n");
                return 1;
            }
        }
    }

    if (i != 26)
    {
        printf("nuh uh\n");
        return 1;
    }
    char plaintext[100];
    char ciphertext[100];
    printf("plaintext: ");
    scanf(" %[^\n]", plaintext);
    for (i = 0; plaintext[i] != '\0'; i++)
    {
        if (((int) (plaintext[i]) > 64 && (int) (plaintext[i]) < 91) ||
            ((int) (plaintext[i]) > 96 && (int) (plaintext[i]) < 123))
        {
            if ((int) (plaintext[i]) < 91)
            {
                // trust me bro
                ciphertext[i] = (char) (argv[1][(int) (plaintext[i]) - 65] - 32);
            }
            else
            {
                ciphertext[i] = (char) (argv[1][(int) (plaintext[i]) - 97]);
            }
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    printf("ciphertext: ");
    for (i = 0; plaintext[i] != '\0'; i++)
    {
        printf("%c", ciphertext[i]);
    }
    printf("\n");
}
