#define NUM_ITER 927249

#include <header.h>

int main_bench()
{
    int a,b,c,n,i,j;
    char s[500];
    int d[500]={0}; 
    my_scanf("%d",&n);
    my_scanf("%s",s);
    a=strlen(s);
    if(n==3)
    {for(i=0;i<a-2;i++)
    {
                      for(j=0;j<a-2;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2])
                      d[i]++;
                                      }
                    
                    }
    b=0;
    for(i=0;i<a-2;i++)
    {
                      if(b<d[i])
                      b=d[i];
                      }
                      if(b==1)
                      my_printf("NO");
                      else
                      {
                      my_printf("%d\n",b);
        for(i=0;i<a-2;i++)
    {
        if(d[i]==b)
        {
                   my_printf("%c%c%c\n",s[i],s[i+1],s[i+2]);
                    for(j=0;j<a-2;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2])
                      d[j]=0;
                                      }
                   }
        }}
     }
     if(n==2)
       {for(i=0;i<a-1;i++)
    {
                      for(j=0;j<a-1;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1])
                      d[i]++;
                                      }
                    
                    }
    b=0;
    for(i=0;i<a-1;i++)
    {
                      if(b<d[i])
                      b=d[i];
                      }
                        if(b==1)
                      my_printf("NO");
                      else
                      {
                      my_printf("%d\n",b);
        for(i=0;i<a-1;i++)
    {
        if(d[i]==b)
        {
                   my_printf("%c%c\n",s[i],s[i+1]);
                    for(j=0;j<a-1;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1])
                      d[j]=0;
                                      }
                   }
        }}
     }
         if(n==4)
    {for(i=0;i<a-3;i++)
    {
                      for(j=0;j<a-3;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2]&&s[j+3]==s[i+3])
                      d[i]++;
                                      }
                    
                    }
    b=0;
    for(i=0;i<a-3;i++)
    {
                      if(b<d[i])
                      b=d[i];
                      }
                        if(b==1)
                      my_printf("NO");
                      else
                      {
                      my_printf("%d\n",b);
        for(i=0;i<a-3;i++)
    {
        if(d[i]==b)
        {
                   my_printf("%c%c%c%c\n",s[i],s[i+1],s[i+2],s[i+3]);
                    for(j=0;j<a-3;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2]&&s[j+3]==s[i+3])
                      d[j]=0;
                                      }
                   }
        }}
     }
   
    
}
