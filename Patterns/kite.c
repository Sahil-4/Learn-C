
/*
Kite pattern

       *
      ***
     *****
    *******
   *********
    *******
     *****
      ***
       *

N = 9
N += 2 <= N/2 + 1, N -= 2 >= 1
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int len;
    printf("Enter length : ");
    scanf("%d", &len);

    for (int i = 1; i < len; i += 2)
    {
        int r = len - i;
        r /= 2;
        for (int k = 1; k <= r; k++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = len; i >= 1; i -= 2)
    {
        int r = len - i;
        r /= 2;
        for (int k = r; k >= 1; k--)
        {
            printf(" ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}