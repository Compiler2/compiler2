#define NUM_ITER 38849

#include <header.h>

int win=0;
void jzb(int a,int b)
{
     if(a==0)
     {
         if(b==1)  win++;
         else if(b==2)  win--; 
     } 
     else if(a==1)
     {
          if(b==2)  win++;
         else if(b==0)  win--;
     }
     else if(a==2)
     {
          if(b==0)  win++;
         else if(b==1)  win--;
     }
}
int main_bench()
{
    int t,a,b,i;
    my_scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         my_scanf("%d%d",&a,&b);
         jzb(a,b);           
    }
    if(win>0) my_printf("A");
    else if(win<0) my_printf("B");
    else if(win==0) my_printf("Tie");
    }
