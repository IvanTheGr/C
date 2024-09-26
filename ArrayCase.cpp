#include<stdio.h>
#include<string.h>
#include<windows.h>


int main(){
	//Misal akan ada input
	//Line 1-> t = menandakan test case
	//Di setiap test case, akan ada sebuah integer n yang mengindikasi row dan column sebuah matrix
	//Setelah n diinput, input sebuah n x n matrix
	//Berikan output jumlah tiap baris pada matrix tersebut
	//Contoh =
	//1
	//3
	//1 2 3
	//4 5 6
	//7 8 9
	//Expected Output = Case #1: 6 15 24
	
	//Inputlah Test Case
	int tc;
	scanf("%d",&tc);
	
	for(int t=1 ;t<=tc ; t++){
		int n;
		scanf("%d",&n);
		int matrix[n][n];
		int sumofrow[n] ={0};//Ini buat store jumlah per baris
		memset(sumofrow,0,sizeof(sumofrow)); 
		//Scanning 2D Array
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d", &matrix[i][j]);
				sumofrow[i] += matrix[i][j];
			}
		}
		
		printf("Case #%d: ",t);
		for(int i=0;i<n;i++){
			printf("%d ",sumofrow[i]);
		}
		//TLE(Time Limit Exceeded) => Kodingan kamu kelamaan, sampe ngelebihin batas dari OJ
//		Ini buat test input masuk atau tidak
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++){
//				printf("%d ",matrix[i][j]);
//			}
//			printf("\n");
//		}
	}
	
	return 0;
}
