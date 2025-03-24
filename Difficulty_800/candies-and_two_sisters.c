#include <stdio.h>

    int main() {
        long int t, i = 0;
        long long int n;
        scanf("%ld", &t);
        do {
            scanf("%lld", &n);
            long long int b = n / 2;
            long long int a = n - b;
            long long int c = 0;
            while (a > b && b > 0) {
                c++;
                a++;
                b--;
            }
            printf("%lld\n", c);
            i++;
        } while (i < t);
        return 0;
    }