#define NUM_ITER 886997

#include <header.h>

main_bench()
{
      int i,j,n,t;
      char c[100],d[100];
      int b[100],a[100];
     gets (c);
     
      
      for(i=0;c[i]!='\0';i++)
     {
         a[i]=c[i]-'0';           
      } 
      
     if(i==1){my_printf("0");my_printf("\n%d",a[0]);  }
      else
      {
     for(j=0;j<i-1;j++)
     {
        b[j]=(10*a[j]+a[j+1])/13; 
        a[j+1]=(10*a[j]+a[j+1])%13;
          
     } 
  for(n=0;n<j;n++)
     {
       d[n]=b[n]+'0';
                   
     }
    
     d[n]='\0';
     if(d[0]=='0')
     {
           if(d[1]=='\0')
           {my_printf("%c",d[0]);}
            else
            {
             for(t=1;d[t]!='\0';t++)
              {
      
                    my_printf("%c",d[t]);           
                   }          
            }
            }   
     else
     {
     for(t=0;d[t]!='\0';t++)
     {
      
        my_printf("%c",d[t]);           
     }                    
     }
     my_printf("\n%d",a[j]); 
}   
     
getchar();  
 getchar();     
 getchar();    
  getchar();  
 getchar();     
 getchar();
  }