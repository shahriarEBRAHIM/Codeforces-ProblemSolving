/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Divisibility Problem           █ *
 * █  Date    : 20/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

 #include <stdio.h>

    int main() {
        long long int a, b, t, i = 0;
        scanf("%lld", &t);
        do {
            scanf("%lld %lld", &a, &b);
            i++;
            if (a % b == 0) {
                printf("0\n");
            }
            else {
                printf("%lld\n", b-(a % b));
        } 
         
        } while (i < t);
        return 0;
    }