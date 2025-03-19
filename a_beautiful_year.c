/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : A Beautiful Year               █ *
 * █  Date    : 19/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main () {
        int year, d1, d2, d3, d4=0;
        scanf ("%d", &year);
        while (1) {
            year++;
            d1 = year / 1000;
            d2 = year / 100 % 10;
            d3 = year / 10 % 10;
            d4 = year % 10;
            if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
                break;
            }
        }
        printf ("%d\n", year);
        return 0;
    }