#include<stdio.h>


long long int min(long long int a, int b){
	if(a>=b)return b;
	return a;
}

void solve(){
	long long int n,dicari;
	scanf("%lld %lld",&n,&dicari);
	long long int first = 1;
	long long int last = n;
	if(last % 2 == 0)last++;
	if(dicari % 2 == 0)dicari++;
	
	long long int ans1 = (dicari-1) /2;
	long long int ans2 = (last - dicari) /2;
	printf("%lld\n",min(ans1,ans2));
	
	return;
}

int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++){
	printf("Case #%d: ",i);
	solve();
}	
return 0;	
}
