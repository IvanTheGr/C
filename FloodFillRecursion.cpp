#include<stdio.h>

//Global Variable -> Variabel yang bisa diakses oleh baris kode manapun
//Characteristic Global Variable
//Untuk integer, default value 0
//Untuk char(char array,dll.), default value \0 {Null Terminator}

char map[110][110];
int count=0, playerRow,playerColumn;
//Count => final result kita(berapa banyak lantai yang udah kena banjir)
//playerRow & playerColumn => koordinat si S
//floodfill(playerRow,playerColumn);

void floodfill(int row, int column){
	if(map[row][column]=='#' || map[row][column]=='\n' || map[row][column]=='\0'){
		return; //Arti return di void itu keluar dari fungsi
		//Base Case
	}
	
	//Kalau ketemu titik/lantai
	if(map[row][column]=='.'){
		count++;
	}
	
	map[row][column]='#';
	
	floodfill(row+1,column); //Ke arah bawah
	floodfill(row-1,column); //Ke arah atas
	floodfill(row,column+1); //Kanan
	floodfill(row,column-1); //Kiri
}

int main(){
	int tc;
	scanf("%d",&tc);
	
	for(int k = 1 ; k<=tc ; k++){
		int row,column;
		scanf("%d %d",&row,&column);
		for(int i =0; i<row;i++){
			for(int j=0; j<column+1 ;j++){
				scanf("%c",&map[i][j]);
				//Cari Koordinat si S
				if(map[i][j]=='S'){
					playerRow = i;
					playerColumn = j;
				}
			}
		}
		
		floodfill(playerRow,playerColumn);
		printf("Case #%d: %d\n",k,count);
		
		//Reset Map & Reset Counter untuk next Test Case
		count = 0, playerRow = 0 , playerColumn = 0;
		for(int i=0;i<row;i++){
			for(int j=0;j<column+1;j++){
				map[i][j]='\0';
			}
		}	
	}
	

	
	return 0;
}
