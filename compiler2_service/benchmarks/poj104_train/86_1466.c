#include <header.h>






int main_bench()
{
	int n,i;
	int m,j,a[100],s;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  s=0;
	  my_scanf("%d",&m);
	  for(j=0;j<m;j++)
	  {
	    my_scanf("%d",&a[j]);
	  }
	  if(m==0){my_printf("60");}
	  else if(m==1)
	  {
	    if(a[m-1]+3*m<=60)
	    {
	      s=60-3*m;
		  my_printf("%d",s);
	    } 
		else{my_printf("%d",a[0]);}
	  }
	  else
	  { 
		 if(a[m-1]+3*m<=60)
	     {
	       s=60-3*m;
		   my_printf("%d",s);
	     }
	     else if(a[m-1]+3*m>60&&a[m-1]+3*(m-1)<=60)
		 {
		   s=a[m-1];
		   my_printf("%d",s);
		 }
		 else if(a[m-1]+3*(m-1)>60&&a[m-2]+3*(m-1)<=60)
		 {
			 s=60-3*(m-1);
			 my_printf("%d",s);
		 }
		 else if(a[m-2]+3*(m-1)>60&&a[m-2]+3*(m-2)<=60)
		 {
		   my_printf("%d",a[m-2]);
		 }
		 else if(a[m-2]+3*(m-2)>60&&a[m-3]+3*(m-2)<=60)
		 {
		   s=60-3*(m-2);
		   my_printf("%d",s);
		 }
	  }
	  my_printf("\n");
	}
	return 0;
}

