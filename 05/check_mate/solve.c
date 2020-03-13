# include "../check_mate/check.h"

void ft_putchar(char *s)
{
    while (*s)
        write(1, s++, 1);
}

int find_king(char *row)
{
    int x;

    x = 0;
    while (row[x++])
        if (row[x] == 'K')
            return (x);
    return (0);
}

int check_row(char *row, int y, int x_k, int y_k)
{
    int x;

    x = 0;
    while (row[x]++)
    {
        if (row[x] == 'R' && check_rook(x, y, x_k, y_k))
            return (1);
        if (row[x] == 'B' && check_bishop(x, y, x_k, y_k))
            return (1);
        if (row[x] == 'P' && check_pawn(x, y, x_k, y_k))
            return (1);
        if (row[x] == 'Q' && check_queen(x, y, x_k, y_k))
            return (1);
        x++;
    }
    return (0);
}