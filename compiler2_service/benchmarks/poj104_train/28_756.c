#define NUM_ITER 1335368

#include <header.h>

int main_bench() 
{ 
    int i,n,t; 
    char c[10000]; 
    gets(c); 
    n=strlen(c); 
    t=0; 
    for(i=0;i<=n;i++) 
	{ 
      if(c[i]!=' '&&c[i]!='\0') 
	  { 
         t=t+1; 
	  } 
      if(c[i]==' ') 
	  { 
         if(c[i-1]!=' ')  
		 {
			 my_printf("%d,",t); 
             t=0; 
		 }
		 
	  } 
      if(c[i]=='\0') 
	  { 
          my_printf("%d",t); 
	      t=0;
	  } 
	} 
}
