#include<stdio.h>

char map[110][110];
int count, playerRow,playerColumn;
void floodfill(int row, int column){
	if(map[row][column]=='#' || map[row][column]=='\n' || map[row][column]=='\0'){
		return;
	}

if(map[row][column]=='.'){
	count++;
}

map[row][column]=='#';

floodfill(row+1,column);
floodfill(row-1,column);
floodfill(row,column+1);
floodfill(row,column-1);

int main(){
	int tc;
	scanf("%d",tc);
	
	for(int k = 1; k<=tc; k++){
		int row,column;
		scanf("%d %d",&row,&column);
		for(int i = 0; i<row;i++){
			for(int j=0; j<column+1;j++){
			scanf("%c",&map[i][j]);
			if(map[i][j]=='S'){
				playerRow = i;
				playerColumn = j;
			}
		}
	}
}	
	floodfill(playerRow,playerColumn);
	printf("Case #1 :%d",k,count);
	
	count =0,playerRow = 0,playerColumn =0;
	for(int i=0;i<row;i++){
		for(int j=0;j<column+1;j++){
			map[i][j]='\0';
		}
	}
}

	return 0;
}
