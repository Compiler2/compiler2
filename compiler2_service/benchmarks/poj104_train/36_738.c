#define NUM_ITER 772811

#include <header.h>


void change(char a[])
{
	int i,j,k;
	char temp;
	k=strlen(a);
	for(i=0;i<k;i++)
		for(j=i+1;j<=k;j++)
			if(a[i]<a[j])
			{temp=a[i];a[i]=a[j];a[j]=temp;}
}




int main_bench()
{
	int l1,l2,k=0,i;
	char a[100],b[100];
	my_scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		change(a);
		change(b);
		for(i=0;i<l1;i++)
		{
			if(a[i]!=b[i])k=1;
		}
		if(k==0)my_printf("YES");
		else my_printf("NO");
	}
	else my_printf("NO");
}