#include <stdio.h>

int main(void)
{
    int base;
    int height;
    char measurement[] = "cm";

    
    printf("Enter the base of triangle %s: ",measurement);
    scanf("%d",&base);

    printf("Enter the height of triangle %s: ", measurement);
    scanf("%d",&height);

    int area = (base * height) /2;

    printf("the area of triangle is: %d %s^2\n", area,measurement);
    
    return (0);
}