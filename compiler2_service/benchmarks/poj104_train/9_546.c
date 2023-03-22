#define NUM_ITER 1990

#include <header.h>

struct pat
{
   char id[10];
   int  age;
       }pat[100];
main_bench()
{
      int n,a[200],j,i;
      my_scanf("%d",&n);
      for(j=0;j<150;j++) a[j]=0;
      for( i=0;i<n;i++)
       {
              my_scanf("%s %d",pat[i].id,&pat[i].age);
              for(j=1;j<150;j++)
              {
                      if(j==pat[i].age) a[j]++;
                      }
              }
       for(j=150;j>=60;j--)
        { 
             if(a[j]==0)   continue;          
          for(i=0;i<n;i++)
        {
                          if(j==pat[i].age)  my_printf("%s\n",pat[i].id);
                }
                }  
               for(i=0;i<n;i++)
                         if(pat[i].age<60) my_printf("%s\n",pat[i].id);
                getchar();
                getchar();
                }