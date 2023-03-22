#define NUM_ITER 1276757

#include <header.h>

int main_bench()
{
     char a[110];
	 int i,k,len,m=0,b[100];
     gets(a);
     len=strlen(a);
	 for(i=0;i<len-1;i++)
	 {
		 if(a[i]==' ')
		 {	 b[m]=i;
		     m++;
		 }
	 }
	 for(k=m-1;k>=0;k--)
	 { for(i=b[k]+1;a[i]!=' '&&a[i]!='\0';i++)
			 my_printf("%c",a[i]);
	 my_printf(" ");
	 }
	 i=0;
	 while(a[i]!=' '&&a[i]!='\0')
	 { my_printf("%c",a[i]);
	   i++;
	 }
}
