#include<stdio.h>
//Declaration Function
//Swapping Data (Passing by Value vs Passing by Reference)

//Kodingan akan dibaca dari atas ke bawah
//Caranya biar kodingan kamu bisa baca duluan si SayThanks()?
//Jawaban => Kamu Declare dulu
//How to Declare?

void SayThanks();
void SayHello();

void SayThanks(){
	SayHello();
	printf("Thanks\n");
}

void SayHello(){
//	SayThanks();
	printf("Hello Say\n");
}

void swap(int a,int b){
	//Logic dari swapping data
	int temp = a;
	a = b;
	b = temp;
	printf("Nilai A dan B di function ini adalah %d %d\n",a,b);
}

void swapbyref(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}



int main(){
	SayThanks();
	//Aku punya 2 buah integer, namakan saja a dan b. 
	//Tukar nilai a dan b dengan sebuah function
	int a,b;
	scanf("%d %d",&a,&b);
//  Cara batu
//	int temp = a;
//	a = b;
//	b = temp;
	

//	swap(a,b); //Passing by Value => Yang kamu lempar adalah valuenya
	swapbyref(&a,&b);
	printf("%d %d\n",a,b);
	
	
	return 0;
}

//say thanksnya harus di comment dlu ya ka baru bisa di run

