#define NUM_ITER 22753

#include <header.h>


int main_bench()
{
	int n;
	
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   
		char a[255];
		
		my_scanf("%s",a);
		int len=strlen(a);
		
		for(int j=0;j<len;j++)
		{
			if(a[j]=='A')
			{
				a[j]=a[j]+19;
			}
			else if(a[j]=='T')
			{

				a[j]=a[j]-19;
			}
			else if (a[j]=='C')
			{
				a[j]=a[j]+4;
			}
            else if (a[j]=='G')
			{
				a[j]=a[j]-4;
			}
			
		}puts(a);
		
		
	}
	
	return 0;
}