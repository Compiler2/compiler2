#include <header.h>

int main_bench()
{  
	int i,n=0,k=0;
	double m;
	my_scanf("%lf",&m);
	char a[100];
	char b[100];
	my_scanf("%s\n%s",a,b);
	int l=strlen(a),t=strlen(b);
	   for(i=0;i<l;i++)
	   {
	   if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T') k++;
	   if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T') k++;
	   }
	  if(k>0) { my_printf("error");return 0;}
      
	 
	if(l==t) 
	 {
	for (i=0;i<=l;i++)
	{
		
	  if(a[i]==b[i]) n++;
	}
	  if((1.00*n/l)>m)  my_printf("yes");
	  
	  else my_printf("no");
	   
	   
	}
	 
	 else my_printf("error");
   return 0; 
}