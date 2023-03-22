#define NUM_ITER 28837

#include <header.h>

int main_bench()
{
    int n;
    my_scanf ("%d",&n);
    int s[200];
    int i;
    for (i=0;i<200;i++)
        s[i]=0;
    for (i=0;i<n;i++)
    {
       int a,b;
       my_scanf ("%d%d",&a,&b);
       if (a-b==-1||a-b==2)
          s[i]=1;
       if (a-b==1||a-b==-2)
          s[i]=2;
       if (a==b)
          s[i]=0; 
    }
    int A=0,B=0;
    for (i=0;i<n;i++)
    {
        if (s[i]==1)
           A++;
        if (s[i]==2)
           B++;    
    }
    if (A>B)
       my_printf ("A\n");
    if (B>A)
       my_printf ("B\n");
    if (A==B)
       my_printf ("Tie\n");  
}