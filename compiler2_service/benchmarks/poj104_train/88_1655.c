#define NUM_ITER 1245639

#include <header.h>

int main_bench(){
	char a[30];
	gets(a);
	char *pt[30];
	int i,j,l,s[30],m;
	l=strlen(a);
	j=0;
	i=0;
	if(a[0]<58&&a[0]>47) 
	{
		pt[0]=&a[0];
		j=1;
	}
	for(i=1;i<l;i++)
	{
		if(a[i]<58&&a[i]>47&&(a[i-1]>58||a[i-1]<47))
		{
			pt[j]=&a[i];
			j=j+1;
		}
		else
		{
			if(a[i-1]<58&&a[i-1]>47&&(a[i]>58||a[i]<47))
			{
				s[j-1]=(&a[i]-pt[j-1]);
			}
		}
	}
	if(a[l-1]<58&&a[l-1]>47) s[j-1]=(&a[l-1]-pt[j-1]+1);
	for(i=0;i<j;i++)
	{
		for(m=0;m<s[i];m++)
		{
			my_printf("%c",*(pt[i]+m));
		}
		my_printf("\n");
	}
	my_scanf("%d",&i);
}