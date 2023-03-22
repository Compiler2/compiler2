#define NUM_ITER 7953

#include <header.h>

int main_bench()
{int n,a[20001],i,j,k,flag=0;
	my_scanf("%d",&n);
	if(n>=1&&n<=20000){
for(i=0;i<n;i++)
{my_scanf("%d",&a[i]);
if(a[i]<10||a[i]>=100)
my_scanf("%d",&a[i]);
else continue;}
my_printf("%d",a[0]);
for(j=1;j<n;j++){
	for(k=0;k<j;k++){
		if(a[j]==a[k])
		{flag=1;
			break;}
		
	}
if(flag==0)
my_printf(" %d",a[j]);
flag=0;
}
}
return 0;
}
