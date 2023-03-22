#include <header.h>

main_bench()           
{
     int n,i,j,a[400]={0},A=0,B=0;
     my_scanf("%d",&n);
     for(i=0;i<=2*n-1;i++)
     my_scanf("%d",&a[i]);
     for(i=0;i<=2*n-2;i+=2)
     {
                        if(a[i]==1&&a[i+1]==2)
                        A+=1;
                        if(a[i]==2&&a[i+1]==0)
                        A+=1;
                        if(a[i]==0&&a[i+1]==1)
                        A+=1;
                        if(a[i]==2&&a[i+1]==1)
                        B+=1;
                        if(a[i]==1&&a[i+1]==0)
                        B+=1;
                        if(a[i]==0&&a[i+1]==2)
                        B+=1;
     }
     if(A>B)
     my_printf("A");
     if(A<B)
     my_printf("B");
     if(A==B)
     my_printf("Tie");
    }
     
