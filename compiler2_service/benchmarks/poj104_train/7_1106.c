#define NUM_ITER 948994

#include <header.h>

int main_bench()
{
  char w[256],s[256],r[256];
  int i,j,a,b,t;
	  my_scanf("%s%s%s",w,s,r);
   	b=strlen(w); 
    a=strlen(s);
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
	       for(t=0;t<a;t++)
		     w[i+t]=r[t];
		   for(t=0;t<b;t++)
			   my_printf("%c",w[t]);
		   break;
		 }
	   }
	}
	if(i==b)
	{
	 for(t=0;t<b;t++)
	   my_printf("%c",w[t]);
	
	}	

	return 0;
}

