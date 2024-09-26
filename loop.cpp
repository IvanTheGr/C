#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	// APA AJA YANG BISA KITA KASIH TAU LANGSUNG
	int size = (2*n)-1;
	int matrix[size][size];
	int start_row = 0;
	int end_row = size - 1;
	int start_col = 0;
	int end_col = size - 1;
	
	while (start_row <= end_row && start_col <= end_col){ // kita isi sampai semua terisi
		for (int i = start_col; i<= end_col; i++){
			matrix[start_row][i] = n;
		}
		start_row++;
		
		for (int i = start_row; i<= end_row; i++){
			matrix[i][end_col] = n;
		}
		end_col--;
		
		for (int i = end_col; i>= start_col; i--){
			matrix[end_row][i] = n;
		}
		end_row--;
		
		for (int i = end_row; i>= start_row; i--){
			matrix[i][start_col] = n;
		}
		start_col++;
		
		n--;
		
//		for (int i = 0; i<size; i++){
//			for (int j = 0; j < size; j++){
//				printf("%d ", matrix[i][j]);
//			}
//			puts("");
//		}
//		puts("NEXT LOOP");
	}
	
	
	for (int i = 0; i<size; i++){
		for (int j = 0; j < size; j++){
			printf("%d ", matrix[i][j]);
		}
		puts("");
	}
	
	
	
	return 0;
}
