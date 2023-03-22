#define NUM_ITER 37018

#include <header.h>

int main_bench(){
int n,a,b,i,m=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&a,&b);
if(a==b) m=m;
else if(b-a==1 || a-b==2) m=m+1;
else m=m-1; 
}
if(m==0)my_printf("Tie");
else if(m>0)my_printf("A");
else if(m<0)my_printf("B");
return 0;
}