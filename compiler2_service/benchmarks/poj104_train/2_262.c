#include <header.h>

int main_bench()
{
     int i,j,k,t,m,c[26]={0},max=0;
     char b[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
     struct book    
    {
       int num;
       char man[26];
    }a[999];
    my_scanf("%d",&m);
    for(i=0;i<m;i++)
    {
          my_scanf("%d %s",&a[i].num,a[i].man);
     }
     i=0;
     for(i=0;i<m;i++)
     {
          for(j=0;j<26;j++)
          {
              for(k=0;k<26;k++)
              {
                   if(a[i].man[j]==b[k])
                        c[k]=c[k]+1;
               }
          }
     }
     i=0;j=0;k=0;
     for(i=0;i<26;i++)
     {
          if(c[i]>max)
          {
               max=c[i];
               t=i;
           }
      }
      my_printf("%c\n%d\n",b[t],max);
      for(j=0;j<m;j++)
      {
            for(k=0;k<26;k++)
            {
                   if(a[j].man[k]==b[t])
                   my_printf("%d\n",a[j].num);
             }
      }
      
}

