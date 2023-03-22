#include <header.h>


int main_bench(){
int n,a,b,x,y,i,j;
a=0;b=0;i=0;j=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d %d",&x,&y);
if(x-y==1){b++;}
else if(y-x==1){a++;}
else if(x-y==2){a++;}
else if(y-x==2){b++;}
}
if(a>b){my_printf("A");}
else if(a<b){my_printf("B");}
else if(a=b){my_printf("Tie");}
return 0;
}