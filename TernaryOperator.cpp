#include<stdio.h>

int main(){
	//Ternary Operator => Shortcut untuk IF ELSE dalam satu baris code
	
	int x = 5;
	//Kalau pake if
//	if(x==5){
//		printf("X bernilai 5");
//	}else{
//		printf("X tidak bernilai 5");
//	}

	//Format Ternary Operator
	// (base case)? True statement : false statement
//	printf("%s",(x==5)? "X bernilai 5" : "X tidak bernilai 5");
	//Bisa dipake di nested if, contohnya kek dibawah ini(Not reccomended)
	printf("%s",(x==5)? ((x%2==0)?"X bernilai 5 & genap " :"X bernilai 5 & ganjil" ): "X tidak bernilai 5");
	return 0;
}
