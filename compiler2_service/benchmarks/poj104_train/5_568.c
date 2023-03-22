#define NUM_ITER 902917

#include <header.h>

int main_bench()
{
	int i,n1,n2,p;
	double rate,m=0.0;
	char str1[501],str2[501];
	my_scanf("%lf",&rate);
	my_scanf("%s",str1);
	my_scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	p=0;
	if(n1==n2)
	{
	   for(i=0;i<n1;i++)
	   {if(str1[i]!='A'&&str1[i]!='T'&&str1[i]!='C'&&str1[i]!='G')
	        p=1;
	   else if(str2[i]!='A'&&str2[i]!='T'&&str2[i]!='C'&&str2[i]!='G')
		    p=1;
	   if(p==1)
	   {
		   my_printf("error");
		   break;
	   }
	   if(str1[i]==str2[i])
	       m+=1.0;
	   }
	   if(p==0)
	      if(m/n1>=rate)
		   my_printf("yes");
	      else my_printf("no");
	}
	else my_printf("error");

	return 0;
}