#define NUM_ITER 31344

#include <header.h>

int main_bench(){
int n,i,a[200],b[200];
int count=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%d %d",&(a[i]),&(b[i]));}
for(i=0;i<n;i++)
 {
  if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
   {count++;}
  else if((a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)||(a[i]==0&&b[i]==2))
   {count--;}
  else if((a[i]==1&&b[i]==1)||(a[i]==2&&b[i]==2)||(a[i]==0&&b[i]==0))
   {count=count;}
 }
if(count>0){my_printf("A");}
else if(count<0){my_printf("B");}
else if(count==0){my_printf("Tie");}
return 0;
}
