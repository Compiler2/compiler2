#include <header.h>

int main_bench()
{
int n,k,sz[1000];
my_scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
        }
for(int j=0;j<n-1;j++){
        for(int l=j+1;l<n;l++){
                if(sz[j]+sz[l]==k){
                                  my_printf("yes");
                                  return 0;
                                  }
                }
        }
        my_printf("no");
  return 0;
}