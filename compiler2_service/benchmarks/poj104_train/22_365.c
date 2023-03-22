#define NUM_ITER 99198

#include <header.h>

int main_bench()
{
	char string[1500];
	int num[350];
	int i,j=0,max=0,max2=0;
	gets(string);
	for(i=0;i<=349;i++) num[i]=0;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]!=',') num[j]=num[j]*10+string[i]-'0';
		else j++;
	}
	for(i=0;i<=j;i++)
	{
		if(num[i]>max)
		{
			max2=max;
			max=num[i];
		}
		else if(num[i]>max2&&num[i]<max)
			max2=num[i];
	}
	if(max2==0) my_printf("No\n");
	else
	my_printf("%d\n",max2);
}
