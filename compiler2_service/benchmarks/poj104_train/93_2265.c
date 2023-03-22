#include <header.h>

int main_bench()
{
    int n,i,a[3]={0,0,0},flag=0;
    my_scanf("%d",&n);
    for(i=0;i<3;i++)if(n%(3+2*i)==0){a[i]=1;flag=1;}
    if(flag==0)my_printf("n\n");
    else for(i=0;i<3;i++)if(a[i]==1){my_printf("%d",3+2*i);break;}
    for(i+=1;i<3;i++)if(a[i]==1)my_printf(" %d",3+2*i);
    my_printf("\n");
    return 0;
}