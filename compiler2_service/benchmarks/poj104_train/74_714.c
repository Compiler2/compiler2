#include <header.h>


int main_bench()
{
	int m,n,rn=0,r=0,i=0,j=0,a,l=0,num,k=-1,re[1000]={0};

	my_scanf("%d%d",&m,&n);

	for(i=m;i<=n;i++)
	{
		l=0;
		for(j=2;j<i;j++)
		{
			a=i%j;
			if(a==0)
			{
				l++;
			}
			
		}
		if(l==0)
		{
			rn=0;
			r=0;
			num=i;
			while(num!=0)
			{
			  r = num % 10;
              rn *= 10;
              rn += r;
              num /= 10;
			}
			if(rn==i)
			{
				k++;
				re[k]=i;
				
			}
		}
	}
	if(k==-1)my_printf("no");
	else{
	    for(i=0;i<=k;i++)
		{
			if(i==k)my_printf("%d",re[k]);
			else my_printf("%d,",re[i]);
		}
	}
	
	
	return 0;
}