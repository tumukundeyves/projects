#include <unistd.h>

void    ft_hello()
{
    write(1,"Hello World!\n",13);
}

int main(void)
{
    ft_hello();
    return (0);
} 