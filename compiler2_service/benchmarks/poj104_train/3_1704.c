#define NUM_ITER 6271

#include <header.h>

int main_bench()
{int n,k,i,j,a[1000],b[1000][1000];
int m;
m=0;
my_scanf("%d %d",&n,&k);
for(i=0;i<k;i++)
                {my_scanf("%d",&a[i]);
                }   
for(i=0;i<k;i++){
for(j=k;j>i;j--){
                 if((a[i]-a[j])==k)
                 {
                 my_printf("yes");
                 m=1;
                 return 0;
                 }
                 
                 }
                  }  
if (m==0)
{my_printf("no");}
    
return 0;
}
