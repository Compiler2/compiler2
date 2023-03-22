#define NUM_ITER 25858

#include <header.h>

int main_bench()
{
 int t,l,a,b;
 char string[100001];
 int i=0,j=0,c=0,d=0;
 my_scanf("%d",&t);
 my_scanf("\n");
 while(t--)
 {
  gets(string);
  l=strlen(string); 
  c = 0;
for(a=0;a<l;a++)
  {    
   i=0;
   j=0;
while(i<l)
   {   
    if(string[a]!=string[i] && a!=i)
    {
     j++;
    }
    i++;
   }
   if(j==l-1)
   {
    c=c+1;
    my_printf("%c\n",string[a]);
    break;
   } 
  }
if (c==0)
  {
   my_printf("no\n");
  }
 }
 return 0;
}

