#define NUM_ITER 489966

#include <header.h>

int main_bench()
{
	int a,b,i,l;
	long m=1,num=0;
	char n[32],str[32]={0};
	my_scanf("%d%s%d",&a,n,&b);
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		if((n[i]>='a')&&(n[i]<='z'))n[i]-=87;
        if((n[i]>='A')&&(n[i]<='Z'))n[i]-=55;
        if((n[i]>='0')&&(n[i]<='9'))n[i]-=48;
	}
	for(i=l-1;i>=0;i--)
	{
		
		num+=m*n[i];
		m=m*a;
	}
	m=1;
	for(i=31;i>=0;i--)
	{
		str[i]=num%b;
		num=num/b;
		if(num==0)break;
	}
	for(l=i;l<32;l++)
	{
		if((str[l]>=0)&&(str[l]<=9))my_printf("%d",str[l]);
        if(str[l]>=10)my_printf("%c",str[l]+55);
	}
	my_printf("\n");
}
