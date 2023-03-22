#include <header.h>

int main_bench()
{
  int a,b,t;
  char c;
  a=0;
  b=0;
  c=',';
  while(c==',')
  { 
	  my_scanf("%d",&t);
	  if(t>b)
	  { if(t>a)
	     {b=a;
	     a=t;
	       } 
	  else if(a==t){}
	  else b=t;
	  }
	  

	  
	  
		c=getchar();  
	
	  
  }
     if(a==b||b==0)
		 my_printf("No");
	 else my_printf("%d",b);
	 return 0;
}
