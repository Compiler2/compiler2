#define NUM_ITER 31577

#include <header.h>


int main_bench()
{
	int i,n,j,b;
	int t;
	my_scanf("%d",&n);
	char a[100];
		for(i=0;i<n;i++)
        {
			my_scanf("%s",a);
            t=strlen(a);
		    if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
            {
				b=0;
				for(j=1;j<t;j++)
				{
					if(a[j]=='_'||(a[j]>='0'&&a[j]<='9')||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
					{
						b=0;
					}
					else
                    {
						b=1;
						break;
					}
				}
		
				if(b==1)
				{
					my_printf("no\n");
				}
				else
				{
					my_printf("yes\n");
				}

			}
			else
			{
				my_printf("no\n");
			}
		}
		
			
	return 0;
}
