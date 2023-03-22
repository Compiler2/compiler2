#define NUM_ITER 27334

#include <header.h>

int main_bench()
{
	int n,len;
	char a[1000];
	my_scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		my_scanf("%s",a);
		len=strlen(a);
		if(a[len-1]=='r')
		{
			for(int j=0;j<len-2;j++)
				my_printf("%c",a[j]);
		}
		my_printf("\n");
		if(a[len-1]=='y')
		{
			for(int p=0;p<len-2;p++)
				my_printf("%c",a[p]);
		}
         my_printf("\n");
		if(a[len-1]=='g')
		{
			for(int q=0;q<len-3;q++)
				my_printf("%c",a[q]);
		}
        my_printf("\n");

	}



	return 0;
}