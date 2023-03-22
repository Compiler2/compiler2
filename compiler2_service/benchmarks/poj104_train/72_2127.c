#define NUM_ITER 567

#include <header.h>


int a[200][200];
int main_bench(){

    int i,j,m,n,s=0,c=0;
    my_scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
    my_scanf("%d",&a[i][j]);
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
    
    if(a[i+1][j]<=a[i][j]&&a[i-1][j]<=a[i][j]&&a[i][j+1]<=a[i][j]&&a[i][j-1]<=a[i][j])
    my_printf("%d %d\n",i-1,j-1);
    return 0;
}
