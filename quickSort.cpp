// QUICK SORT
// Cari pivot -> angka penentu buat dibandingin dgn angka lainnya
// angkat yg dibandingin dg pivot lebi kecil maka akan masuk ke kiri, sebaliknya ke kanan

#include <stdio.h>

void swap (int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int arr[], int low, int high) {
	int pivot = arr[high]; // value of last element of the arr
	int i = (low - 1); // index lowest arr
	
	for (int j = low; j<=high -1; j++){
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], & arr[j]);
		}
	}
	
	swap(&arr[i+1], &arr[high]);
	
	return i+1;
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pivotIdx = partition(arr, low, high);
		
		quickSort(arr, low, pivotIdx -1); // left
		quickSort(arr, pivotIdx+1, high); // right
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
	
	quickSort(arr, 0, n-1);
	
	printf("RESULT SORTED ARRAY: ");
	print(arr, n);
}


// oot
// 10 angka -> bubble 10000 angka -> quick sort
