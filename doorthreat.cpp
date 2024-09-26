#include<stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases);
	
	for(int tc=1; tc<=cases; tc++){
		int n,m;
		scanf("%d %d",&n, &m);
		//declare rooms
		int arr[n+1];
		for(int j=1; j<=n; j++){
			arr[j] = j;
		}
			
		int x;
		for(int i=1;i<=m;i++){
			scanf("%d", &x);
			
			for(int j=1; j<=n; j++){
				if(arr[j]%x == 0){
					arr[j] = arr[j]*-1;
				}
			}
		}
		
		printf("Case #%d:", tc);
		int flag=0;
		
		for(int j=1; j<=n; j++){
			if(arr[j] > 0){
				flag = 1;
				printf(" %d",arr[j]);
			}
		}
		if(flag==0){
			printf(" No room left!");
		}
		printf("\n");	
	}
	return 0;
}
