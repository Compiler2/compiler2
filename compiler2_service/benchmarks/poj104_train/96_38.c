#define NUM_ITER 991800

#include <header.h>

main_bench()
{
	char a[101]={0},re[100]={0};
	int i,j,k=0,l,te;
	my_scanf("%s",a);
	l=strlen(a);
	te=a[0]-'0';
	for (i=1;i<l;i++)
	{
		te=te*10+a[i]-'0';
		if (te/13!=0||i!=1)
		{
			re[k]=te/13+'0';
			k++;
		}
     	te=te%13;
	}
	if ((l==1||l==2)&&re[0]==0)
		my_printf("0\n%d",te);
	else
		my_printf("%s\n%d",re,te);
	
}