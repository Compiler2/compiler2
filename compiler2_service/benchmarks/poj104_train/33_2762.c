#define NUM_ITER 670

#include <header.h>

char fy(char x)
   {
     char z;
     switch(x)
     {
           case'T':z='A';break;
           case'A':z='T';break;
           case'G':z='C';break;
           case'C':z='G';break;
           default:z='\0';
     }
     return z;
   }
int main_bench()
{
  char c;
  char a[255]={'\0'};
  int i,n,j,k;
  my_scanf("%d\n",&n);
  for(j=1;j<=n;j++)
  {
  for(i=0;i<255;i++)
  a[i]='\0';
  my_scanf("%s",a);
  for(i=254;i>=0;i--)
     {
         if(a[i]!='\0')
         {k=i;
          break;}
     }
  for(i=0;i<k;i++)
     {c=fy(a[i]);
      my_printf("%c",c);
      }
     c=fy(a[k]);
     my_printf("%c\n",c);
  }	
  return 0;
}