#define NUM_ITER 21392

#include <header.h>

int main_bench(){
int w,a,b,c,d,e,f;
int num[100];
for(w=0;w<50;w++)
{
    num[w]=0;
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0){
break;
}
if(f<c){
f=f+60;
e--;
}
if(e<b){
e=e+60;
d--;
}
num[w]=f-c+60*(e-b)+3600*(d+12-a);
}
   for(w=0;num[w]!=0;w++)
{
        my_printf("%d\n",num[w]);
   }

return 0;
}
