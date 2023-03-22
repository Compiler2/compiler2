#define NUM_ITER 1088019

#include <header.h>

int main_bench()
{
 char a[80],b[80];
 int la,lb,i,j,k,c;
 my_scanf("%s %s",a,b);
 la=strlen(a);lb=strlen(b);
 for(i=0;i<lb;i++)
 {
  if(b[i]==a[0])
  {
   for(j=i,k=0;j<lb,k<la;k++,j++)
   {
    if(a[k]=b[j]) c=c+1;
	else break;
   }
   if(c=la)
   {
    my_printf("%d\n",i);
	break;
   }
  }
 }
}