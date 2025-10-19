#include <stdio.h>

int main(void)
{
    int i;
    int j;

    i = 0;
    while(i <= 2)
    {

        //printf("*");
        j = 0;
        while (j < 5)
        {   
            if( i == 1 && j <=3)
            {
                printf(" ");
            }
            else{
                printf("* ");
                
            }
            j++;
        }
        i++;
        printf("\n");
    }
}