#define NUM_ITER 24

#include <header.h>

int main_bench()
{
  int k,m,n;
  my_scanf("%d",&k);
  
  for(int l=1;l<=k;l++){
    my_scanf("%d %d",&m,&n);
    
    int sz[m][n];
    for(int j=0;j<m;j++){
      for(int i=0;i<n;i++){
        my_scanf("%d",&(sz[j][i]));
      }
    }
    
    int a=0;
    for(int j=0;j<m;j++){
      for(int i=0;i<n;i++){
        a+=sz[j][i];
      }
    }
    for(int j=1;j<m-1;j++){
      for(int i=1;i<n-1;i++){
        a-=sz[j][i];
      }
    }
    my_printf("%d\n",a);
  }
  
  return 0;
}


