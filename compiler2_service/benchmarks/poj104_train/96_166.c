#define NUM_ITER 1065473

#include <header.h>

int main_bench()
{
     int m,n,i=0,k,t;
     char a[100]={0},b[100]={0};
     my_scanf("%s",a);
     t=strlen(a);
     
     if(t==1)
     {b[0]='0',n=a[0]-'0';}
     
     else if(t==2&&(a[0]=='1'&&(a[1]=='0'||a[1]=='2'||a[1]=='2')))
     {b[0]='0';  n=(a[0]-'0')*10+a[1]-'0';}
     
     else if(a[0]=='1'&&(a[1]=='0'||a[1]=='1'||a[1]=='2'))
     {
     m=(a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0');
     for(i=0;i<t-2;i++)
        {
        b[i]=m/13+'0';
        n=m%13;
        m=n*10+a[i+3]-'0';
        }i=i-1;
     }   
    
     else 
     {  
        m=(a[0]-'0')*10+a[1]-'0';
        for(i=0;i<t-1;i++)
        {
        b[i]=m/13+'0';
        n=m%13;
        m=n*10+a[i+2]-'0';
        }i=i-1;
     }
     for(k=0;k<=i;k++)
     my_printf("%c",b[k]);
     my_printf("\n");
     my_printf("%d",n);
     getchar();getchar();
}    

