#define NUM_ITER 36203

#include <header.h>

int main_bench(){
int a,b,i,n,t=0,m=0,p=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&a,&b);
if(a==0&&b==0)
p++;
if(a==0&&b==1)
t++;
if(a==0&&b==2)
m++;
if(a==1&&b==0)
m++;
if(a==1&&b==1)
p++;
if(a==1&&b==2)
t++;
if(a==2&&b==0)
t++;
if(a==2&&b==1)
m++;
if(a==2&&b==2)
p++;}
if(t>m)
my_printf("A");
else if(t<m)
my_printf("B");
else if(t==m||p==n)
my_printf("Tie");
	return 0;}