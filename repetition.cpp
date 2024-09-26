// REPETITION
// untuk menjalankan atau run baris code tertentu berulang kali sampai ketentuan tertentu

#include <stdio.h>
int main(){
	// FOR, WHILE, DO WHILE
	// for(int mulai; int kondisi contoh <5; i++ atau i--
	// stop ketika udh g memenuhi kondisi
	// index slalu mulai dari nol bukan satu
	
	// INI I++
	//	for (int i = 5; i < 10; i++){
	//		printf("%d\n", i);
	//		printf("I LOVE YOU\n");	
	//	}
	
	// INI I--
	//	for (int i = 10; i > 5; i--){
	//		printf("%d\n", i);
	//		printf("I LOVE YOU\n");	
	//	}
	// iterasi pertama =10
	// i-- -> 10-1= 9
	// iterasi 3 i=8
	// iterasi 4 i=7
	// iterasi 5 i=6
	// iterasi 6 5 -> SALAH kondisi (i > 5)
	
	// WHILE
	//	int a = 0;
	//	while (a < 3) {
	//		printf("hai\n");
	//		printf("%d\n", a);
	//		a++;
	//	}
	
	// DO WHILE
	//	int b = 4;
	//	do {
	//		printf("hello\n");
	//		printf("%d\n", b);
	//		b--;
	//	} while (b>0);
	// CONDITION < > <= >=
	
	//	int c = 3;
	//	do {
	//		printf("holaa\n");
	//		printf("%d\n", c);
	//		c--;
	//	} while (c>=0);
	
	
	//	for (int i = 0; i < 10; i++){
	//		printf("%d\n", i);
	//		printf("I LOVE YOU\n");	
	//		if (i == 4) {
	////			break;
	//			// stop / terminate
	//			continue;
	//			// ttp jalan
	//		}
	//	}
	
	//	for (int i = 5; i < 10; i--){
	//		printf("%d\n", i);
	//		printf("I LOVE YOU\n");	
	//	}
	// ketika conditionnya true -> ngerun code ny -> jadi infinite loop 
	
	//	int a = 0;
	//	while(a < 15){
	//		printf("I LOVE U\n");
	//		printf("%d\n", a);
	//		a+=3;
	//	}
		
	//	while(1){
	//		printf("abc\n");
	//	}

	// NESTED LOOP
	//	for(int i = 0; i < 5; i++){
	//		for(int j = 0; j < 5; j++){
	//			printf("i = %d dan j = %d\n", i, j);
	//			// jalanin slama masih true
	//			if (j == 2) break;
	//		}
	//		// FALSE DIA KELUAR 
	//	}
	
	// LOOP 1 YAITU I
	// di dlm loop 1 ada loop 2 YAITU J
	//	LOOP I -> LOOP J -> J JALAN 5 KALI DULU SAMPE KONDISINY FALSE -> I YANG KE 2
		
	//	int a;
	//	for (int i = 0; i<3; i++){
	//		scanf("%d", &a);
	//		printf("%d\n", a);
	//	}
	
	
	
	return 0;
}
