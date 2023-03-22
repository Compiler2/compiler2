#define NUM_ITER 43337

#include <header.h>

int main_bench()
{
	long long int n=0,a,a0,b;
	int i=0,j;
	char change1(char),change2(char);
	char str[1000],put[1000];
	my_scanf("%lld ",&a0);
	do
	{
		my_scanf("%c",&str[i]);
		if(str[i]>96) str[i]=str[i]-32;
		i=i+1;
	}
	while(str[i-1]!=' ');
	i=i-1;
	my_scanf("%lld",&b);
	a=1;
	for(j=i-1;j>=0;j--)
	{
		n=n+a*change1(str[j]);
		a=a*a0;
	}
	j=0;
	while(n!=0)
	{
		put[j]=change2((char)(n%b));
		n=n/b;
		j=j+1;
	}
	if(j>0)
	{
		for(i=j-1;i>=0;i--)
	    my_printf("%c",put[i]);
	}
	if(j==0)
	my_printf("0");
	return 0;
}
char change1(char m)
{
	if(m<='9'&&m>='0') m=m-'0';
	if(m>'9') m=m-'A'+10;
	return(m);
}
char change2(char m)
{
	if(m>=10) m=m-10+'A';
	if(m<10)  m=m+'0';
	return(m);
}