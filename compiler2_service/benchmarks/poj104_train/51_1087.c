#define NUM_ITER 1139151

#include <header.h>

int main_bench()
{
      int l,i,k,j,n;
      int t=1;
      char str[500];
      my_scanf("%d",&n);
      my_scanf("%s",str);
      l=strlen(str);
      char s[500][5];
      int a[500];
      for(i=0;i<l-n+1;i++)
      {
          a[i]=1;
          for(j=0;j<n;j++)
          s[i][j]=str[i+j];
          s[i][j]='\0';
      }
      for(i=0;i<l-n;i++)
         for(j=i+1;j<l-n+1;j++)
         {
             if(strcmp(s[i],s[j])==0)
             a[i]++;
             
         }
         
         for(i=0;i<l-n;i++)
         {
             if(t<a[i])t=a[i];
         }
         if(t==1)my_printf("NO");
         else
         {
             my_printf("%d\n",t);
             for(i=0;i<l-n;i++)
             {
                 if(t==a[i])
                 my_printf("%s\n",s[i]);
             }
         }

          
  
}
