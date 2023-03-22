#define NUM_ITER 32343

#include <header.h>


int main_bench()
{
	int i,n,temp=0;
	my_scanf("%d",&n);
	char a[10000][41],(*p)[41]=a;
	for(i=0;i<n;i++) my_scanf("%s",*(p+i));
	for(i=0;i<n;i++)
	{
		if(temp+strlen(*(p+i))<=80)
		{
			if(temp==0)
			{
			my_printf("%s",*(p+i));
			temp+=strlen(*(p+i))+1;
			}
			else
			{
				my_printf(" %s",*(p+i));
				temp+=strlen(*(p+i))+1;
			}
		}
		else
		{
			my_printf("\n");
			temp=0;
			i--;
		}
	}
	return 0;
}
