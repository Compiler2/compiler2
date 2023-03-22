#define NUM_ITER 321834

#include <header.h>

int main_bench(){
int n,i,a[1000000],t=0;
my_scanf("%d",&n);
a[0]=n;
if(n==1)   {my_printf("End");}
else{
for(i=1;i++;){
	if(a[t]%2==0)  {a[t+1]=a[t]/2;   my_printf("%d/2=%d\n",a[t],a[t+1]);   t++;}
     if(a[t]==1)     {my_printf("End");break;}
	if(a[t]%2!=0)   {a[t+1]=1+a[t]*3;  my_printf("%d*3+1=%d\n",a[t],a[t+1]);  t++;}
	if(a[t]==1)     {my_printf("End");break;}
}
}



	return 0;
}
