/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Team                           █ *
 * █  Date    : 19/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main() {
        int p,v,t,n,count=0;
        scanf("%d",&n);
        while (n!=0) {
            scanf("%d %d %d",&p,&v,&t);
            if (p+v+t>=2) {
                count++;
            }
            n--;
        }
        printf("%d\n",count);
        return 0;
    }