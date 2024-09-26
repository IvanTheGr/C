#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<3;i++){
	int a;
	char str[100];
		scanf("%d",&a);getchar();
		scanf("%[^\n]",&str);getchar();
		printf("Case #%d:",i+1);

		for(int j=0;j<a;j++){
			if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')){
				printf("%c",str[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
