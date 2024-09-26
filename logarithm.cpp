#include <stdio.h>
#include <math.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++) {
        long long a, n;
        scanf("%lld %lld", &a, &n);

        int b = 0;

        while (pow(a, b) <= n) {
            b++;
        }

        printf("Case #%d: %d\n", i, b-1);
    }

    return 0;
}
