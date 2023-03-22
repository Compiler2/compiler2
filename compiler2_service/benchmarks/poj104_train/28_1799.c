#define NUM_ITER 1234310

#include <header.h>


char a[1000000];
int main_bench()
{
	
	int  num,i,len;	
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		num=0;
		if(a[i]==' '){continue;}
		while(a[i]!=' '&&(i!=len-1))
		{
			num++;
			i++;
		}
		if(i!=len-1){my_printf("%d,",num);}
		else{my_printf("%d",num+1);}
	}
	my_printf("\n");
	return 0;
}