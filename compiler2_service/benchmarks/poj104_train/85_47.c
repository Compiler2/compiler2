#define NUM_ITER 34851

#include <header.h>

int main_bench()
{
	int n,i,j,l,b[100];
	char a[20];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",a);
        if ((a[0]=='_')||('A'<=a[0]&&a[0]<='Z')||('a'<=a[0]&&a[0]<='z')) 
		{
			b[i]=0;
            l=strlen(a);
	    	for (j=1;j<l;j++)
			{
				if ((a[j]=='_')||('A'<=a[j]&&a[j]<='Z')||('0'<=a[j]&&a[j]<='9')||('a'<=a[j]&&a[j]<='z')) 
				b[i]=0;
				else 
				{
					b[i]=1;
				    break;
				}

			}
		}
		else {
			b[i]=1;	
		}
	}
		for(i=0;i<n;i++)
		{
			if(b[i]==1) 	my_printf("no\n");
		    else my_printf("yes\n");
		}
	return 0;
}
