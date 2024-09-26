#include<stdio.h>
#include<string.h>

int main(){
	//1. Count Occurence
	char x[100] = "andrew widjaya"; //Kumpulan char , banyak char
	
	//Cara kita ambil charnya satu - satu?
	//Ambil berdasarkan index
	printf("%c\n",x[0]);
	printf("%d\n",strlen(x));
	//store count(menyatakan banyaknya huruf a)
	int count = 0;
	//Berapa banyak huruf a dalam char array x
	for(int i = 0 ; i<strlen(x) ; i++){ //Looping ini untuk traverse char satu per satu dalam char array x
		if(x[i] == 'a'){
			count +=1;
		}
	}	
	printf("%d\n",count);
	
	//2. Capitalize and Decapitalize
	//Kapitalisasikan semua huruf vokal (a,i,u,e,o)
	for(int i = 0 ;i<strlen(x) ; i++){
		if(x[i] == 'a' || x[i] == 'i' || x[i] =='u' || x[i] == 'e' || x[i] =='o'){
			x[i] -= 32; //Mainin ascii nya 
		}
	}
	printf("%s\n",x);
		for(int i = 0 ;i<strlen(x) ; i++){
		if(x[i] == 'A' || x[i] == 'I' || x[i] =='U' || x[i] == 'E' || x[i] =='O'){
			x[i] += 32; //Mainin ascii nya 
		}
	}
	
	
	//3. Palindrome -> Soal UTS sayahhh,
	// Sebuah kondisi dimana sebuah kata dibaca terbalik itu sama
	// TENET , MAMAM 
	
	//4. Anagram -> Tes Masuk Internship Tokped
	// abc -> acb, bac, bca, cab, cba
	
	//5. 7
//	T
//	##
//	TOK
//	####
//	TOKOP
//	######
//	TOKOPED
	
	printf("%s\n",x);
	
	
	return 0;
}
