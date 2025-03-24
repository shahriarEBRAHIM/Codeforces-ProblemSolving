/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : A Beautiful Year               █ *
 * █  Date    : 24/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main() {
        int t, n, i = 0;
        scanf("%d", &t);
        do {
            scanf("%d", &n);
            int a = n - 1, b = 1, c = 0;
            while (a > 0 && b < n) {
                c++;;
                b++;
                a--;
            }
            printf("%d\n", c);
            i++;
            } while (i < t);
            return 0;
        } 