#include <stdio.h>
#include <conio.h>
int main()
{

    int n, m;

    printf("Enter Number of elements in 1st array :");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Number of elements in 2nd array :");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[m + n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int j = n, i = 0; j < m + n, i < m; i++, j++)
    {
        arr3[j] = arr2[i];
    }

    printf("Elements of the merged array are: ");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[(m+n)-i-1]);
    }
    getch();
    return 0;
}