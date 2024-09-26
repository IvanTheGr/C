#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		char username[1000005];
		scanf("%s",username);
		int n=strlen(username);
		int dist = 0;
		int vis[30];
		for(int j=0;j<30;j++) vis[j]=0;
		for(int j=0;j<n;j++){
			if(vis[username[j]-'a'] == 0){
				dist++;
				vis[username[j]-'a']=1;
			}
		}
		if(dist % 2 == 0){
			printf("Case #%d: Yay\n", i+1);
		}else{
			printf("Case #%d: Ewwww\n", i+1);
		}
	}
	
	return 0;
}
