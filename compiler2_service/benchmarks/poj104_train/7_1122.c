#include <header.h>


int main_bench()
{
	int i,j,l1,l2,l3,e=0,sum=0;
	char s[300],z[300],h[300];
	my_scanf("%s",s); 
	my_scanf("%s",z);
	my_scanf("%s",h);
	l1=strlen(s);  
	l2=strlen(z);
	l3=strlen(h);
	for (i=0;i<=l1-l2;i++)
	{  
		e=0;
		for (j=0;j<l2;j++)
		{
			if(z[j]==s[j+i])
			{
			  e++;
			}

		} 
	
		if (e==l2)
		{
			for (j=0;j<i;j++)
			{
			  my_printf("%c",s[j]);
			}
			for (j=0;j<l3;j++)
			{
			   my_printf ("%c",h[j]);
			}
			if (i+l2<l1-1)
			{
				for (j=i+l2;j<l1;j++)
				{
			       my_printf("%c",s[j]);
				}
			}
			sum++;
	       break;
		}
	}
	if(sum==0)
	{
	  for (i=0;i<l1;i++)
	  {
	     my_printf("%c",s[i]);
	  }
	}
	return 0;
}