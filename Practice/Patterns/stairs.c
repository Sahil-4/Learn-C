
/* Pattern :

    *
   ***
  *****
 *******
*********

    A
   AAA
  AAAAA
 AAAAAAA
AAAAAAAAA

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // Stairs Pattern
    int len;

    printf("Enter length of pattern : ");
    scanf("%d", &len);

    for (int i = 1; i <= len; i += 2)
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
}