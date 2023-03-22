#define NUM_ITER 1185816

#include <header.h>

int main_bench()
{
	char a[300];
	int i,n,b[20]={0},k=0,num=0;
	gets(a);
	n=strlen(a);
	a[n]=' ';
	for(i=0;i<n+1;i++)
	{
		if(a[i]-'0'>=0&&a[i]-'0'<10)
			num=num*10+a[i]-'0';
		else if((a[i-1]-'0'>=0&&a[i-1]-'0'<10)&&(a[i]-'0'<0||a[i]-'0'>=10))
		{
			b[k]=num;
			num=0;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(i==0)
			my_printf("%d",b[i]);
		else
			my_printf("\n%d",b[i]);
	}
	
	return 0;
}