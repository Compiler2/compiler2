#include <header.h>


int shuzu1[100],shuzu2[100];
int n1,n2;
void scan()
{
    int i;
    my_scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    my_scanf("%d",&shuzu1[i]);
    for(i=0;i<n2;i++)
    my_scanf("%d",&shuzu2[i]);
}
void paixu(int shuzu[],int n)
{
    int min,i,j,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(shuzu[j]<shuzu[min])
            min=j;
        }
        temp=shuzu[i];
        shuzu[i]=shuzu[min];
        shuzu[min]=temp;
    }
}
void hebing(int shuzu1[],int shuzu2[],int n1,int n2)
{
    int i;
    for(i=0;i<n1;i++)
    my_printf("%d ",shuzu1[i]);
    for(i=0;i<n2-1;i++)
    my_printf("%d ",shuzu2[i]);
    my_printf("%d",shuzu2[i]);
}
int main_bench()
{
    scan();
    paixu(shuzu1,n1);
    paixu(shuzu2,n2);
    hebing(shuzu1,shuzu2,n1,n2);
}
