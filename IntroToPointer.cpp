#include<stdio.h>

int main(){
	//Intro to Pointer
	//Pointer -> tipe data yang menunjuk alamat sebuah variabel tertentu
	
	int x = 5;
//	scanf("%d",&x); //Input ke alamat si x
	printf("%d\n",x);
	//Kalau mau coba print alamatnya
	//Pakai &(ampersand)
	printf("%d\n",&x); //Print alamat si x
	
	//Alamat yang tersimpan di RAM kalian
	//RAM = Random Access Memory
	
	//Pointer -> menunjuk ke alamat sebuah variabel
	//Tipe data *nama = alamat yang dituju(&);
	int *ptr = &x;
	//ptr akan menunjuk ke alamat si x
	printf("%d\n",ptr);
	
	//Kenapa kita perlu belajar pointer?
	//Pointer bisa dipake untuk manipulasi value di tingkat memory
	//Konsep = Dereferencing
	*ptr = 10;
	//Passing by value VS Passing by Reference (Later di Function)
	
	printf("%d\n",x);
	
	
	return 0;
}
