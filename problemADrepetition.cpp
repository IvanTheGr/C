#include <stdio.h>
int main ( ){
	int a, b, c = 0;
	scanf ("%d", &a);
	int d[a];
	for (int i = 0; i < a; i++){
		scanf ("%d", &d[i]);
	}
    for (int i = 0; i < a; i++){
    	b = 1;
    	for (int j = 0; j < a; j ++){
    		if (d[i] == d[j] && j!=i){
    			b++;
			}
		}
		if (b>c){
			c = b;
		}
	}	
	printf ("%d\n", c);
	return 0;
}
