#define NUM_ITER 944352

#include <header.h>

main_bench()
{
	double n,m;  
	my_scanf("%lf",&n);
	char a[100];
	my_scanf("%s",a);
	char b[100];
	my_scanf("%s",b);
	int i,j,k;
	int count1=0,count2=0,count=0;
	for (i=0;a[i]!='\0';i++)
	count1++;
	for (i=0;b[i]!='\0';i++)
	count2++;
	
	
	if(count1!=count2) 
	my_printf("error");
	else 
	{
	   for (j=0;j<count1;j++)
	   {
	      if ((a[j]=='A'||a[j]=='T'||a[j]=='C'||a[j]=='G')&&(b[j]=='A'||b[j]=='T'||b[j]=='C'||b[j]=='G'))
	      {
			 if (a[j]==b[j])
		      count++; 
		      if (j==(count1-1))	
		   	 {
				 m=((double) count/(double )count1)  ; 
				
				
				 if (m>=n)
				 my_printf("yes");
				 else 
				 my_printf("no");
			 }	
		  }
		  else
		  {
		     my_printf("error");
				break;
		  }
	   }
	  
	}
	
}




