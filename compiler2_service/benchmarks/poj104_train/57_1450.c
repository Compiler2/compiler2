#define NUM_ITER 28734

#include <header.h>

int main_bench()
{
	 int n,p;
	 int i,j;
	 char a[50];
	 my_scanf("%d",&n);
	 for (i=0;i<n;i++)
	 {
		 my_scanf ("%s",a);
		 char*s=a;
		 p=strlen(a);
		 if(((*(s+p-2)=='e')&&(*(s+p-1)=='r'))||((*(s+p-2)=='l')&&(*(s+p-1)=='y')))
		 {
			for (j=0;j<p-2;j++)
			{
				my_printf("%c",a[j]);
			}
			my_printf("\n");
		 }
		 else 
		 {
			 for (j=0;j<p-3;j++)
			 {
				 my_printf("%c",a[j]);
			 }
			 my_printf("\n");
		 }
	 }

	 return 0;
}