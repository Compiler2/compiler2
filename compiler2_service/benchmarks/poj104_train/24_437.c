#define NUM_ITER 620998

#include <header.h>


int main_bench()
{
	char str[300];
	int i,num[30],j=0,n,max,min,sum1=0,sum2=0;
	 
	gets(str);
	for (i=0;i<30;i++)
		num[i]=0;
	for (i=0;i<strlen(str);i++)
	{if (str[i]==' ') j++;
	else
		num[j]++;}
	n=j+1;
	max=0;min=0;
	for (j=0;j<n;j++)
	   {if (num[j]>num[max]) max=j;
		if (num[j]<num[min])min=j;}
	for (j=0;j<max;j++)
	sum1=sum1+num[j];
	for (j=0;j<min;j++)
	sum2=sum2+num[j];
	for (i=sum1+max;i<sum1+max+num[max];i++)

	my_printf ("%c",str[i]);
	my_printf("\n");
	for (i=sum2+min;i<sum2+min+num[min];i++)
		my_printf("%c",str[i]);

		


}

	