#include <header.h>

main_bench()
{   char  a[101];
   
    char  c[103];
    int i,j,k,l,m,n,len,mod;
   
    k=0;
    for ( j=0;j<103;j++)
    {c[j]='0';}
   
    my_scanf("%s",a);
    len=strlen(a);
    if(len==1)
    {my_printf("0\n%d",(a[0]-48)%10);}
    else if(len==2&&(a[0]==49)&&(a[1]-48)<=2)
    {my_printf("0\n%d",(a[1]-38));}
    else
    {mod=a[0]-48;
         for(i=1;i<len;i++)
    {c[k]=(10*(mod)+a[i]-48)/13+'0';
         mod=(10*(mod)+a[i]-48)%13;
         k++;}
         
         
         
         if(c[0]!=48){for(l=0;l<k;l++)
         {my_printf("%c",c[l]);}
         my_printf("\n%d",mod);}
         if(c[0]==48)
         {for(l=1;l<k;l++)
         {my_printf("%c",c[l]);}
         my_printf("\n%d",mod);}
    
    }
  



   }
