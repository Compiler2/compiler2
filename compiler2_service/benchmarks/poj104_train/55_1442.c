#define NUM_ITER 392121

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	char h;
	long s=0,p;
	int i,t,m,n,j,q;
	my_scanf("%d%s%d",&m,a,&n);
    t=strlen(a);
    for(i=0;i<t;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			s=s*m+a[i]-55;
		}
		else if(a[i]>='0'&&a[i]<='9')
			s=s*m+a[i]-48;
		else
			s=s*m+a[i]-87;
	}
	p=s;
	for(i=0;;i++)
	{
		q=p%n;
		if(q>=10)
			b[i]=55+q;
		else
			b[i]=48+q;
		for(j=i;j>0;j--)
		{
            h=b[j];
			b[j]=b[j-1];
			b[j-1]=h;
		}
		p=p/n;
		if(p==0)
			break;
	}
	b[i+1]='\0';
	my_printf("%s",b);
	return 0;
}