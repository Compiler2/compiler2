#define NUM_ITER 1418288

#include <header.h>

int main_bench()
{
	int i,k=-1;
	char zjy[30000];
         gets(zjy);
	while(k==-1||zjy[k]!='\0')
		{
			k++;
			for(i=0;zjy[k]!=' '&&zjy[k]!='\0';k++)i++ ;
			if(i!=0)
                            {if(zjy[k]==' ')my_printf("%d,",i);
			 else my_printf("%d\n",i);}
		}
}