#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int i =0;
    

    while(i <= 12)
    {
        int j = 1;
        while(j <=10)
        {
             printf("%d * %d = %d\n", i,j,i*j);
             j++;
        }
       
        i++;
        printf("\n");
    }
    return (0);
}