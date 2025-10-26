#include <stdio.h>
/*
int main(void)
{
    int a ,b,c;

    a = 12;
    b= 16;

    c = a;
    a =b;
    b = c;

    
    printf("%d\n",a);    // this is to swap two numbers with temporary variable(third variable);
    printf("%d\n",b);

    return (0);
}
*/

int main(void)
{
    int a ,b;

    a = 12;
    b= 16;

    a = a + b;
    b = a -b;
    a = a -b;

    
    printf("the value of a is: %d\n",a);    // this is to swap two numbers without temporary variable(third variable);
    printf("the value of b is: %d\n",b);

    return (0);
}
