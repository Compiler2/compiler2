#include <header.h>

int main_bench()
{
      int n,i,s=0;
	  struct z
	  {
		  char a[40];
		  int l;
	  }z[1000];
	  my_scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {
		  my_scanf("%s",z[i].a);
		  z[i].l=strlen(z[i].a);
	  }
	  for(i=0;i<n-1;i++)
	  {
			  
			  
				  s=s+z[i].l;
				  my_printf("%s",z[i].a);
				  
			  
			  if(s+z[i+1].l>=80)
			  {
				  my_printf("\n");
				  s=0;
			  }
			  else {
				  my_printf(" ");
			  s++;
			  }
			  
			  
	  }
	  my_printf("%s",z[n-1].a);





	return 0;
}

 

