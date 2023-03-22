#define NUM_ITER 1030350

#include <header.h>

int main_bench()
{
  char s[50],w[50];
  int i,j,a,b;
	  my_scanf("%s%s",s,w);
    a=strlen(s);
	b=strlen(w);
	for (i=0;i<b;i++)
	{
	   if(s[0]==w[i])
	   {
	     for(j=0;j<a;j++)
		 {
			 if(s[j]!=w[i+j])
			 break;
		 }
	   	 if(j==a)
		 {
	    my_printf("%d",i);
		break;
		 }
	   }
	}
	return 0;
}
