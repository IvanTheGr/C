#include<stdio.h>

int main(){
	
	//Continue => Jika kondisi itu ketemu(base case if ketemu), dia bakal lewatin loopingan itu
	//Kasus => aku disuruh input 2 angka, x dan y. Print angka genap yang berada between x dan y
	int x,y;
	scanf("%d %d",&x,&y);//ASUMSI X PASTI LEBIH KECIL DARI Y (1 2) , (5 10)
	//for (inisialisasi ; base condition ; updatestatement)
	//Misal dikasih 2 angka => x dan y. Cari angka genap diantara x dan y
	
	//Kodingan itu dibaca sesuai urutan
	for(int i = x ; i<=y ; i++){
		if(i%2==1){
			continue;
		}
			
		printf("%d ", i);		
	}
	
		
	// x = 5 dan y = 10
	//Continue -> Next loop (kalau sekarang i = 5, yaudah lanjut i =6)
	// i = 5 , dia masuk ke dalam if i%2==1 ,maka dia akan run continue=> dia itu lanjut ke next loop
	// Langsung i++ = i yang sekarang menjadi 6
	
	
	
	return 0;
}
