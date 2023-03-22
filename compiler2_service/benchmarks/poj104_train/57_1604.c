#include <header.h>

int main_bench()
{
   int i,j,n,m;
   char c[100];
   my_scanf("%d",&n);
   for (i=0;i<n;i++){
       my_scanf("%s",c);
       m=strlen(c);
       if (((c[m-1]=='r')&&(c[m-2]=='e'))||((c[m-1]=='y')&&(c[m-2]=='l'))){
                m=m-2;
       }
       else {
	        m=m-3;
	   }
       for (j=0;j<m;j++){
	       my_printf("%c",c[j]);
	   }
       my_printf("\n");
   }
 return 0;
}