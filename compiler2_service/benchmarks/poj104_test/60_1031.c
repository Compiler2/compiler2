#define NUM_ITER 4327

#include <header.h>

int main_bench()
{
int n,i,j,count=0,prime=0;
my_scanf("%d",&n);
int su[10000];
for(i=1;i<=n;i++){
   for(j=1;j<i;j++){
      if(i%j==0){
         count+=1;
         }
      }
   if(count==1){
     su[prime]=i;
     prime+=1;
     }
     count=0;
   }
     count=0;
for(i=0;i<prime;i++){
    if(su[i+1]-su[i]==2){
      my_printf("%d %d\n",su[i],su[i+1]);
      count+=1;
      }
    }
if(count==0)
my_printf("empty");
return 0;
}


