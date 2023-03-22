#define NUM_ITER 30228

#include <header.h>

int main_bench()
{   int n,i,j,l;
    char w[20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%s",w);
	 l=strlen(w);
     if(w[l-1]=='y'&&w[l-2]=='l')
	    for(j=0;j<=l-3;j++)
	        my_printf("%c",w[j]);
     else if(w[l-1]=='r'&&w[l-2]=='e')
	    for(j=0;j<=l-3;j++)
	       my_printf("%c",w[j]);
	 else
         for(j=0;j<=l-4;j++)
	        my_printf("%c",w[j]);
	 my_printf("\n");
	}
	return 0;
}