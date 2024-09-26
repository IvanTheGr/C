#include<stdio.h>
#include<string.h>


void removeVowels(char *a) {
    int i, j = 0;
    for (i = 0; a[i] != '\0'; i++) {
        
        if (a[i] != 'a' && a[i] != 'i' && a[i] != 'u' && a[i] != 'e' && a[i] != 'o' && a[i] != 'A' && a[i] != 'I' && a[i] != 'U' && a[i] != 'E' && a[i] != 'O') {
            a[j++] = a[i];
        }
    }
    a[j] = '\0'; 
}



int main(){
	int t;
	scanf("%d",&t);
	char c[1005];
	getchar();
	for(int b=0;b<t;b++){
		scanf("%[^\n]",&c);
		getchar();
		removeVowels(c);
		printf("Case #%d: %s\n",b+1,c);
	}
	return 0;
}
