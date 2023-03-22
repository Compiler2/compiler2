#include <header.h>

int main_bench()
{
    int n,i,wl,len=0;
    char w[64],p[64]="";
    my_scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         my_printf(p);
         my_scanf("%s",w);
         wl=strlen(w);
         if(len+wl>80)
         {
             my_printf("\n");
             len=0;
         }
         else if(i>0)
         {
              my_printf(" ");
         }
         len+=wl+1;
         strcpy(p,w);
    } 
         my_printf(p);
         getchar();
         getchar();
         getchar();
         return 0;
} 
     