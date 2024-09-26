#include<stdio.h>

long long int Function(int m, int n){
	if(m==0 || n ==0){
		return 1; //Base Case
	}else{
		return Function(m-1, n-1) + Function(m-1,n) + Function(m,n-1);
	}
}

int main(){
	int M,N;
	scanf("%d %d",&M,&N);
	
	//long int JANGAN
	//Why? PC 32-bit akan treat long int sebagai int
	//PC 64-bit akan treat long int as long long int
	
	
	printf("%lld\n",Function(M,N));
	
	return 0;
}
