#define NUM_ITER 7325

#include <header.h>

int main_bench()
{
	int a,b,i,j=1,c=0,l=1,m,n,k;
    my_scanf("%d\n",&n);
	int s[20000]={0},t[20000]={0};
	for(i=0;i<n;i++){	my_scanf("%d",&s[i]);}
	t[0]=s[0];
	for(l=1;l<n;l++)
	{	c=0;
		for(i=0;i<l;i++)
	{if(s[l]==s[i]) {c=1;break;}
	}
		if(c==0) {t[j]=s[l];j++;}
	}
	for(m=0;(c=t[m+1])!=0;m++)
	{my_printf("%d ",t[m]);}
	my_printf("%d",t[m]);
return 0;
}