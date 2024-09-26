#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int K;
        scanf("%d", &K);

        int jumps = 0;
        int cumulative_distance = 0;

        while (cumulative_distance < K) {
            jumps++;
            cumulative_distance += jumps;
        }

        printf("Case #%d: %d\n", t, jumps);
    }

    return 0;
}

