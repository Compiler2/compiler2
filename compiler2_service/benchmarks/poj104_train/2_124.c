#include <header.h>


void function(int,int);

int main_bench()
{
   char s[200][100];
   int n[100],h[100],maxh[100];
   int a;
   int i,j,k,p;
   int num,maxnum=0;
   char c;

   my_scanf("%d",&a);
   for(i=0;i<a;i++)
   {
      my_scanf("%d%s",&n[i],s[i]);
   }

   for(j='A';j<='Z';j++)
   {
       num=0;
       for(i=0;i<a;i++)
       {
          for(k=0;k<strlen(s[i]);k++)
          {
             if(s[i][k]==j)
             {
                 num++;
                 h[num]=n[i] ;
             }
          }
       }
       if(num>maxnum)
       {
          c=j;
          maxnum=num;
          for(p=1;p<=maxnum;p++)
          {
             maxh[p]=h[p];
          }
       }
   }

   my_printf("%c\n%d\n",c,maxnum);
   for(p=1;p<=maxnum;p++)
   {
       my_printf("%d\n",maxh[p]);
   }
   return 0;

}