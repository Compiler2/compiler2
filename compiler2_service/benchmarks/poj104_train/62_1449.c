#define NUM_ITER 1182295

#include <header.h>

int main_bench()
{
	char str[10000];int i,sum=0,j;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' '&&str[i-1]==' ')
		
		{
			sum++;
			for(j=i;j<strlen(str);j++) 
				*(str+j)=*(str+j+1);
			i--;
		}
	}
	for(i=0;i<strlen(str);i++)
		my_printf("%c",str[i]);

}