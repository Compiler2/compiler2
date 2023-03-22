#define NUM_ITER 31320

#include <header.h>


int main_bench()
{
 int n,i,l[1000],count=0;
 char s[1000][40];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   my_scanf("%s",s[i]);
   l[i]=strlen(s[i]);
 }
 for(i=-1;i<n;i)
 {
   i++;
   my_printf("%s",s[i]);
   count=l[i]+l[i+1]+1;
   while(count<=80&&i<n-1)
   {
     i++;
     my_printf(" ");
     my_printf("%s",s[i]);
     count+=1+l[i+1];
   }
   my_printf("\n");
}

  return 0;
}