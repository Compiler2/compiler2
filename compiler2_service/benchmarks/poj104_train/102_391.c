#include <header.h>

main_bench()                                
{
   int n,i,j=0,y=0,t;
   double s;
   my_scanf("%d",&n);
   char c[n];
   double a[n],b[n];
   for(i=0;i<n;i++)
   {
     my_scanf("%s %lf",&c,&s);
     t=strlen(c);
     if(t==4)
     {a[j]=s;
     j++;} 
     else
     {b[y]=s;
     y++;}                 
   }
   
   for(i=0;i<j;i++)
   {
    for(t=0;t<j-1-i;t++)
    {
    if(a[t]>a[t+1])
       {double e=a[t];
       a[t]=a[t+1];
       a[t+1]=e; }                
    }                
   }
   for(i=0;i<y;i++)
   {
    for(t=0;t<y-1-i;t++)
    {
       if(b[t]<b[t+1])                 
      { double  e=b[t];
       b[t]=b[t+1];
       b[t+1]=e; }                
    }                
   }
   for(i=0;i<j;i++)
   {my_printf("%.2lf ",a[i]);}
    for(i=0;i<y;i++)
   {
    if(i==y-1)
   {my_printf("%.2lf",b[i]);}
   else
   {my_printf("%.2lf ",b[i]);}
   } 
        
getchar();
getchar();
getchar();
}
