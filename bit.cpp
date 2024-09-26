#include <stdio.h>

int main() {
	int a = 5;
	int b = 7;
	printf("%d\n", a&b); //and
	printf("%d\n", a|b); //or
	printf("%d\n", a^b); //xor
	printf("%d\n", a >> 3); // shift right
	printf("%d\n", a << 2); // shift left
	
	return 0;
}
