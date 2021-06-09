// Demo.c 

#include <stdio.h>

int aGlobalVariable;

int genNum() {
    return 1;
}

int main() {
	int A = genNum();
	printf("%d\n", A);
	return 0;
}


