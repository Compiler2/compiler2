#define NUM_ITER 1284857

#include <header.h>

int series(int a[])
{
	char s[1000];
	gets(s);
	int len=strlen(s),temp=0,num=0,i,p=0;
	for(i=0;i<len;i++)
	{
		if(s[i]==',')
		{
			a[num++]=temp;
			temp=0;
		}
		else
			temp=temp*10+s[i]-'0';
	}
	a[num++]=temp;
	return(num);
}
int find_second(int a[],int num)
{
	int max,sec,i;
	max=0,sec=0;
	for(i=0;i<num;i++)
	{
		if(a[i]>max)
		{
			sec=max;
			max=a[i];
		}
		else if(a[i]>sec&&a[i]<max)
			sec=a[i];
	}
	if(max==sec) return 0;
	else
		return(sec);
}


int main_bench()
{
	int n,a[100],sec;
	n=series(a);
	sec=find_second(a,n);
	if(sec)
	my_printf("%d\n",sec);
	else
		my_printf("No\n");
}