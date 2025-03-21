/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Soliders and Bananas           █ *
 * █  Date    : 20/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main() {
        int k, n, w, c = 0, b = 0;
        scanf ("%d %d %d", &k, &n, &w);
        int i=1;
        while (i <= w) {
            c += k * i;
            i++;
        }
        if (c > n) {
            b = c - n;
            printf("%d\n", b);
        }
        else {
            printf("0\n");
        }
        return 0;
    }