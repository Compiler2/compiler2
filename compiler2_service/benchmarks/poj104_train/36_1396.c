#define NUM_ITER 657095

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
	if(strlen(a)!=strlen(b))
	{
		my_printf("NO");
	}
	else
	{
        qsort(a,strlen(a),sizeof(char),compare);
	    qsort(b,strlen(a),sizeof(char),compare);
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
return 0;
}