#define NUM_ITER 542807

#include <header.h>

int main_bench()
{
    long int a,b,s=0,i,j=0,t;
	char c[100],d[100];
	my_scanf("%d %s %d",&a,c,&b);
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]<='9')
			s=s*a+c[i]-'0';
		else if(c[i]>='a')
			s=s*a+c[i]-'a'+10;
		else s=s*a+c[i]-'A'+10;
	}
	if(s>0)
	{
	while(s>0)
	{
        t=s%b;
		if(t<=9)
			d[j]=t+48;
		else d[j]=t+55;
		j++;
		s=s/b;
	}
	for(i=j-1;i>=0;i--)
		my_printf("%c",d[i]);
	}
	else my_printf("0");
}





