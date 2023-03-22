#define NUM_ITER 29142

#include <header.h>


int main_bench()
{
	int n,i;
	int a,g;
	
	int j;
	my_scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		a=0;
				 g=0;
		char s[21];
		my_scanf("%s",s);
			for(j=0;s[j]!='\0';j++)

			{
				 
				if(s[0]>=65&&s[0]<=90||s[0]>=97&&s[0]<=122||s[0]==95)
					a=a+1;
				    g++;
                    if(s[j]>=65&&s[j]<=90||s[j]>=97&&s[j]<=122||s[j]==95||s[j]>=48&&s[j]<=57)
					a=a+1;
				    g++;

			}
			if(a==g)
				my_printf("yes\n");
			else
				my_printf("no\n");
	}

                    
	return 0;
}

