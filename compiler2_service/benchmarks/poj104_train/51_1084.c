#define NUM_ITER 68330

#include <header.h>

int main_bench()
{
     int n,len,a[500],i0=0;
     my_scanf("%d",&n);
     for(int i=0;i<500;i++) a[i]=0;
     char s[500],s1[500],s2[500];
     my_scanf("%s",s);
     len=strlen(s);
     for(int i=0;i<=len-n;i++)
     {
          for(int j=0;j<n;j++) s1[j]=s[i+j];
          s1[n]='\0';
          for(int j=i;j<=len-n;j++)
          {
               for(int k=0;k<n;k++) s2[k]=s[j+k];
               s2[n]='\0';
               
               if(strcmp(s1,s2)==0) a[i]++;        
          }        
     }
     
     for(int i=0;i<=len-n;i++)
     {
          if(a[i]>a[i0]) i0=i;    
     }
     if(a[i0]==1) my_printf("NO");
     else 
     {    my_printf("%d\n",a[i0]);
          for(int i=0;i<=len-n;i++)
          {
               if(a[i]==a[i0])
               {
                    for(int j=0;j<n;j++)
                    {
                         if(j<n-1) my_printf("%c",s[i+j]);
                         else my_printf("%c\n",s[i+j]);       
                    }               
               }        
          }
     }
          
}
