#define NUM_ITER 970538

#include <header.h>

int main_bench()
{
	double m;
	int tag=1;
	double xsd;
	char zfc[2][500];
    int len;
	int count=0;
	my_scanf("%lf",&m);
	for(int i=0;i<2;i++)
	{
		my_scanf("%s",zfc[i]);
	}
	len=strlen(zfc[0]);
	for(int j=0;j<len;j++)
	{
		if((zfc[0][j]!='A')&&(zfc[0][j]!='G')&&(zfc[0][j]!='C')&&(zfc[0][j]!='T'))
		{
			tag=0;
			break;
		}
		if(zfc[0][j]==zfc[1][j])
		{
			count++;
		}
	}
	xsd=(double)count/len;
	if(tag==0)
	{
            my_printf("error");
	}
	else if(strlen(zfc[0])!=strlen(zfc[1]))
	{
		my_printf("error");
	}
	 
    else if(xsd>m)
	{
		my_printf("yes");
	}
	else if(xsd<=m)
	{
		my_printf("no");
	}
    
	return 0;
}
