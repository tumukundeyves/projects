#include <unistd.h>
#include <stdio.h>

/*void sum(int a, int b)
{
  
    printf("a + b = %d\n", a+b); 
}

int main(void)
{
    sum(12,15);
    return (0);
}*/

void ft_putnbr(int n)
{
    char c;
    if(n < 0)
    {
        write(1, "-",1);
        n = -n;
    }

    if(n >= 10)
        ft_putnbr(n/10);
    c = ( n %10) + '0';
    write(1,&c,1);
    
}

int main()
{
    int a =12;
    int b =45;

    int sum = a+b;

    write(1,"sum of a+b = ",13);
    ft_putnbr(sum);
    write(1,"\n",1);
    return (0);

}
