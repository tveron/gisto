#include <stdio.h>
#define maxarr 35
int main()
{
    int l, i, c, mlen, p;
    int sl[maxarr];
    for (i = 0; i < maxarr; i++){
        sl[i] = 0;
    }
    i = 0;
    while ((c = getchar())!= EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            if (p > 0){
                sl[p]++;
            }
            p = 0;
            }
        else{
            p++;
        }
    }
    for (i = 0; i < maxarr; i++){
        while (sl[i]>0){
            for(l = 0;l < i; l++){
                printf('-');
            }
            printf('\n');
            sl[i]--;
        }
    }
    return 0;
}
