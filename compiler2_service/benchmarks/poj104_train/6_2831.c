#include <header.h>

int main_bench(){
  int k,m,n,i,j,a;
  int sz[100][100],s;
  s=0;
  my_scanf("%d",&k);
  for(a=0;a<k;a++){
s=0;
     my_scanf("%d%d",&m,&n);
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
           my_scanf("%d",&sz[i][j]);}
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
           if(i==0||i==m-1||j==0||j==n-1)
              s=s+sz[i][j];}
              
      my_printf("%d\n",s);}
  return 0;
}
