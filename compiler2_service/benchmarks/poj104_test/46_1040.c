#include <header.h>

int main_bench()
{ 
   int i,j,n,m,k,N=0;
   my_scanf("%d%d",&n,&m);
   int a[100][100];
   for(i=0;i<n;i++){
   for(j=0;j<m;j++){
   my_scanf("%d",&a[i][j]);
      }
    }
   for(k=0;;k++){
   for(j=k;j<=m-1-k;j++){
   my_printf("%d\n",a[k][j]);
   N++;
       }
   my_printf("\n");
   if(N==n*m)break;
   for(i=k+1;i<=n-1-k;i++){
   my_printf("%d\n",a[i][m-1-k]);
   N++;
       }
   my_printf("\n");
   if(N==n*m)break;
   for(j=m-2-k;j>=k;j--){
   my_printf("%d\n",a[n-1-k][j]);
   N++;
       }
   my_printf("\n");
   if(N==n*m)break;
   for(i=n-2-k;i>=k+1;i--){
   my_printf("%d\n",a[i][k]);
   N++;
       }
   my_printf("\n");
   if(N==n*m)
   break;
   }
   return 0;
}

