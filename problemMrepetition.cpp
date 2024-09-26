#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int a;
	long int m;
	for(int testcase = 0;testcase < t;testcase++){
		scanf("%d %ld",&a,&m);
		getchar();
		int totalcost = 0;
		for(int i=0;i<a;i++){
			long int n;
			scanf("%d",&n);
			getchar();
			totalcost += n;
		}
		if(totalcost > m){
			printf("Case #%d: Wash dishes\n",testcase+1);
		}else{
			printf("Case #%d: No worries\n",testcase+1);
		}
	}
	return 0;
}
