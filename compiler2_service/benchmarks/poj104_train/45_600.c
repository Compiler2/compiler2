#define NUM_ITER 1195416

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	char *p=a,*q=b;
	my_scanf("%s %s",p,q);
	int i,j,len;
	len=strlen(a);
	for(i=0;*(q+i)!='\0';i++)
	{
		if(*(q+i)==*p)
		{
			for(j=i;j<i+len;j++)
			{
				if(*(q+j)!=*(p+j-i))
					break;
			}
		if(j==i+len)
		{
			my_printf("%d",i);
			break;
		}
		}
	}
		
}
		

