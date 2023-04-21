#define NUM_ITER 387483

#include <header.h>

int main_bench()
{  char str[300];
   my_scanf("%s",str);
   int len;
   len=strlen(str);
   int count=0,i,j;
   for(i=0;i<len;i++)
  {  if(str[i]>='a'&& str[i]<='z')
     count++;
   }  
     if(count==0)
   my_printf("No");
     else for(j=97;j<=122;j++)
  {  int n=0; 
     for(i=0;i<len;i++)
     { if(str[i]==j)
        n++;
      }
     char a;
     a=(char)j;
     if (n!=0)
     my_printf("%c=%d\n", a,n);

   }

    return 0;
}
