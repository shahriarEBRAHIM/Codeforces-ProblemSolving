/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Elephant                       █ *
 * █  Date    : 21/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

 #include <stdio.h>

    int main() {
        long int x;
        long int s = 0;
        long int temp = 0;
        scanf("%ld", &x);
        if (x <= 5) {
            printf("1");
        }
        else if (x > 5) {
            s = x / 5;
            if (x % 5 == 0) {
                printf("%ld\n", s);
            }
            else {
                printf("%ld\n", s+1);
        }
        
        }
    }