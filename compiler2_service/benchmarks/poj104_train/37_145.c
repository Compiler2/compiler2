#define NUM_ITER 5612

#include <header.h>


int main_bench()
{
 char a[100000];
 int b[26] ;
 int i,j,t,lenth;
 int n ;
 my_scanf("%d",&t);
 for(j=0;j<t;j++)
 {
	 n=1;
 my_scanf("%s",a);
 lenth = strlen(a);
 for(i=0;i<26;i++)
	 b[i]=0;
 for(i=0;i<lenth;i++)
 {
    
         b[a[i] - 'a'] = b[a[i] - 'a'] + 1;
 }
 for(i=0;i<lenth;i++)
 {
  if(b[a[i] - 'a'] == 1)
  {
   my_printf("%c\n",a[i]);
   n = 0;
   break;
  }
 }
 if(n == 1)
  my_printf("no\n");

 for(i = 0;i <lenth;i++)
  a[i] = 0;
 for(i = 0;i < 26;i++)
  b[i] = 0;
 }

 return 0;
}

