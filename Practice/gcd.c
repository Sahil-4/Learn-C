
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2) {
    // function to return greatest common devisor of a and b 
    for (int i = n1 < n2 ? n1 : n2; i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }

    return 1;
}

int main() {

    int a = 56, b = 52;
    int hcf = gcd(a, b);

    printf("%d\n", hcf);

    return 0;
}
