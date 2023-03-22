#define NUM_ITER 607823

#include <header.h>

int main_bench()
{
	char a[300];
	int b[128]={0},i,j,k,l=0;
	my_scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		j=a[i];
		if((j>64&&j<91)||(j>96&&j<123)) b[j]++;
	}
	for(j=65;j<91;j++)
	{
		if(b[j]>0) 
		{
			if(l==0) my_printf("%c=%d",j,b[j]);
			else my_printf("\n%c=%d",j,b[j]);
			l++;
		}
	}
	for(j=97;j<123;j++)
	{
		if(b[j]>0) 
		{
			if(l==0) my_printf("%c=%d",j,b[j]);
			else my_printf("\n%c=%d",j,b[j]);
			l++;
		}
	}
	if(l==0) my_printf("No");
	return 0;
}