#include <stdio.h>
#include <conio.h>

int main()
{
    char string[100], c;
    int i, j;

    printf("Enter the string: ");
    gets(string);

    printf("Enter the character to be removed: ");
    scanf("%c", &c);

    for (i = 0, j = 0; string[i] != '\0'; i++)
    {
        if (string[i] != c)
        {
            string[j] = string[i];
            j++;
        }
    }

    string[j] = '\0';

    printf("String after removing '%c': %s", c, string);
    getch();
    return 0;
}
