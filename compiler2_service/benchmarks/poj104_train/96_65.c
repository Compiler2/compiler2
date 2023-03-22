#define NUM_ITER 1047874

#include <header.h>

main_bench()
{
   int a[100],b[100],i,j=0,k,l,S,p,q;
   char str1[100];
   my_scanf("%s",str1);
   l=strlen(str1);
   
   for(i=0;i<=l-1;i++)
   {
          a[i]=str1[i]-'0';             
   }
     p=a[0];
   if(l>=2) 
{
            for(i=0;i<=l-2;i++)
   {
          S=p*10+a[i+1];
          p=S/13;
          q=S%13;
          b[j]=S/13;
          j++;
          p=q;
   }
   if(b[0]==0&&l>2)
   { 
     for(k=1;k<=j-1;k++)
     my_printf("%d",b[k]);
     my_printf("\n");
     my_printf("%d\n",q);        
   }
   if(b[0]==0&&l==2)
   {
      my_printf("%d\n",b[0]);
      my_printf("%d\n",q);            
   }
   if(b[0]!=0)
   { 
     for(k=0;k<=j-1;k++) 
     my_printf("%d",b[k]);
     my_printf("\n");
     my_printf("%d\n",q);
   }
}
      if(l<2)
      {
         my_printf("0\n");
         my_printf("%d\n",a[0]);    
      }
      
  
}
