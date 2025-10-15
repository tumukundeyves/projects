#include <stdio.h>

int main(void)
{
    int num,i;
    i = 0;


    printf("Enter any number to check it's multiplication: ");
    scanf("%d",&num);

    while (i<=12)
    {
        printf("%d x %d = %d\n", i,num,i*num);
        i++;
    }
    return (0);
}