#define NUM_ITER 25670

#include <header.h>

int main_bench()
{
	int t;
	int i,j;
	int l;
	int x=0,y=0;
	char s[100010];
	int op[100010];
	my_scanf("%d",&t);
	while(t--)
	{
		x=0;
		my_scanf("%s",s);  
		l=strlen(s);
		for(i=0;i<l;i++)
			op[i]=0;   
		for(i=0;i<l;i++)
		{
			if(op[i]==0)
			{
				op[i]=1;
				y=0;    
				for(j=i+1;j<l;j++)
				{
					if(s[i]==s[j])
					{
						y=1;
						op[j]=1;
					}
				}
				if(y==0)  
				{
					x=1;
					my_printf("%c\n",s[i]);
					break;
				}
			}
		}
		if(x==0)
			my_printf("no\n");  
	}
	return 0;
}