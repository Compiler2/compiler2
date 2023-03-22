#define NUM_ITER 1112089

#include <header.h>

main_bench()
{
      char a[100],b[100];
      int c,len,d,e,f[100];
     my_scanf("%s",a);
     len=strlen(a);
     if (len==1)
     {my_printf("0\n");my_printf("%d",a[0]-'0');}
     else
{if (len==2 && ((a[0]-'0')*10+a[1]-'0')<13)
     {my_printf("0\n");my_printf("%d",((a[0]-'0')*10+a[1]-'0'));}
     else
{
     for(c=0;c<=len-1;c++)
     {
     f[c]=a[c]-'0';
     }
     for(c=0;c<=len-2;c++)
     { 
       d=f[c]/13;
       b[c]=d+'0';
       e=f[c]%13;
       f[c+1]=f[c+1]+e*10;
     }
      d=f[len-1]/13;
       b[len-1]=d+'0';
       e=f[len-1]%13;
      if (b[0]!='0')
       my_printf("%s\n",b);
      else 
          {if (b[1]!='0')
        { for(c=0;c<=len-1;c++)
         {
         b[c]=b[c+1];
         }
         b[len-1]=0;
        my_printf("%s\n",b);
        } 
        else 
        { for(c=0;c<=len-2;c++)
         {
         b[c]=b[c+2];
         }
         b[len-1]=0;
         b[len-2]=0;
        my_printf("%s\n",b);
        } 
        my_printf("%d",e);}
        
}
}
     
      }
