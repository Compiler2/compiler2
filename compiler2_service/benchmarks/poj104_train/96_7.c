#define NUM_ITER 1139565

#include <header.h>

int main_bench()
{
	char bei[100];
	char shang[100]={0};
	int i,j,n;
	my_scanf("%s",bei);
	n=strlen(bei);
	if(n==1)
	{	
		my_printf("0\n");
		my_printf("%c",bei[0]);
	}
	else if (((bei[0]-'0')*10+bei[1]-'0')<13 && bei[2]==0)
	{
		my_printf("0\n");
		for (i=0;i<2;i++)
		my_printf("%c",bei[i]);
	}
	else
	{
	for (i=0;i<n-1;i++)
	{
		shang[i]=((bei[i]-'0')*10+bei[i+1]-'0')/13+'0';
		bei[i+1]=((bei[i]-'0')*10+bei[i+1]-'0')%13+'0';
	}
	if (shang[0]!='0')
		my_printf("%c",shang[0]);
	for (i=1;shang[i]!=0;i++)
		my_printf("%c",shang[i]);
	my_printf("\n");
	if (bei[n-1]>='0' && bei[n-1]<='9')
		my_printf("%d",bei[n-1]-'0');
	else my_printf("%d",bei[n-1]-'0');
	}
	return 0;
}