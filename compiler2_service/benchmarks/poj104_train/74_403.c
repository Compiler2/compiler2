#define NUM_ITER 313995

#include <header.h>

int sushu(int k)
{
	int i,t;
	t=1;
	for(i=2;i<=k/2;i++)
		if(t==1)
			if(k%i==0)
				t=0;
	return(t);
}
int hw(int k)
{
	int a[10],i,len=1,ws,t=1,n;
	for(i=1;!(k/len>0&&k/(len*10)==0);i++)
		len*=10;
	ws=i;
	for(i=1;i<=ws/2&&t==1;i++)
	{
		n=k/len;
		if(k%10!=n)
			t=0;
		k=k-n*len;
		k=k/10;
		len/=100;
	}
	return(t);
}

int main_bench()
{
	int m,n,k,bg,ans[1000],j=0,i;
	my_scanf("%d%d",&m,&n);
	if(m>=2)
		bg=m;
	else
		bg=2;
	for(k=bg;k<=n;k++)
		if(sushu(k)&&hw(k))
			ans[j++]=k;
	if(j==0)
		my_printf("no\n");
	else
	{
		for(i=0;i<j-1;i++)
			my_printf("%d,",ans[i]);
		my_printf("%d\n",ans[j-1]);
	}
}
