#define NUM_ITER 1343913

#include <header.h>

int main_bench()
{
	char a[9000];
	int len,num=0,i,j,k,word=0;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			if(num!=0)
			{
			my_printf("%d",num);word++;
			num=0;
			break;
			}
		}
		else
		{
			num++;
		}
	}
	for(i=i+1;i<len;i++)
	{
		if(a[i]==' ')
		{
			if(num!=0)
			{
			my_printf(",%d",num);word++;
			num=0;
			}
		}
		else
		{
			num++;
		}
	}
	if(num!=0)
	{
		if(word==0)
			my_printf("%d",num);

			else
		my_printf(",%d",num);
	}

}