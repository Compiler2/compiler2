#define NUM_ITER 233350

#include <header.h>

int main_bench()
{
    
    int n,m=0;
	char *s,*ps;
    s=(char*)malloc(1000*sizeof(char));
    gets(s);
	n=strlen(s); 
	
	for(ps=s;*ps!='\0';ps++)
	{	
		if(*ps>='0' && *ps<='9')
			my_printf("%c",*ps);
		else
		{
			if(*(ps+1)<58 && *(ps+1)>47)
				my_printf("\n");
		}

	}
}