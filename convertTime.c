#include <stdio.h>

int main(void)
{
    int Hours;
    int Minutes;
    int Seconds;

   

    printf("You are trying to convert Hours into minutes and seconds\n");
    printf("Enter an hours: ");
    scanf("%d",&Hours);

     Minutes =  Hours * 60;
    Seconds = Hours * 3600;

    printf("%d Hours= %d Minutes\n",Hours,Minutes);
    printf("%d Hours = %d Seconds\n",Hours,Seconds);
    return(0);
}