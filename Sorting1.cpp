#include<stdio.h>

int main(){
	//Sorting
	//Pengurutan, descending(gede ke kecil) / ascending(kecil ke gede)
	//Sorting ini bisa di integer ataupun char array
	//budi, andi, cita -> andi,budi,cita
	
	//Sorting 1 -> Greedy Algorithm , kamu akan looping secara brute force
	//Sorting 2 -> Divide and Conquer Algorithm , kamu akan mecah problemnya jadi
	//subproblem yang lebih sederhana -> lebih hemat time complexity
	
	//Algorithm 1 -> Bubble Sort -> Time Complexity = O(n^2) ,n menyatakan banyak bilangan
	//Kodingan plg sederhana , mostly effective
	int n; //Menandakan banyak bilangan
	scanf("%d",&n);
	
	int arr[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	//Bubble Sort
	for(int i=0 ; i<n-1 ; i++){
		for(int j =0 ; j<n-i-1 ; j++){
			if(arr[j] > arr[j+1]){ //Kalau mau descending -> > menjadi <
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

//	//Algorithm 2 -> Selection Sort -> Time Complexity = O(n^2) ,n menyatakan banyak bilangan
	for(int i=0;i<n-1;i++){
		int index = i;
		for(int j = i+1 ; j<n ; j++){
			if(arr[index] > arr[j]){
				index = j;
			}
		}
		
		if(index !=i){
			int temp = arr[index];
			arr[index] = arr[i];
			arr[i] = temp;
		}
		
	}
	
	
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
