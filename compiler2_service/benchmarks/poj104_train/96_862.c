#define NUM_ITER 995636

#include <header.h>


int main_bench()
{
	char a[110];
	char result[110];
	int b;
	int last=0;  
	int y;   
	int s;   
	int l;
	int i;
	my_scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		b=last+(a[i]-'0');
		y=b%13;
		s=b/13;
		result[i]='0'+s;
		last=y*10;
	}
	result[l]='\0';
	if(result[0]=='0')
	{
		if(result[1]=='0')
		{
			for(i=0;i<=l-2;i++)
			{
				result[i]=result[i+2];
			}
		}
		else
		{
			for(i=0;i<=l-1;i++)  
			{
				result[i]=result[i+1];
			}
		}
	}
	l=strlen(result);
	if(l==0)            
	{
		result[0]='0';
		result[1]='\0';
	}
	my_printf("%s\n%d",result,y);
	return 0;
}
