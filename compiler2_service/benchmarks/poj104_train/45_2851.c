#define NUM_ITER 946739

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i=0,j,w;
	my_scanf("%s%s", &a, &b);
    for(j=0;j<strlen(b);j++)
	{
	   if(a[i]==b[j]&&a[i+1]==b[j+1]&&i<strlen(a)-1)
		   i++;
	   w=j-strlen(a)+2;
       if(i==strlen(a)-1)
		break;	
	}
	my_printf("%d", w);
	return 0;
}

