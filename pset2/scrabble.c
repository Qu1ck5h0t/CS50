#include <math.h>
#include <stdio.h>
int pointcalc(char points[20])
{
    int i = 0;
    int score = 0;
    while (i < 20)
    {
        if (points[i] == 'A' || points[i] == 'E' || points[i] == 'I' || points[i] == 'L' ||
            points[i] == 'N' || points[i] == 'O' || points[i] == 'R' || points[i] == 'S' ||
            points[i] == 'T' || points[i] == 'U' || points[i] == 'a' || points[i] == 'e' ||
            points[i] == 'i' || points[i] == 'l' || points[i] == 'n' || points[i] == 'o' ||
            points[i] == 'r' || points[i] == 's' || points[i] == 't' || points[i] == 'u')
        {
            score += 1;
        }
        if (points[i] == 'D' || points[i] == 'G' || points[i] == 'd' || points[i] == 'g')
        {
            score += 2;
        }
        if (points[i] == 'B' || points[i] == 'C' || points[i] == 'M' || points[i] == 'P' ||
            points[i] == 'b' || points[i] == 'c' || points[i] == 'm' || points[i] == 'p')
        {
            score += 3;
        }
        if (points[i] == 'F' || points[i] == 'H' || points[i] == 'V' || points[i] == 'W' ||
            points[i] == 'Y' || points[i] == 'f' || points[i] == 'h' || points[i] == 'v' ||
            points[i] == 'w' || points[i] == 'y')
        {
            score += 4;
        }
        if (points[i] == 'K' || points[i] == 'k')
        {
            score += 5;
        }
        if (points[i] == 'J' || points[i] == 'X' || points[i] == 'j' || points[i] == 'x')
        {
            score += 8;
        }
        if (points[i] == 'Q' || points[i] == 'Z' || points[i] == 'q' || points[i] == 'z')
        {
            score += 10;
        }
        i++;
    }
    return score;
}
int main()
{
    char word1[20];
    printf("Player 1: ");
    scanf("%s", word1);
    int points1 = pointcalc(word1);

    char word2[20];
    printf("Player 2: ");
    scanf("%s", word2);
    int points2 = pointcalc(word2);

    if (points2 < points1)
    {
        printf("Player 1 wins!");
    }
    else if (points2 > points1)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
}
