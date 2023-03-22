#include <header.h>

int main_bench()
{
     void usd(char x[100]);
     char a[100],b[100],c[100]={'\0'};
     int i,j,k,p,n;
     my_scanf("%d",&n);
     for (p=0;p<n;p++)
     {
     my_scanf("%s",a);
     my_scanf("%s",b);
     usd(a);
     usd(b);
     k=0;
     for (i=0;b[i]!='\0';i++)
     {
         if (a[i]>=b[i]) c[i]=a[i]-b[i]+48;
         else 
         {
              c[i]=a[i]+58-b[i];
              a[i+1]=a[i+1]-1;
              }   
         k++;
              }
     for (j=k;a[j]!='\0';j++) c[j]=a[j];
     c[j]='\0';
     usd(c);
     my_printf("%s\n",c);
     }
}
void usd(char x[100])
{
     int r,h,i;
     char w;
     r=strlen(x);
     h=r/2;
     for (i=0;i<h;i++) 
     {
         w=x[i];x[i]=x[r-1-i];x[r-1-i]=w;
         }
     }
     
     
       
     
     
