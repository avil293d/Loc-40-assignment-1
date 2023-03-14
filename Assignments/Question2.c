#include <stdio.h>

int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Number is positive");
    }
    else if (num < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is zero");
    }
    return 0;
}