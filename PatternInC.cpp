#include<stdio.h>

int main(){
	int x; //Menyatakan ukuran/dimensi
	scanf("%d",&x);
	
	//Nested loop -> Kalau buat pattern, normally start dari 1
	//Kalau nested loop, itu jangan sampe sama initialization variable
	//satu pake i, yang nested jangan pake i juga
	
	//Aturan buat pattern Binus =>Mostly gaboleh ada trailing spaces
	
	//Pattern 1 = Kotak - kotak
	for(int i = 1 ; i<=x; i++){
		for(int j = 1; j<=x ; j++){
			if(j==x){
				printf("#");
			}else{
				printf("# ");				
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//Pattern 2 => Staircase
	for(int i=1;i<=x;i++){ //Print new line
		for(int j=1;j<=x;j++){ // Buat isi baris
			if(j<=i && j==i){
				printf("#");
			}else if(j<i){
				printf("# ");
			}
		}
		printf("\n");
	}
	
	//i = 1 (1<=5)
		//j=1 (1<=5) printf("# ")
	//i = 2 (2<=5)
		//j=1 (
	
	//Make sure there is/are no trailing spaces in the end of line
	
	return 0;
}
