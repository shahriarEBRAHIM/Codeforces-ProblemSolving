/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Watermelon                     █ *
 * █  Date    : 19/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
    int main() {
        int w;
        scanf("%d", &w);
        if (w % 2 == 0 && w != 2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        return 0;
    }