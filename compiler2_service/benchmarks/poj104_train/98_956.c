#define NUM_ITER 26773

#include <header.h>

int main_bench()
{ char *string,a[100]={'\0'};
  int n=0,i=0,sum=0,t=1; 
  my_scanf("%d",&n);
  string=a;
  my_scanf("%s",string);
  sum=sum+strlen(string);
  for(i=1;i<=n;i++)
  {  my_printf("%s",string);
	 if(i<n) 
	 {my_scanf("%s",string);}
	 sum=sum+strlen(string)+1;
	 
	  if(sum>80) 
	  {sum=strlen(string);my_printf("\n");t=0;}
      if(i<n&&t!=0)
	  { my_printf(" ");
	  	  }
	 t=1;
  
  }

 return(0);
}