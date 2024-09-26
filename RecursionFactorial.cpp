#include<stdio.h>

//Recursion-> Self-called Function / Fungsi yang memanggil dirinya sendiri
//Ciri-ciri Recursion
//1. Dia pasti ada manggil fungsinya di dalem fungsinya sendiri
//2. Dia harus punya base case untuk ngga rekursif terus-menerus

//Kalau x = 1, dia bakal return 1
int factorial(int x){
	if(x==1){
		return 1; //Disebut juga dengan base case
	}else{
		return x * factorial(x-1);
	}
}


int main(){
	//Faktorial
	//Misal, kamu dikasih 1 angka
	//Tentukan nilai faktorial dari angka tersebut
	//5! = 5x4x3x2x1
	
	int n;
	scanf("%d",&n);
	
	printf("%d\n",factorial(n));
	
//	int result = 1;
	
	//Looping -> Iterative Method, dimana kamu melakukan perulangan sampe selesai
//	for(int i=n; i>=2;i--){
//		result *= i;
//	}
//	
//	printf("%d\n",result);
//	
	
	return 0;
}
