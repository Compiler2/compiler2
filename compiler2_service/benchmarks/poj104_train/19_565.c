#define NUM_ITER 344448

#include <header.h>





main_bench()
{
  int k=0,i=0;
  char a[150],b[150];
  char d[101][50];
  char c;

  
  

  
  for(k=0,i=0;(c=getchar())!='\n';)
  {
    if(c==' ') 
	{
		d[k][i]='\0';
		k++;
		i=0;
	}
	else 
	{
	  d[k][i]=c;
	  i++;
	}
  }
  d[k][i]='\0';
  k++;

  gets(a);
  gets(b);

   for(i=0;i<k-1;i++)
   {
     if(strcmp(d[i],a)!=0)  my_printf("%s ",d[i]);
	 else my_printf("%s ",b);
		 
   }
   if(strcmp(d[i],a)!=0)  my_printf("%s",d[i]);
	 else my_printf("%s",b);
   
}