#include<stdio.h>

int main(){
	//Switch Case => Comparing satu buah variabel dengan beberapa value dengan efisien
	//Case => Kalkulator Super Sederhana , input 2 angka sama satu operator
	int angka1,angka2;
	char op; //Nanti untuk operator kalian
	
	printf("Welcome to Kalkulator Super Sederhana\n\n");
	printf("Input Angka Pertama Kamu : ");
	scanf("%d",&angka1);getchar();
	printf("Input Angka Kedua Kamu : ");
	scanf("%d",&angka2);getchar();
	printf("Input Operator [+ , - , * , /] : ");
	scanf("%c",&op);getchar();
		
	//Switch Case
	switch(op)
	{
		case '+':
			printf("Hasil = %d",angka1+angka2);
			break;
		case '-':
			printf("Hasil = %d",angka1-angka2);
			break;
		case '*':
			printf("Hasil = %d",angka1*angka2);
			break;
		case '/':
			printf("Hasil = %d",angka1/angka2);
			break;
		default: //Kalau semua case tidak memenuhi (dia setara dengan else)
			printf("Operator Invalid");
			break;				
	}
	
	
	
	
	return 0;
}
