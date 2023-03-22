#include <header.h>

int main_bench()
{
    int n,m,i,j,sum,temp,k,f,d,e; 
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    sum=0;
                    temp=0;
                    f=0;
                    d=0;
                    e=0;
                    my_scanf("%d",&m);
                    for(j=0;j<m;j++)
                    {
                                    my_scanf("%d",&k);
                                    if((k+d*3+1)<59)
                                    {
                                                    d++;
                                    }
                                    if((k+d*3+1)==59)
                                    {
                                                     temp++;                
                                    }
                                    if((k+d*3+1)==60)
                                    {
                                                     f++;
                                    }
                                    if((k+d*3+1)>60)
                                    {
                                                    e++;
                                    }
                    }
                    sum=60-(3*m)+temp+(2*f)+3*e;
                    my_printf("%d\n",sum);
    }
    return 0;
}