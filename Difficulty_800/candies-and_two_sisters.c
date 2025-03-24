/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Candies and Two Sisters        █ *
 * █  Date    : 25/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

int main()
{
    long int t, i = 0;
    long long int n;
    scanf("%ld", &t);
    do
    {
        scanf("%lld", &n);
        long long int b = n / 2;
        long long int a = n - b;
        if (n % 2 == 0)
        {
            printf("%lld\n", b-1);
        }
        else
        {
            printf("%lld\n", b);
        }
        i++;
    } while (i < t);
    return 0;
}