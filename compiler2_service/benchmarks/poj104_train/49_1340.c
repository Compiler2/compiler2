#define NUM_ITER 1237600

#include <header.h>

main_bench()
{  char s[1000];
   int m,i,j,k,len,x,y,n,h;
   gets(s);
   len=strlen(s);
   for(n=2;n<=len;n++)
  {
   for(i=0;i<=len-n;i++)
  
   for(k=i,j=i+n-1;s[k]==s[j];k++,j--)
   if(k>=j)
  {
   for(h=i;h<i+n;h++)
   my_printf("%c",s[h]);
   my_printf("\n");break;}

   
   
}

}