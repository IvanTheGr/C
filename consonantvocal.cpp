#include<stdio.h>
#include<string.h>

int main(){
	char kalimat[1000005];
	int letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int L[26];
	int vocal =0, consonant=0;
	
	scanf("%[^\n]",&kalimat);
	
	int panjangKalimat = strlen(kalimat);
	
	for(int i=0;i<panjangKalimat;i++){
		for(int j=0;j<=26;j++){
			if(kalimat[i] == letters[j]){
				L[j] = 1;
			}
		}
	}
	for(int i=0;i<=26;i++){
		if(letters[i] == 'a' || letters[i] == 'i' || letters[i] == 'u' || letters[i] == 'e' || letters[i] == 'o' ){
			vocal = vocal + L[i];
		}else{
			consonant = consonant + L[i];
		}
	}
	printf("Vocal: %d\n",vocal);
	printf("Consonant: %d\n",consonant);
	
	
	return 0;
}
