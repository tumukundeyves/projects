#include <stdio.h>

int main(void)
{
    int myAge;
    int graduatingHighSchoolAge = 18;

    printf("enter your age: ");
    scanf("%d",&myAge);

    if (myAge == graduatingHighSchoolAge) // to specify blokc of condition to be executed if condition is true
    {
        printf("you finished on time\n");
    }
    else if (myAge <= graduatingHighSchoolAge) // to specify new condition to test it, if the first condition is false
    {
        printf("you are still studying , just don't make mistake of repeating\n");
    }

    else
    {
        printf("you repeated somewhere during your studies or began your studies late\n"); // to specify block of code to be executed , if first condition is false
    }
    printf("thank you\n");
    return (0);
    
}