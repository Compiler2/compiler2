#include <header.h>

int main_bench()
{  int n,i,j,k,t;
   char word[40];

   my_scanf("%d",&n);

   for(i=0,t=81;i<n;i++)
   {my_scanf("%s",word);
     k=strlen(word);
	 if(t-k-1>=0) 
	  { if(t==81) my_printf("%s",word);
		 else my_printf(" %s",word);
       t=t-k-1;
	  }
	 else  {my_printf("\n");
	        t=81-k-1;
		    my_printf("%s",word);}   
   }
     my_printf("\n");
    return 0;
}