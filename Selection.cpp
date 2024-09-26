#include<stdio.h>

int main(){
	
	int x = 7;
	
	//1. If(else if & else)
	//x=5 (itu namanya assignment operator, kamu memasukan nilai x sebesar 5
	//x==5 (artinya apakah x bernilai 5, hasilnya akan bernilai true or false)
	if(x==6){
		printf("X bernilai 6");
	}else if(x==5){
		printf("X bernilai 5");
	}else if(x==4){
		printf("X bernilai 4");
	}else{
		printf("X tidak bernilai 6 maupun 5");
	}
	
	return 0;
}

//Selection -> Baris code yang akan berjalan jika memenuhi sebuah syarat / base case
//1. If(else if, else) 2.Switch case 3.Ternary Operator
