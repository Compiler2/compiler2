#define NUM_ITER 166

#include <header.h>

int main_bench()
{int m,n,i,j;
 int a[301][301];
 for(j=1;j<301;j++){
     a[1][j]=1;
     for(i=2;i<301;i++){
         a[i][j]=(a[i-1][j]+j-1)%i+1;
     }
 }
 for(i=0;i<1000;i++){
 my_scanf("%d%d",&n,&m);
 if(m==0&&n==0){
     break;
 }else{
    my_printf("%d\n",a[n][m]);}}
     return 0;
}