#include <header.h>

int main_bench(){
int n,i,x,y,f=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&x,&y);
if(x-y==1)
f=f-1;
else if(y-x==1)
f=f+1;
else if(x-y==2)
f=f+1;
else if(y-x==2)
f=f-1;
}
if(f>0)
my_printf("A");
else if(f<0)
my_printf("B");
else if(f==0)
my_printf("Tie");
return 0;
}