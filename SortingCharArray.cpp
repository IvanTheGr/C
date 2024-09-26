#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	//Sorting Char Array
	char array[n+1][100];
	for(int i=0;i<n;i++){
		scanf("%s",array[i]);
	}
	
	for(int i=0 ; i<n-1 ; i++){
		for(int j =0 ; j<n-i-1 ; j++){
			if(strcmp(array[j],array[j+1]) > 0){ //Kalau mau descending -> > menjadi <
				char temp[100]="";
				strcpy(temp,array[j]);
				strcpy(array[j],array[j+1]);
				strcpy(array[j+1],temp); //Format(destination,source)
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%s\n",array[i]);
	}
		
	return 0;
}	
