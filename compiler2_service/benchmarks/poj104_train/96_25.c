#define NUM_ITER 275016

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,temp,lengtha,lengthb;
	my_scanf("%s",a);
	lengtha=strlen(a);
	for(i=0;i<100;i++)
	{
		b[i]='\0';
	}
	if(lengtha>2)
	{
		if(10*(a[0]-'0')+a[1]-'0'>=13)
		{
			temp=10*(a[0]-'0')+a[1]-'0';
			for(i=0;i<lengtha-1;i++)
			{
				if(i!=lengtha-2)
				{
					b[i]=temp/13+'0';
					temp=10*(temp%13)+a[i+2]-'0';
				}
				else
				{
					b[i]=temp/13+'0';
					temp=temp%13;
				}
			}
		}
		else 
		{
			temp=100*(a[0]-'0')+10*(a[1]-'0')+a[2]-'0';
			for(i=0;i<lengtha-2;i++)
			{
				if(i!=lengtha-3)
				{
					b[i]=temp/13+'0';
					temp=10*(temp%13)+a[i+3]-'0';
				}
				else
				{
				b[i]=temp/13+'0';
				temp=temp%13;
				}
			}
		}
	my_printf("%s\n",b);
	my_printf("%d",temp);
	}
	else if(lengtha==1)
	{
	my_printf("0\n");
	my_printf("%c",a[0]);
	}
	else if(lengtha==2)
	{
		if(10*(a[0]-'0')+a[1]-'0'>=13)
		{
			my_printf("%d\n",(10*(a[0]-'0')+a[1]-'0')/13);
			my_printf("%d",(10*(a[0]-'0')+a[1]-'0')%13);
		}
		else
		{
			my_printf("0\n");
			my_printf("%d",10*(a[0]-'0')+a[1]-'0');
		}
	}
return 0;
}
