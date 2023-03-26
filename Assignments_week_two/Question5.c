#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    int arr1[n];
    int arr2[n];
    printf("Enter Number of elements :");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("Elements of the original array are: ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nElements of the copied array are: ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr2[i]);
    }
    getch();
    return 0;
}