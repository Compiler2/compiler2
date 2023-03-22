#include <header.h>

int main_bench()
{
	int n,i,j,a,b,c,d,e=0,p,q,s,t,sum;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
	{my_scanf("%d",&a);
	if (a==0)
	break;
	}
	if(j<n)
	break;}
    for(p=j+1;p<=n;p++)
	{my_scanf("%d",&b);
	if(b==255)
		break;
	}
	q=p+1;
    while(q<=n)
	{my_scanf("%d",&c);
	q++;
	}
	for(s=i+1;s<=n;s++)
	{for(t=1;t<=n;t++)
	{my_scanf("%d",&d);
	if(d==0)
	{e=e+1;}}}
    sum=(e-(p-j))/2*(p-j-2);
	my_printf("%d\n",sum);
	return 0;
}
