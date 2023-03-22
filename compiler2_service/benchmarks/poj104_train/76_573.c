#define NUM_ITER 5626

#include <header.h>


int a[50010],b[50010];

int _ins(int temp,int j)
{
    if (a[j]>temp) return -1;
    return b[j]>temp?b[j]:temp;
}


int main_bench()
{
    int n,e,f;
    my_scanf("%d",&n);
    for (int i=0;i<=n-1;i++)
        my_scanf("%d %d",&a[i],&b[i]);
    
    for(int k=1;k<n;k++){
        for(int i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i+1];
                a[i+1]=a[i];
                a[i]=e;
                f=b[i+1];
                b[i+1]=b[i];
                b[i]=f;
            }
        }
    }
    
    int temp=b[0];
    
    for (int j=1;j<=n-1;j++)
    {
        if ((temp=_ins(temp,j))==-1)
            break;
    }
    
    if (temp==-1)
        my_printf("no\n");
    else
        my_printf("%d %d\n",a[0],temp);
        
    return 0;
}