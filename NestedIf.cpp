#include<stdio.h>

int main(){
	//Nested if => Akan ada sebuah selection di dalam selection
	
	int x = 11;
	
	//Kalau x<10, buat perbandingan apakah nilai x ganjil atau genap
	if(x<10){
		//Define apakah bilangan ganjil atau genap
		if(x%2 == 1){
			printf("X bernilai kurang dari 10 dan berisi angka ganjil");			
		}else if(x%2==0){
			printf("X bernilai kurang dari 10 dan berisi angka genap");
		}
	}else{
		printf("X bernilai besar sama dengan dari 10");
	}
	
	return 0;
}
