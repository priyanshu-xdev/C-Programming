#include <stdio.h>

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: \n");

    // Generate the Fibonacci sequence
    for (i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%llu, ", t1);
            continue;
        }
        if (i == 2) {
            printf("%llu, ", t2);
            continue;
        }
        nextTerm = t1 + t2; // Next term is the sum of the previous two
        t1 = t2;            // Update t1 to the previous term
        t2 = nextTerm;     // Update t2 to the next term
        printf("%llu, ", nextTerm);
    }

    return 0;
}
