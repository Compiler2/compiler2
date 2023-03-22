#include <header.h>



int main_bench()
{
	int n;
	char a[25];
	my_scanf("%d",&n);
	int i,k,l,j;
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",&a);	
		l=strlen(a);
		k=1;
		if(a[0]==95 || (a[0]<='z'&& a[0]>='a') || (a[0]<='Z'&& a[0]>='A') )
		{a[0]=1;}
		else {a[0]=0;}
		for(j=1;j<l;j++)
		{
			if( (a[j]<='z'&& a[j]>='a') || (a[j]<='Z'&& a[j]>='A' )
				|| (a[j]<='9' &&  a[j]>='0') || a[j]==95)
			{a[j]=1;}
			else {a[j]=0;}
		}
		for(j=0;j<l;j++)
		{
			k=k*a[j];
		}
		if(k==1)my_printf("yes\n");
		if(k==0)my_printf("no\n");
	}
	return 0;
}