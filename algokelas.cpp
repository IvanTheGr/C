#include<stdio.h>

int linearSearch(int *array, int key, int size){
	for(int i =0 ; i < size ; i++){
		if(array[i] == key){
			return i;
		}
	}
	return -1;
}


int main(){
	int size;
	scanf("%d",&size);
	getchar();
	int array[size];
	int index;
	for(int i = 0;i<size;i++){
	scanf("%d",&array[i]);
	getchar();
	}
	int key;
	scanf("%d",&key);
	getchar();
	index = linearSearch(array,size,key);
	printf("%d\n",index);
	
	return 0;
}
