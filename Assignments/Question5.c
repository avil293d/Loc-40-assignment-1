#include<stdio.h>

int main(){
    float r,dia,area,circum;
    printf("Enter radius of the circle:\n");
    scanf("%f",&r);
    printf("Diameter of the circle is %f\n",2*r);
    printf("Circumference of the circle is %f\n",2*3.141*r);
    printf("Area of the circle is %f\n",3.141*r*r);

    return 0;
}