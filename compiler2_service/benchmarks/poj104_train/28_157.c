#define NUM_ITER 390092

#include <header.h>


int main_bench()
{
	int i,num=0,j=0;
	char a[300][30]={0},b[10000]={0};
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]!=' '&&b[i+1]=='\0')
		{
			num++;my_printf("%d",j+1);j=0;
		}
		else if(b[i]!=' ')
		{
             a[num][j]=b[i];j++;
		}
		else if(b[i]==' '&&b[i+1]!=' ')
		{
			num++;my_printf("%d,",j);j=0;
		}
	
	}
	
}