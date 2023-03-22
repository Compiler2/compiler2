#include <header.h>

int main_bench()
{
	int num,i,j,k,flag;
	char a[81];
	my_scanf("%d",&num);
	getchar();
	for(i=0;i<num;i++)
	{
		for(j=0;j<81;j++)
		{
			my_scanf("%c",&a[j]);
			if(a[j]=='\n')
			{
				break;
			}
		}
		
		if( (a[0]=='_') || (a[0]>='a' && a[0]<='z')
						|| (a[0]>='A' && a[0]<='Z') )
		{
			flag=1;
			for(k=1;k<j;k++)
			{
				if(    (a[k]=='_')
					|| (a[k]>='0' && a[k]<='9') 
					|| (a[k]>='a' && a[k]<='z')
					|| (a[k]>='A' && a[k]<='Z') )
					flag*=1;
				else
				{
					flag*=0;
					break;
				}
			}
			if(flag==1) my_printf("1\n");
			else my_printf("0\n");
		}
		else
		{
			my_printf("0\n");
		}
	}
	return 0;
}