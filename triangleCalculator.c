#include <stdio.h>

int main(void)
{
    int choice;
    char measurement[] = "cm";
    int rate = 0;

    printf("choose what you want to calculate:\n");
    printf("1) Area of the Triangle\n");
    printf("2) Perimeter of theTriangle\n");
    printf("Enter your choice (1 0r 2): ");
    scanf("%d",&choice);

    if(choice == 1)
    {
      

    int base;
    int height;

    printf("Area of triangle calculator\n");
    printf("Enter the base of triangle in %s: ",measurement);
    scanf("%d",&base);

    printf("Enter the height of triangle in %s: ", measurement);
    scanf("%d",&height);

    int area = (base * height) /2;

    printf("the area of triangle is: %d %s^2\n", area,measurement);
    
   }

   else if(choice == 2)
   {
     int side1,side2,side3;
     printf("perimeter of triangle calculator\n");
 
    printf("Enter side1 of triangle in %s: ",measurement);
    scanf("%d",&side1);

    printf("Enter the side2 of triangle in %s: ", measurement);
    scanf("%d",&side2);

    printf("Enter the side3 of triangle in %s: ", measurement);
    scanf("%d",&side3);

    int perimeter = side1+side2+side3;

    printf("the perimeter of triangle is: %d %s\n", perimeter,measurement);
     
   }
   else
   {
    printf("invalid choice. please run the program again and choose 1 or 2 \n");
   }
  
    /* printf("please rate our program answers 0-10:\n");
    scanf("%d",&rate);
    if(rate == 0 || rate <= 10)
    {
       printf("thank you for your feedback\n");
    }
    else
    {
      printf("invalid rate number,  it must be between 0-10\n");
    }*/
   return(0);

}