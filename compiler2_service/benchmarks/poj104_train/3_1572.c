#define NUM_ITER 5728

#include <header.h>

int main_bench( )
{
  
   int n,k,s=0;
  my_scanf("%d",&n);
 my_scanf("%d",&k);

  int sz[1000];
  for(int i=0;i<n;i++){
   my_scanf("%d",&sz[i]);
  }
   for(int z=0;z<n;z++){
   for(int m=z+1;m<n;m++){
    if(k==sz[z]+sz[m]){
      s++;
    }
 if(k!=(sz[z]+sz[m])){
      s+=0;
    }
  }}
  if(s==0){
   my_printf("no");
  }
if(s!=0){
   my_printf("yes");
  }
 return 0;
}
 
