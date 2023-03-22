#include <header.h>


 
int main_bench()
{
    double a[200],b[200],c[200];
    int d[200];
    double m,n,sum=3.500;
    int k,i,j;
    my_scanf("%d\n",&k);
    for(j=0;j<k;j++){
        my_scanf("%d\n",&(d[j]));
        if(d[j]==1){
           my_printf("2.000\n");
        }
       else if(d[j]==2){
           my_printf("3.500\n");
        }
        else{
        for(i=3;i<=d[j];i++){
        a[1]=1.0;
        a[2]=2.0;
        a[i]=a[i-1]+a[i-2];
        b[1]=2.0;
        b[2]=3.0;
        b[i]=b[i-1]+b[i-2];
        c[i]=b[i]/a[i];
        
        sum+=c[i];
        
        }
  
        my_printf("%.3lf\n",sum);
        sum=3.500;
     }
    }
     return 0;
}

 
