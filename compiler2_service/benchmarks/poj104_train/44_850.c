#define NUM_ITER 284306

#include <header.h>

int main_bench()
{
	char a[6][10]={0};
	int i,j,k;
	for(i=0;i<6;i++)
	{
		my_scanf("%s",a[i]);
	}
	for(j=0;j<6;j++)
	{
		if(strcmp(a[j],"0")==0||strcmp(a[j],"-0")==0)
		{
			my_printf("0\n");
		}
		else
		{
			if(a[j][0]=='-')
			{
		        my_printf("-");
		        for(i=9;i>0;i--)
				{
			        if(a[j][i]!='0'&&a[j][i]!='\0')
					{
				        my_printf("%c",a[j][i]);
						break;
					}
				}
				for(k=i-1;k>0;k--)
				{
					my_printf("%c",a[j][k]);
				}
		        my_printf("\n");
			}
	        else
			{
                for(i=9;i>=0;i--)
				{
			        if(a[j][i]!='0'&&a[j][i]!='\0')
					{
				        my_printf("%c",a[j][i]);
						break;
					}
				}
				for(k=i-1;k>=0;k--)
				{
					my_printf("%c",a[j][k]);
				}
		        my_printf("\n");
			}
		}
	}
	return 0;	
}