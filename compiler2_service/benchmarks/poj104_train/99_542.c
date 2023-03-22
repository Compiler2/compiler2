#include <header.h>

int main_bench()
{ int n,s,i;
float a=0,b=0,c=0,d=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {  my_scanf("%d",&s);
   if(s<=18)
	   a=a+1;
   if(s>18&&s<36)
	   b=b+1;
   if(s>35&&s<61)
	   c=c+1;
   if(s>60)
	   d=d+1;
  }

my_printf("1-18: %.2f%%\n",a/n*100);
my_printf("19-35: %.2f%%\n",b/n*100);
my_printf("36-60: %.2f%%\n",c/n*100);
my_printf("60??: %.2f%%",d/n*100);
}