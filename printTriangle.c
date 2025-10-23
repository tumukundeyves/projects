#include <stdio.h>

int main(void)
{
    int i,j;

     i = 0;
     while (i < 4)
     {
        j = 0;
        while (j < 7)
        {

            if((i == 0 && j != 3) || ( i == 1 && (j <=1 || j >= 5)) || ( i==2 &&(j==0 || j==6)))
            {
                printf("  ");
            }
            else if((i == 1 && j == 3) || (i == 2 && ( j != 1 && j != 5)))
            { 
                 printf("  ");
            }
            

            else{
               printf("* ");
            }

            
            j++;
        }
         printf("\n");
        i++;
     }     
}