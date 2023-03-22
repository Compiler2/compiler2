#include <header.h>


int i,n,a[1000],max,min;
float aver;

int main_bench(){
    
    my_scanf("%d",&n);
    my_scanf("%d",&a[0]);
    min=a[0];max=a[0];aver=a[0];
    for(i=1;i<n;i++){
        my_scanf("%d",&a[i]);
        aver+=a[i];
        if(a[i]>max)  max=a[i];
        if(a[i]<min)  min=a[i];
    }
    aver/=n;
    
    if(max+min-aver*2==0)  my_printf("%d,%d\n",min,max);
    if(max+min-aver*2<0)  my_printf("%d\n",min);
    if(max+min-aver*2>0)  my_printf("%d\n",max);

my_scanf("%d",&i);
return 0;
}
