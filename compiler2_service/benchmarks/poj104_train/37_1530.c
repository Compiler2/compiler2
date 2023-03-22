#define NUM_ITER 956

#include <header.h>

int main_bench()
{
	int n,i,j,k,s=0;
	char a[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char b[100000]={0};
		my_scanf("%s",&a);
		int len=strlen(a);
		for(k=0;k<len;k++)
	    {
			for(j=0;j<len;j++)
			{
				if(a[j]==a[k])
				    b[k]++;
			}
		}
		s=0;
	    for(j=0;j<len;j++)
	    {
			if(b[j]==1)
			{
				my_printf("%c\n",a[j]);
				s=1;
				break;
		    }
	    }
	    if(s==0)
	        my_printf("no\n");
	} 
	return 0;
}