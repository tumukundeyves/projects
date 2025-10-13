#include "mylib.h"

/*void    ft_name()
{
    write(1, "my name is Yves\n",16);
    
      write(1, "my surname is Tumukunde\n",24);
}

int main()
{
    ft_name();
    return (0);
}*/

/*int main(void)
{
    char name[] = "yves";
    char surname[] = "Tumukunde";

   
    write(1,"my name is: ",12);
    write(1, name,4);

    return(0);
}*/

void ft_names(void)
{
    char name[] ="yves";
    char username[] = "tumukunde";

    printf("my name is %s\n",name);
    printf("my username is %s\n", username);
}