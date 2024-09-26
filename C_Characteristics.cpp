#include<stdio.h>

int main(){
	
	//1.
	printf("%d\n",39/10);
	//C punya aturan dimana pembulatan integer ke bawah
	
	//2.
	int x = 39;
	int y = 10;
	printf("%.2f",float(x)/y);
	//Typecast => Kamu bisa ganti tipe data sebuah variabel
	
	return 0;
}
