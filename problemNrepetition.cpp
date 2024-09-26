#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int totalCups = A;
        int emptyCups = A;

        while (emptyCups >= B) {
            int exchangedCups = emptyCups / B;
            totalCups += exchangedCups;
            emptyCups = exchangedCups + (emptyCups % B);
        }

        printf("Case #%d: %d\n", t, totalCups);
    }

    return 0;
}

