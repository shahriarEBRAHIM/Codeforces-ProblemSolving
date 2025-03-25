/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Two Elevators                  █ *
 * █  Date    : 26/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

    int main() {
        long long int t, a, b, c, i = 0, a_time = 0, b_time = 0;
        scanf("%lld", &t);
        do {
            scanf("%lld %lld %lld", &a, &b, &c);
            a_time = a - 1;
            if (c == 1) {
                b_time = llabs(b - c);
            }
            else {
                b_time = llabs(b - c) + llabs(c - 1);
            }
            if (a_time < b_time) {
                printf("1\n");
            } else if (a_time > b_time) {
                printf("2\n");
            } else {
                printf("3\n");
            }
            i++;
        } while (i < t);
        return 0;
    }