#include <header.h>


int main_bench()
{                                                                                                            
	int n,i,j,sum=0,len;
	char  a[260];
	my_scanf("%d",&n);

	  for(j=0;j<n;j++)
	 {
		  len=0;
      my_scanf("%s",&a);
       len=strlen(a);
	for(i=0;i<len;i++)
	{

		if(i!=len-1)
		{
	  if (a[i]=='A')
	  {
        my_printf("T");
	  }
	  else if(a[i]=='T')
	  {
        my_printf("A");
	  }
	  else if(a[i]=='G')
	  {
        my_printf("C");

	  }
      else if(a[i]=='C')
	  {
        my_printf("G");
	  }
		}
		else
			{
	  if (a[i]=='A')
	  {
        my_printf("T\n");
	  }
	  else if(a[i]=='T')
	  {
        my_printf("A\n");
	  }
	  else if(a[i]=='G')
	  {
        my_printf("C\n");

	  }
      else if(a[i]=='C')
	  {
        my_printf("G\n");
	  }
		}
    }
	  }
	
	return 0;
}