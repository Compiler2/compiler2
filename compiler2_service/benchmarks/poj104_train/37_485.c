#include <header.h>

int main_bench()
{
	int i,j,k,n,flag,flag1=0,t;
	char a[100],s;
        my_scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
                flag1=0;
		my_scanf("%s",a);
		for(j=0;a[j]!='\0';j++)
		{
			s=a[j];
			flag=0;
			for(k=0;a[k]!='\0';k++)
			{
				if((a[j]==a[k])&&(k!=j))
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				my_printf("%c\n",s);
				flag1=1;
				break;
			}
		
		}
		if(flag1==0)
		my_printf("no\n");
	}
	return 0;
}
