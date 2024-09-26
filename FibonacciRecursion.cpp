#include<stdio.h>

//Fibonacci Sequence 
//->Biasanya fibo(0) = 0 , fibo(1) = 1 {Default Value}

int fibo(int x){
	if(x==0){
		return 0; //Base Case
	}else if(x==1){
		return 1; //Base Case
	}else{
		return fibo(x-1) + fibo(x-2);
	}	
}

int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d\n",fibo(n));
	
	
	return 0;
}
