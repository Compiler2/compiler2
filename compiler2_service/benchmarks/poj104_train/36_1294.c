#define NUM_ITER 689692

#include <header.h>

int compare(const void* a,const void* b)
{
	return*(char*)b-*(char*)a;
}
int main_bench()
{
	int i;
	char a[100],b[100];
	my_scanf("%s %s",a,b);
int la= strlen(a);
int lb= strlen(b);
	if(la!=lb)
	{
		my_printf("NO");
	}
	else
	{
        qsort(a,la,sizeof(char),compare);
	    qsort(b,lb,sizeof(char),compare);
	    for(i=0;i<strlen(a);i++)
		{
		    if(a[i]!=b[i])
		    	break;
		}
    	if(i==strlen(a))
	    	my_printf("YES");
    	else
		    my_printf("NO");
	}
}