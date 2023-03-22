#define NUM_ITER 1124153

#include <header.h>

int main_bench()
{
	int i,k=0;
	char a[80],b[80];
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0'&&b[i]!='\0'&&k==0;i++)
	{
		if(a[i]>b[i])
		{
			k=1;
			if((a[i]>='a'&&a[i]<='z'))
				a[i]=a[i]-'a'+'A';
			if(a[i]==b[i])
				k=0;
			if(a[i]<b[i])
				k=-1;
		}
			if(a[i]<b[i])
		{
			k=-1;
			if((a[i]>='A'&&a[i]<='Z'))
				a[i]=a[i]-'A'+'a';
			if(a[i]==b[i])
				k=0;
			if(a[i]>b[i])
				k=1;
		}
	}
	if(k==1)
		my_printf(">");
	if(k==0)
		my_printf("=");
	if(k==-1)
		my_printf("<");
	return 0;
}

