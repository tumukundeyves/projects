#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int i =0;
    int j =1;

    while(i <= 10)
    {
        printf(" %d",i*j);
        i++;
    }
    return (0);
}