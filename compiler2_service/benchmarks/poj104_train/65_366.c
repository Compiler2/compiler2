#define NUM_ITER 37857

#include <header.h>


main_bench()
{
 int n,i,j,k,s[200][2],a=0,b=0;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    my_scanf("%d %d",&s[i][0],&s[i][1]);
    if(s[i][0]==0)
    {
       if(s[i][1]==1)
       a++;
       else
       {
          if(s[i][1]==2)
          b++;
          else;
       }
    }
    
     if(s[i][0]==1)
    {
       if(s[i][1]==2)
       a++;
       else
       {
          if(s[i][1]==0)
          b++;
          else;
       }
    }
    
     if(s[i][0]==2)
    {
       if(s[i][1]==0)
       a++;
       else
       {
          if(s[i][1]==1)
          b++;
          else;
       }
    }
    
    
 }
 if(a>b)
    my_printf("A");
    else
    {
       if(a<b)
       my_printf("B");
       else
       my_printf("Tie");
    }
}