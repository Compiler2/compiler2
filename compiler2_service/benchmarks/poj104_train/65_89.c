#define NUM_ITER 28034

#include <header.h>

int main_bench(){
int i,n;
int a,b;
int aa,bb;
my_scanf("%d",&n);
aa=bb=0;
for(i=0;i<n;i++){
my_scanf("%d%d",&a,&b);
a=(a-b+3)%3;
if(a==2)aa++;
else if(a==1)bb++;
}
if(aa<bb)my_printf("B");
else if(aa>bb)my_printf("A");
else my_printf("Tie");
return 0;
}