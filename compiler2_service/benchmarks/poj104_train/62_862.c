#define NUM_ITER 1224943

#include <header.h>

int main_bench()
{
	char zifu[300],tihuan[300];
	int k,i=0;
	gets(zifu);
	for(k=0;k<strlen(zifu);k++)
	{
		if((zifu[k]!=' ')||(zifu[k]==' '&&zifu[k+1]!=' '))
		{
		   tihuan[i]=zifu[k];
		   i++;
		}
        else
		{
		   continue;
		}
	}
	for(k=0;k<i;k++)
	{
	my_printf("%c",tihuan[k]);
    }
	return 0;
}