#ifndef CHECK_H
# define CHECK_H
# include "../check_mate/check.h"
#include <unistd.h>

int     ft_abs(int nbr);
int     check_bishop(int x, int y, int x_k, int y_k);
int     check_pawn(int x, int y, int x_k, int y_k);
int     check_rook(int x, int y, int x_k, int y_k);
int     check_queen(int x, int y, int x_k, int y_k);
void    ft_putchar(char *s);
int     find_king(char *row);
int     check_row(char *row, int y, int x_k, int y_k);

#endif