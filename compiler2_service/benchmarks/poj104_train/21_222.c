#include <header.h>


int main_bench()
{
    int n,a[300],b[300],i,j,c=0,t;
    float aver=0,d=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++) {my_scanf("%d",&a[i]); aver+=a[i];}
    aver=aver/n;
    
    
    for(i=0;i<n;i++) if((a[i]-aver>0?a[i]-aver:aver-a[i])>d) d=a[i]-aver>0?a[i]-aver:aver-a[i];
    
   
    
    for(i=0;i<n;i++) if((a[i]-aver>0?a[i]-aver:aver-a[i])==d) b[c++]=a[i];
    
    
    for(i=0;i<c;i++)
    for(j=i+1;j<c;j++) if(b[i]>b[j]) {t=b[i]; b[i]=b[j];b[j]=t;}
    
    for(i=0;i<c-1;i++) my_printf("%d,",b[i]); 
    my_printf("%d",b[c-1]);
}
