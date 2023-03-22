#define NUM_ITER 23867

#include <header.h>

int main_bench()
{
	int r,i,j,n,k,t=0,q;
	char ch[10000]={0};
	int a=0;
	char c,c1[1];
	my_scanf("%d",&n);
	for(q=0;q<=n-1;q++)
	{
		my_scanf("%s",ch);
        r=strlen(ch);
		for(i=0;i<=r-2;i++)
		{
			c=ch[i];
			for(j=0;j<=r-1;j++)
			{
				if(ch[j]==c)
				{
					a++;
				}
			}
			if(a==1)
			{
				my_printf("%c\n",c);
				t++;
				a=0;
				break;
			}
			a=0;
		}

		
	    if(t==0) {my_printf("no");}
		 t=0;
		
	}
	return 0;
}