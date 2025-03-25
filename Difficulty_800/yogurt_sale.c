/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Yogurt Sale                    █ *
 * █  Date    : 26/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main() {
        int t, n, a, b, c;
        scanf("%d", &t);
        int i = 0;
        do {
            scanf("%d %d %d", &n, &a, &b);
            c = 0;
            if (b <= (2 * a)) {
                if (n % 2 == 0) {
                    c = (n / 2) * b;
                } else {
                    c = (n / 2) * b + a;
                }
            }
            else {
                c = n * a;
            }
            printf("%d\n", c);
            i++;
        } while (i < t);
        return 0;
    }