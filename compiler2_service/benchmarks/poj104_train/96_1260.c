#define NUM_ITER 998771

#include <header.h>

main_bench()
{
      char a[100];
      int c=0,l=0,i=0,j=0,d=0;
      int b[100]={0},f[100]={0};
      my_scanf("%s",a);
      l=strlen(a);
      
      for(i=0;i<l;i++)    b[i]=a[i]-'0';
      
      d=b[0];
      if(l>2)
      {
          for(i=1;i<=l-1;i++)
		  {
		  	  c=b[i];
		  	  d=c+d*10;
		  	  if(d>=13)
		  	  {
		  	  	  f[i-1]=d/13; 
		  	      d=d%13; 
			  } 
			  else    
			  f[i-1]=0;
			  if(i==l-1)    
			  j=d;   
		  }
		  if (f[0]!=0)
          my_printf("%d",f[0]);
          for (i=1;i<l-1;i++)    
		  my_printf("%d",f[i]); 
          my_printf("\n%d",j);    
      }
      else if(l==2)
	  { 
	      c=b[0]*10+b[1];
		  my_printf("%d\n%d",c/13,c%13); 
	  }
	  else     my_printf("0\n%d",b[0]);

}