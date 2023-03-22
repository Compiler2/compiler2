#define NUM_ITER 1118480

#include <header.h>

int main_bench()
{
	char a[2][30]={'\0'};
	char *p,*q;
	p=&a[0][0],q=&a[1][0];
	my_scanf("%s%s",q,p);
	int n=strlen(q),flag=0;
	for(;*p!='\0';p++)
	{
		while(*p!=*q&&*p!='\0')p+=1;
		flag=1;
		while(*(q+1)!='\0')
		{
			p+=1;q+=1;
			if(*p!=*q)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			my_printf("%d",p-&a[0][0]-n+1);
			break;
		}
	}
}