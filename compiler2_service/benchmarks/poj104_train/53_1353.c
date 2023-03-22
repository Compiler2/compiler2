#include <header.h>

int main_bench()
{
    int s[300],b[300],i,n,j,m,k=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%d",&s[i]);
    for(i=0;i<n;i++){
        for(j=0,m=0;j<i;j++){
           if(s[i]==s[j])
              m++;
        }
        if(m==0){
           b[k]=s[i];
           k++;
        }
    }
    for(i=0;i<k-1;i++){
        my_printf("%d,",b[i]);
    }
    my_printf("%d",b[k-1]);
    return 0;
}
