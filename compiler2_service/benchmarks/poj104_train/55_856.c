#define NUM_ITER 476385

#include <header.h>

main_bench()
{
    long int f(int y,int r);
    int a,b,i,j,t=0;
    long int q=0,w=0,p=0;
    char n[800];
    int m[1000];
      my_scanf("%d",&a);
      my_scanf("%s",n);
      my_scanf("%d",&b);
     if(n[0]=='0')
     my_printf("%c",'0');
    else
     {
            p=strlen(n);
           for(i=0;i<p;i++)
           {
               if(n[i]>='A'&&n[i]<='Z') 
                   n[i]=n[i]-'A'+10;
               else if(n[i]>='a'&&n[i]<='z') 
                    n[i]=n[i]-'a'+10;
                    else if(n[i]>='0'&&n[i]<='9')
                    n[i]=n[i]-'0';
           }
           w=0;
           for(i=0;i<p;i++)
          { 
          w=w*a+n[i];
          }
           for(j=0;;j++)
            {
            m[j]=w%b;
            w=w/b;
            if(w<b)
            { m[j+1]=w%b; 
                t=j+1;      
             break; 
             }
             } 
            m[t+1]='\0';
          for(i=t;i>=0;i--)
          {
             if(m[i]>9)
             {
                          m[i]=m[i]+'A'-10;
                        my_printf("%c",m[i]);
             }
               else 
                         my_printf("%c",m[i]+'0');
                  
          }
          }
            
              getchar();
              getchar();
              
              
                  }
                 