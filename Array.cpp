#include<stdio.h>

int main(){
	//Array
	//1D Array
	//->Kumpulan tipe data sejenis yang berada di satu variabel
	//Char array/string
	char x[100] = "12345678910";
	//Integer Array
	//Tetap menggunakan zero indexing
	int y[10] = {1,2,3,4,5,6,7,8,9,10};
	//Sizenya 10, indexnya 0-9(total juga 10)
	printf("%d\n",y[0]);
	
	//2D Array
	//String array?
	//Kotak 1-> Banyak string
	//Kotak 2-> Maximum Char per String
	char a[10][100] = {"Max","Adam","Budi","Ayam","Babi",};
	printf("%s\n",a[0]);
	printf("%c\n",a[0][0]);//Ini buat print huruf dalam satu char array
	
	//2D Int Array (Matrix)
	//Kotak 1 -> Row
	//Kotak 2 -> Column
	int matrix[3][3]
	={
		{1,2,3},
		{4,5,6},
		{7,8,9},
	 };
	 
	printf("%d\n",matrix[2][0]);
	 
	return 0;
}
