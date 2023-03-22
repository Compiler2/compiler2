#include <header.h>

int main_bench()
{
    int sz[1000];
    int i,m,n,k,a;
    my_scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++){
        a=k-sz[i];
        for(m=0;m<n;m++){
        if(sz[m]==a&&m!=i)
        {my_printf("yes");goto L;}} 
    }
        my_printf("no");
        L:
    return 0;
}


