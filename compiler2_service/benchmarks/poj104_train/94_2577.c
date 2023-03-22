#include <header.h>

int main_bench()
{
    int n,s,t,m,j,r,i;
    int a[500],b[500];
    s=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a[i]);
        if(a[i]%2!=0){
            b[s]=a[i];
            s++;
        }
    }
    for(j=1;j<s;j++){
        t=b[j];
        for(r=j-1;r>=0;r--){
            if(t<b[r]){
                b[r+1]=b[r];
                b[r]=t;
            }else{
                b[r+1]=t;
                break;
            }
        }
    }
    for(m=0;m<s-1;m++){
        my_printf("%d,",b[m]);
    }
    my_printf("%d",b[s-1]);
    return 0;
}

