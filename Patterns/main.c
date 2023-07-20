
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("1. Solid Rectangle\n");

    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 7; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    printf("\n\n\n");


    printf("2. Holo Rectangle\n");

    int x = 7;
    int y = 5;

    for (int i = 0; i <= y; i++) {
        if (i == 0 || i == y) {
            for (int j = 0; j <= x; j++) {
                printf("*");
            }
        } else {
            for (int j = 0; j <= x; j++) {
                if (j == 0 || j == x) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("3. Half Pyramid\n");
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("4. Inverted Half Pyramid\n");
    n = 5;
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("5. Inverted Half Pyramid (180 Deg Rotated)\n");
    n = 5;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("6. Half Pyramid with Numbers\n");
    n = 7;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("7. Inverted Half Pyramid with Numbers\n");
    n = 7;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("8. Floyds Triangle\n");

    n = 5;
    int d = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", d);
            d++;
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("9. 0 1 Triangle\n");

    n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((j + i) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("10. Solid Rhombus\n");
    n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("11. Number Pyramid \n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > n - i)
                printf("%d", i);
            printf(" ");
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("12. Palindromic Number Pyramid\n");

    n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = i; j > 1; j--) {
            printf("%d", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("13. Palindromic Number Pyramid II \n");

    n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = i; j > 1; j--) {
            printf("%d ", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("14. Butterfly Patterns\n");

    n = 4;

    // first half
    for (int i = 1; i <= n; i++) {
        // printing star
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // printing space
        for (int j = 1; j <= (n - i) * 2; j++) {
            printf(" ");
        }
        // printing star
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // second half
    for (int i = n; i >= 1; i--) {
        // printing star
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // printing space
        for (int j = 1; j <= (n - i) * 2; j++) {
            printf(" ");
        }
        // printing star
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n\n");

    printf("15. Diaomond Pattern \n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}