#include <stdio.h>
#include <math.h>

int sc (int b){
	int n=sqrt(b);
	int nn=cbrt(b);
	
	if(n*n==b && nn*nn*nn==b){
		return 1;
	}
	return 0;
}
int s(int b){
	int n=sqrt(b);
	return n*n==b;
}
int c (int b){
	int n=cbrt(b);
	return n*n*n==b;
}
int p(int b) {
    if (b <= 1) {
        return 0;  
    }
    for (int i = 2; i <= sqrt(b); i++) {
        if (b % i == 0) {
            return 0;  // It has a divisor other than 1 and itself
        }
    }
    return 1;  // It's a prime number
}


int main(){
	int a,b;
	scanf("%d",&a);
	
	for (int i=0;i<a;i++){
		scanf("%d",&b);
		
		if(sc(b)){
			printf("Case #%d : square cubic\n",i+1);
		}
		else if(s(b)){
			printf("Case #%d : square\n",i+1);
		}
		else if(c(b)){
			printf("Case #%d : cubic\n",i+1);
		}
		else if(p(b)){
			printf("Case #%d : prime\n",i+1);
		}
		else {
			printf("Case #%d : none\n",i+1);
		}
	}
	return 0;
}
