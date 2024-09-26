#include <stdio.h>

int main(){

    int tc;
    scanf("%d", &tc);

    for(int t = 1; t <= tc; t++){

        long long n, reversedNumber = 0, remainder;
        scanf("%lld", &n);
        long long p = n;
        while (n != 0) {
            remainder = n % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            n /= 10;
        }
        printf("Case #%d: %lld\n", t, reversedNumber + p);

    }

    return 0;
}
