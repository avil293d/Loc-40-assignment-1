#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter number:");
    scanf("%d", &num);
    do
    {
        sum += num%10;
        num /= 10;
    } while (num > 0);

    printf("Sum of the digits of the number is : %d", sum);
    return 0;
}
