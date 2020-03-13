#include "check.h"
//x_k, y_k - king's coordinates

int main(int argc, char **argv)
{
    int x_k;
    int y_k;
    int i;

    i = 0;
    if (argc > 1)
    {
        
        while (argv[i] && find_king(argv[i]) == 0)
            i++;
        x_k = find_king(argv[i]);
        y_k = i;
        i = 0;
        while (argv[i])
        {
            if (check_row(argv[i], i, x_k, y_k))
            {
                ft_putchar("Success\n");
                return (0);
            }
            i++;   
        }
        ft_putchar("Fail\n");
    }
    else
        write (1, "\n", 1);
    return (0);
}