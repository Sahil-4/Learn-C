
#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    int rows, cols;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    printf("Enter number of cols : ");
    scanf("%d", &cols);

    for (int i = 1; i <= cols; i++)
    {
        if (i == 1 || i == cols)
        {
            for (int j = 1; j <= rows; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int k = 1; k <= rows; k++)
            {
                if (k == 1 || k == rows)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}
