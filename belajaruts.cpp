//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	int t;
//	scanf("%d",&t);
//	getchar();
//	
//	for(int i=0;i<t;i++){
//		char s[100005];
//		scanf("%[^\n]",&s);
//		getchar();
//		
//		int abjad[26],same[26],nosame[26];
//		for(int i=0;i<26;i++){
//			abjad[i]=0;
//			same[i]=0;
//			nosame[i]=0;
//		}
//		for(int j=0;s[j]!='\0';j++){
//			abjad[s[j] - 'a']++;
//		}
//		for(int i=0;i<26;i++){
//			for(int j=0;j<26;j++){
//				if((abjad[i] > 0 && abjad[j] > 0) && (i !=j)){
//					if(abjad[i] == abjad[j]){
//						same[i]++;
//					}else{
//						nosame[i]++;
//					}
//				}
//			}
//		}
//		printf("Case #%d: ",i+1);
//		
//		int cannot = 0;
//		if(s[1] == 0){
//			cannot = 1;
//			printf("%c",s[0]);
//		}
//		for(int i=0;i<26;i++){
//			if(same[i] >= 0 && nosame[i] < 2){
//				cannot = 1;
//				printf("%c",i + 'a');
//			}
//		}
//		if(cannot == 0){
//			printf("N/A");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//2
//#include<stdio.h>
//#include<math.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	getchar();
//	int f;
//	int ff = pow(f,2);
//	scanf("%d",&f);
//	getchar();
//	int arr[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",arr[i][j]);
//			getchar();
//		}
//	}
//	int row =0, column = 0,max=0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(max < arr[i][j]){
//				max = arr[i][j];
//				row = i;
//				column = j;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(i == row || j == column){	
//			if(arr[i][j] != max){
//				arr[i][j] -=f;
//				if(arr[i][j]<=0){
//					arr[i][j]=0;
//				}
//			}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++){
//			if (arr[i][j] != max) {
//				printf(" %d", arr[i][j]);
//			} else {
//				max -= ff;
//				if (max < 0) {
//					max = 0;
//					printf(" %d", max);
//				}
//			}
//		} 
//	} 
//	printf("\n");
//	
//	return 0;
//}

//3
//#include<stdio.h>
//
//int main(){
//	
//	long long int p,price,s;
//	scanf("%lld %lld %lld",&p,&price,&s);
//	long int total = price;
//	for(int i=0;i<s;i++){
//		total = total + (total/p) * 0.05;
//	}
//	printf("%lld\n",total);
//	return 0;
//}


//4 
#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n); getchar();
	int a[n], b[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	} getchar();
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	} getchar();
	
	int t1 = 0, t2 = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				t1++;
			}	
		} 
	} 
	t1 -= n;
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				t2++;
			}
		} 	
	} 
	t2 -= n;
	
	if (t1 > t2) {
		printf("%a\n");
	} else if (t1 == t2) {
		printf("draw\n");
	} else {
		printf("%b\n");
	}
	return 0;
}
