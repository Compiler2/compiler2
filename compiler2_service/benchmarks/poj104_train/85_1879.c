#include <header.h>


int main_bench()
{
	int n,i,j,sum=0,len;
	char  a[23];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		len=0;
		sum=0;
		my_scanf("%s",&a);
        len=strlen(a);
		if(a[0]=='-'||(a[0]>='A'&&a[0]<='z'))
		{
			for(j=1;j<=len;j++)
			{
		        if ((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]=='_') ||(a[j]>='0'&&a[j]<='9'))
                sum++;
			}
	       if(sum==len-1)
		   {
		      my_printf("yes\n");
		   }
		   else
		   {
              my_printf("no\n");
		   }
		}
			else
		{
			     my_printf("no\n");
		}
	}
	return 0;
}