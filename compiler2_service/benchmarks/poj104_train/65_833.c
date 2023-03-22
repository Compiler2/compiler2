#define NUM_ITER 35330

#include <header.h>

int main_bench(){
int n,i,m,l;
int a[200];
int b[200];
my_scanf("%d",&n);
m=l=0;
for(i=0;i<n;i++){
my_scanf("%d %d",&a[i],&b[i]);
if(a[i]==0&&b[i]==1)
m+=1;
if(a[i]==1&&b[i]==0)
l+=1;
if(a[i]==0&&b[i]==2)
l+=1;
if(a[i]==1&&b[i]==2)
m+=1;
if(a[i]==2&&b[i]==0)
m+=1;
if(a[i]==2&&b[i]==1)
l+=1;
if(a[i]==b[i])
continue;
}
if(m>l)
my_printf("A");
else if(m<l)
       my_printf("B");
     else
       my_printf("Tie");
return 0;
}


