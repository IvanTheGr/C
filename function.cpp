// FUNCTION
// code yang bisa dijalankan secara terpisah dari bagian lainnya
// ga ikut ke run secara langsung kecuali dipanggil -> function udah pasti diluar int main

#include <stdio.h>

// 2 tipe function: void dan int
// void: tidak ada return
// int: HARUS ada return (return = mengembalikan nilai)

// returnType functionName (parameters) { }
// int or void BEBAS (BEBAS) {}


void sayHello() {
	puts("Hello anak b27");
	// puts itu sama kek printf tapi dia auto ada enter atau \n cuma buat string
}

void sayThankz(){
	puts("thankz to anak b27");
}

int add (int j, int k) {
	int sum = j+k;
	return sum;
}

int addMore (int j, int k, int l) {
	sayThankz();
	int sum = j+k+l;
	return sum;
}

// passing by reference
void addByReference(int a, int b, int *hasil){
	*hasil = a+b;
	// void gabisa return value
}

float luasSeg(float a, float t) {
	float luas = 0.5*a*t;
	return luas;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
//	int sum = a+b;
//	printf("%d\n", sum);
	int result = add(a, b); // passing parameter
//	result-=5;
//	printf("%d\n", result);
//	int result2 = addMore(3,4,5);
//	printf("%d\n", result2);
//	printf("%d\n", addMore(19,2,4));
	
//	sayThankz();
	sayHello();
	
	// passing by reference
	int hasil; // declare alamat variable buat store value
	addByReference(a,b, &hasil);
	printf("%d\n", hasil);
	
	float alas = 5;
	float tinggi = 7;
	float luas = luasSeg(alas, tinggi);
	printf("%f\n", luas);
	
	
	return 22;
}
