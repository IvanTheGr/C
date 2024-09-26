#include<stdio.h> //Untuk input output , contoh = printf, scanf, dll.
#include<string.h> //Untuk String Manipulation, contoh = strlen, strcmp, strcpy

int main(){
	//String manipulation
	//Char array -> char x[100] ,dll.
	//strlen, strcpy , strcmp 
	
	char x[100] = "Makan Ayam";
	
	//Sifat-sifat char array
	//1. Array bersifat zero-indexing=>dia akan mulai store data dari index 0
	//char array x dengan ukuran 100-> dia bakal store char pertama itu di index 0
	//x[0] = 'M' , x[1] = 'a' , x[2] = 'k' , x[3] = 'a', x[4] ='n' , dst.
	printf("%c\n",x[0]);
	
	//2. char array akan berakhir dengan \0
	//"Makan Ayam\0" => Akhir dari sebuah string/char array
	//"012345678910"
	//Pembuktian bahwa di akhir itu ada \0
	if(x[10] == '\0'){
		printf("Terbukti\n");
	}
	
	//1. strlen => mencari panjang string/char array , hasilnya berupa angka
	printf("%d\n", strlen(x));
	
	//2. strcpy => Assign 1 variable char array ke variable char array lain
	char a[100] = "Andrew";
	char b[100];
//	b = a; // Kamu gabisa assign char array dengan cara begini
	//Format = strcpy(destination variable, source variable)
	strcpy(b,a);
	printf("%s\n",b);
//	printf("%s\n",a); 

	//ASCII 
	//Kalian punya karakter, contoh 'A' => value integer sesuai dengan ASCII value
	//Setiap karakter nilainya beda-beda
	//Bisa dilihat di ASCII table
	printf("%d\n",'C');
	
	//3. strcmp => compare string , hasilnya berupa integer
	// cara kerja strcmp => Dia bakal ambil hasil selisih ascii kedua string
	// Andrew => 65+110+100+114+101+119
	// Andrew => 65+110+100+114+101+119
	// Kalau nilainya 0 -> Artinya kedua string sama
	// Kalau nilainya >0 -> char array 1 > char array 2
	// Kalau nilainya <0 -> char array 1 < char array 2
	//Format = strcmp(char array 1, char array 2) -> Maksimal 2 string
	//Case String sama , value = 0
	printf("%d\n",strcmp("Andrew","Andrew"));
	//Case String beda, value = -1
	printf("%d\n",strcmp("A","B"));	
	//Case String beda, value = 1
	printf("%d\n",strcmp("B","A"));
	
//	kak strcmp bisa dijadikan expression dalam if gak sih kak? contohnya: if (strcmp(x, y))
//	Bisa
	if(strcmp("Andrew","Andrew") == 0){
		printf("Valid\n");
	}
	
	//Kalau kalian mau compare secara insensitive, pakai strcmpi
	printf("%d",strcmpi("Andrew","andrew"));
	
	
//	The return value from strcmp is 0 if the two strings are equal, 
//	less than 0 if str1 compares less than str2 , 
//	and greater than 0 if str1 compares greater than str2
	
	//strcmp => sorting char array
	//Budi Andrew Lina => Andrew Budi Lina
	
	
	//OOT => sizeof = untuk menyatakan ukuran sebuah data
	//printf("%d\n",sizeof(int));
	
	
	//	Kak, kalau ASCII ke " AYAM", bisa? Atau cuma bisa untuk single character?
	
	
	
	return 0;
}



