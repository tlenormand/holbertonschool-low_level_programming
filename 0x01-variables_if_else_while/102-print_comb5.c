#include <stdio.h>

/**
 * main - write digit number
 * write all single digit numbers of base 10 starting from 0, using putchar
 * Return: 0 always
 */

int main(void)
{

int m = 48;
int c = 48;
int d = 48;
int u = 48;

while (m < 58)
{
    while (c < 58)
    {
        while (d < 58)
        {
            while (u < 58)
            {
                putchar(m);
                putchar(c);
                putchar(32);
                putchar(d);
                putchar(u);
                if (m == 57 && c == 56 && d == 57 && u == 57)
                {

                }
                else{
                putchar(44);
                putchar(32);
                }
                
                u++;
            }
            u = 48;
            d++;
        }
        d = m;
        u = c+2;
        c++;
    }
    c = 48;
    m++;
}

putchar('\n');

return (0);
}
