#define NUM_ITER 18944

#include <header.h>

int main_bench(){
    int sz1[50000],sz2[50000],n,i;
    double m;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&sz1[i],&sz2[i]);
    }
    int x=sz1[0],y=0;
    for(i=0;i<n;i++){
        if(x>sz1[i])x=sz1[i];
        if(y<=sz2[i])y=sz2[i];
    }
    for(m=x+0.1;m<y;m++){
        for(i=0;i<n;i++){
            if(m<=sz2[i]&&m>sz1[i]) break;
            else continue;
        }
        if(i<n) continue;
        else {my_printf("no");
        return 0;
        }
    }
    my_printf("%d %d",x,y);
    return 0;
}
