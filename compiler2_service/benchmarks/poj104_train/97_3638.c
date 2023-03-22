#include <header.h>

int main_bench()
{int n,s[6],i,a[6]={100,50,20,10,5,1};
my_scanf("%d",&n);
if(n<1000){
	for(i=0;i<=5;i++){
	if(n/a[i]>0)
	{s[i]=n/a[i];
	n=n-a[i]*s[i];}
	else s[i]=0;}

	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",s[0],s[1],s[2],s[3],s[4],s[5]);
}
return 0;
}
