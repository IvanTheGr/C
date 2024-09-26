#include<stdio.h>

int main(){
	//intro to pointer
	//pointer -> tipe data yang menunjuk alamat sebuah variabel tertentu
	
	int x=5;
//	scanf("%d",&x);
	printf("%d\n",x);
	//kalau mau coba print alamatnya
	//pakai &(ampersand)
	printf("%d\n",&x);
	
	//alamat yang tersimpan didalam ram kalian
	//pointer -> menunjuk ke alamat sebuah variabel
	//tipe data *nama = alamat yang dituju(&);
	int *ptr = &x;
	//ptr akan menunjuk ke alamat si x
	printf("%d\n",ptr);
	
	//pointer bisa dipake untuk manipulasi value di tingkat memory
	//konsep dereferncing
	*ptr =10;
	printf("%d\n",x);
	
	return 0;
}
