#include <header.h>

int main_bench()
{
   int i,n;









     char ch[100][100];   
     n=0;
     my_scanf("%s",ch[0]);
     for(i=1;i<100;i++)
        {
		 if(getchar()!='\n') {
             my_scanf("%s",ch[i]);            
             n=n+1;
		 }
		  else break;       
         }

     for(i=n;i>=1;i--){my_printf("%s ",ch[i]);}
     my_printf("%s",ch[0]);
}
