#include "mylib.h"

int main(void)
{
    ft_hello();
    
    int a = 12;
    int b = 45;
    write(1,"sum of a+b = ",13);
    ft_putnbr(a + b);
    write(1,"\n",1);

    ft_names();

    return 0;
}
