#include <stdio.h>
#include <conio.h>

void factorial(int num, int *result)
{
    *result = 1;

    for (int i = 1; i <= num; i++)
    {
        *result *= i;
    }
}

int main()
{
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, &fact);

    printf("Factorial of %d is %d\n", num, fact);
    getch();
    return 0;
}
