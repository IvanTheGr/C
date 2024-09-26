// OPERATOR

#include <stdio.h>
int main(){
	int a = 10;
	int b = 3;
	int plus = a+b;
	int min = a-b;
	int kali = a*b;
	int bagi = a/b;
	printf("%d\n", bagi);
	int modulo = a%b;
	// modulo = sisa hasil bagi
	// 10 % 2 = 5 gada sisa
	// 10 % 3 = 9 + 1
	a = a+5; // a = 15
	a += 7; // a = 22 //UDAH KELAR DIA PRINT
	printf("%d\n", a);
	a = a+3; // a = 25
	a -= 10;
	int hasil = (a+b)*a;
	printf("%d + %d = %d\n", a, a, a+a);
	printf("%d - %d = %d\n", a, a, a-a);
	
	printf("a = %d dan b = %d\n", a, b);
	if (a>b) {
		printf("A LEBIH BESAR B");
	} else {
		printf("B KURANG DARI A");
	}

	//	if (a!=b) {
	//		printf("A  TIDAK SAMA DENGAN B");
	//	} else {
	//		printf("B  SAMA DENGAN A");
	//	}
		
	//	if (a==b) {
	//		printf("A SAMA DENGAN B");
	//	} else {
	//		printf("B TIDAK SAMA DENGAN A");
	//	}
	 // = ARTINYA ASSIGN VALUE
	 // == ARTINYA DIA NGEBANDINGIN COMPARISON
	 // != ngebandingin dan artinya tidak sama dengan
	 
	 // <, >, <=, >=
	
	
	return 0;
}
