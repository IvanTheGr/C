// MERGE SORT
// pisah di tengah -> merge n sort -> merge all

#include <stdio.h>

void merge (int arr[], int left, int right, int middle) {
	int i, j, k;
	int n1 = middle-left+1; // left
	int n2 = right - middle; // right
	
	int L[n1];
	int R[n2];
	
	// COPY data ke temp
	for (int i = 0; i <n1; i++){
		L[i] = arr[left+i];
	}
	for (int j = 0; j<n2; j++){
		R[j] = arr[middle+1+j];
	}
	
	i = 0, j = 0, k =left;
	
	while (i<n1 && j<n2) {
		if (L[i] <= R[i]){
			arr[k] = L[i];
			i++;
		}else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right) {
	if (left < right) {
		int middle = left + (right - left) / 2;
		
		mergeSort(arr, left, middle);
		mergeSort(arr, middle+1, right);
		
		merge(arr, left, right, middle);
	}
}

void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[] = {19, 25, 7, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	mergeSort(arr, 0, n-1);
	
	printf("RESULT SORTED ARRAY: ");
	print(arr, n);
}
