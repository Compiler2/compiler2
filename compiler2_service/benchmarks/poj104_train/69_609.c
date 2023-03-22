#define NUM_ITER 785585

#include <header.h>

int main_bench()
{   int i,t,k ,j;
    char a[251],b[251],c[251] ;
    my_scanf("%s",a);
    my_scanf("%s",b);
    if(strlen(a)<strlen(b))
    {   
        t=strlen(b);
         k=strlen(b)-strlen(a);
         for (i=t-1;i>=0;i--)
         {
         if(i>k-1)  a[i]=a[i-k];
         else       a[i]='0';
         }
    }
                
                
    else 
     {   
        t=strlen(a);
         k=strlen(a)-strlen(b);
         for (i=t-1;i>=0;i--)
       {
         if(i>k-1)  b[i]=b[i-k];
         else       b[i]='0';
         }
    }
                
    
    
    
    
    for(i=t-1;i>0;i--)
    {    
         c[i]=a[i]+b[i]-'0';
         if((c[i]>='0')&&(c[i]<='9'))
        c[i]=c[i];
        else 
      {
       c[i]=c[i]-10;
        a[i-1]++;
        }
    }
      c[0]=a[0]+b[0]-'0';
       if(c[0]>'9')
       {
       c[0]=c[0]-10;
       my_printf("1");
       my_printf("%s\n",c);
       }
       else
    {   k=0;
        for(i=0;i<t;i++)
        {
        if(c[i]!='0')
        {
        for(j=i;j<t;j++)
        my_printf("%c",c[j]);
        k=1;
        }
       if(k==1)
       break;
        }
        k=0;
        for(i=0;i<t;i++)
        {if(c[i]!='0')
        k=k+1;
        }
        if(k==0)
        my_printf("0");
       
          return 0;
}
}