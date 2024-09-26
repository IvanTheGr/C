#include <stdio.h>

int main(){
	int i,n,max = 0;
	scanf("%d", &n);
	int a[n];
	int x = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if (max < a[i])
			max = a[i];
	}
	for (i = 1; i <= n; i++)
		if (a[i] == max)
			x++;
	printf("%d", x);
	return 0;
}
