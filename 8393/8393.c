#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", (n * (n + 1)) / 2);
	return 0;
}