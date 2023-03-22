#define NUM_ITER 1193580

#include <header.h>

int main_bench()
{
	char a[3000];
	int num[300]={0};
	int i, l=0, k=0;
	gets(a);
	for(i=0;;i++)
	{
		if(a[i]=='\0') 
		{
			num[k]=l;
			break;
		}
		if(a[i]==' ') 
		{
			num[k]=l;
			l=0;
            k++;
			for(i++;;i++)
			{
				if(a[i]!=' ') 
				{
					i--;
					break;
				}
			}
		}
		else
		{
			l++;
		}
	}

	for(i=0;i<k;i++)
	{
		my_printf("%d,", num[i]);
	}
	my_printf("%d",num[k]);
	return 0;
}