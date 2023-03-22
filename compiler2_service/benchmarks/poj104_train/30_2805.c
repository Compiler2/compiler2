#define NUM_ITER 80580

#include <header.h>

int main_bench()
{
int n,i,s;
my_scanf("%d",&n);
s=0;
i=0;
while(i<=n){
if(i%7==0||i%10==7||i/10==7)
{s=s;}
else{
	s=s+i*i;}
i++;
}
my_printf("%d",s);
return 0;
}