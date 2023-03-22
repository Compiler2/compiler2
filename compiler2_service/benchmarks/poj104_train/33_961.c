#define NUM_ITER 21734

#include <header.h>

int main_bench()
{
	int j,i,len,n;
	char a[256];
	char b[256];
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	    my_scanf("%s",a);
	    len=strlen(a);
	   for(i=0;i<len;i++)
	   {
		 switch(a[i])
		   {
		 case 'A':b[i]='T';
			break;
		 case 'T':b[i]='A';
			break;
		 case 'G':b[i]='C';
			break;
		 case 'C':b[i]='G';
			break;
		   }
	    }
	   for(i=0;i<len;i++)
	      my_printf("%c",b[i]);
	   my_printf("\n");
 	}
	
	return 0;
}