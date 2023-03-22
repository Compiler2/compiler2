#define NUM_ITER 24467

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,a;
	for(i=0;i<n;i++)
	{
		char zfc[256];
		my_scanf("%s",zfc);
        a=strlen(zfc);
		int j;
		for(j=0;j<a-1;j++)
		{
			if(zfc[j]=='A')  my_printf("%c",'T'); 
			
            else if(zfc[j]=='T') my_printf("%c",'A');
            
            else if(zfc[j]=='G') my_printf("%c",'C');
			
            else if(zfc[j]=='C') my_printf("%c",'G');
			
		}
            if(zfc[j]=='A') my_printf("%c\n",'T');
            else if(zfc[j]=='T') my_printf("%c\n",'A');
            else if(zfc[j]=='G') my_printf("%c\n",'C');
            else if(zfc[j]=='C') my_printf("%c\n",'G');
	}
	return 0;
}