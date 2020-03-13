# include "../check_mate/check.h"

int ft_abs(int nbr)
{
    if (nbr < 0)
        return (nbr * (-1));
    return (nbr);
}

int check_bishop(int x, int y, int x_k, int y_k)
{
    if (ft_abs(x - x_k) == ft_abs(y - y_k))
        return (1);
    return (0);
}

int check_pawn(int x, int y, int x_k, int y_k)
{
    if (y - 1 == y_k && (x + 1 == x_k || x - 1 == x_k))
        return (1);
    return (0);
}

int check_rook(int x, int y, int x_k, int y_k)
{
    if (x == x_k || y == y_k)
        return (1);
    return (0);
}

int check_queen(int x, int y, int x_k, int y_k)
{
    return (check_rook(x,y,x_k,y_k) || check_bishop(x,y,x_k,y_k));
}