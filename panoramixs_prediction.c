/* * * * * * * * * * * * * * * * * * * * * * * * *
 * █████████████████████████████████████████████ *
 * █                                           █ *
 * █  Name    : Muhammad Shahriar Ebrahim      █ *
 * █  Country : Bangladesh                     █ *
 * █  Language: C                              █ *
 * █  Problem : Panoramix's Prediction         █ *
 * █  Date    : 20/03/2025                     █ *
 * █                                           █ *
 * █████████████████████████████████████████████ *
 * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

    int main() {
        int n,m,pv,fp=0;
        scanf("%d %d", &n, &m);
        int i=n;
        int j=1;
        while (i<m) {
            i++;
            j=1;
            pv=0;
            while (j<=i) {
                if (i%j==0) {
                    pv++;
                }
                j++;
            }
            if (pv==2) {
                fp=i;
            }
        }
            if (fp==m) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
            return 0;
    }