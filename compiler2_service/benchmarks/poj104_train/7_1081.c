#include <header.h>

main_bench()
{
   char a[300],b[300],c[300];
   my_scanf("%s%s%s",a,b,c);
   int a1,b1,c1;
   int i,j,k;
   a1=strlen(a);  
    b1=strlen(b);  
     c1=strlen(c);
     for(i=0;i<=a1-1;i++)
        {
           for(j=0;j<=b1-1;j++)
              {
                if(a[i+j]!=b[j]) break;                
              }  
             if(j==b1)   {break;}               
        } 
        
if(i>=a1)   my_printf("%s",a); 
else{  
     for(k=0;k<i;k++)
        {my_printf("%c",a[k]);}
     my_printf("%s",c);
     for(k=i+b1;k<=a1-1;k++)
     my_printf("%c",a[k]);
}
}