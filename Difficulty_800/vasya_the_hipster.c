/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Vasya The Hipster              █ *
 * █  Date    : 26/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main () {
        int r, b, df = 0, dn = 0;
        scanf("%d %d", &r, &b);
        if (r > b) {
            df = b;
            printf("%d ", df);
            dn = (r - b) / 2;
            printf("%d\n", dn);
        } 
        else if (b > r) {
            df = r;
            printf("%d ", df);
            dn = (b - r) / 2;
            printf("%d\n", dn);
        }
        else {
            df = r;
            printf("%d ", df);
            dn = 0;
            printf("%d\n", dn);
        }
        return 0;
    }