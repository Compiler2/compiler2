#include <header.h>

  int main_bench(){
	  int n,i,k;
	  char a[256];
	  my_scanf("%d",&n);
	  for(i=0;i<n;i++){
	   my_scanf("%s",a);                                                                                       		  for(k=0;a[k]!='\0';k++){
			  if(a[k]=='A')
			  {
				  my_printf("T");
				  continue;
			  }
             if(a[k]=='G')
			 {
				  my_printf("C");
				  continue;
			  }
             if(a[k]=='C')
			 {
				  my_printf("G");
				  continue;
			  }

             if(a[k]=='T')
			 {
				  my_printf("A");
				  continue;
			  }
		  }
		  my_printf("\n");
	  }
	  return 0;
  }



	  