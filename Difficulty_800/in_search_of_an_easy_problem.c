/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : In Search of an Easy Problem   █ *
 * █  Date    : 20/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main () {
        
        int n, p, i = 0, c = 0;
        scanf("%d", &n);
        do {
            scanf(" %d", &p);
            c += p;
            i++;
        } while (i < n);
        if (c > 0) {
            printf("HARD\n");
        } else {
            printf("EASY\n");
        }
        return 0;
    }