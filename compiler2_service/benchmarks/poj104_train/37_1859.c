#define NUM_ITER 964

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	    {
		char a[100001]={0};
		my_scanf("%s",a);
		int len=strlen(a);
		int q=0;
		for(int j=0;j<len;j++)
		    {
			int judge=1;
			for(int k=0;k<len;k++)
			    {
				if(j!=k)
				{
				if(a[j]==a[k])
				   {
					judge=0;
					break;	
				   }		
				}
				}	
			if(judge==1)
			    {
			    my_printf("%c\n",a[j]);
			    q=1;
			    break;		
			    }
			}
		if(q==0)
		   my_printf("no\n");
		}
}