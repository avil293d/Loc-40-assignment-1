#include <stdio.h>

int main()
{
    int a, b;
    int opp;
    printf("Enter two number is :");
    scanf("%d%d", &a, &b);
    printf("Enter serial no of operation 1.+ 2.- 3.* 4./ :");
    scanf("%d", & opp);
    switch (opp)
    {
    case 1:
    printf("sum of two number is %d", a + b);
    break;
    case 2:
    printf("substraction of two number is %d", a - b);
    break;
    case 3:
    printf("multiplication of two number is %d", a * b);
    break;
    case 4:
    printf("division of two number is %d", a / b);
    break;
    }

    return 0;
}