#include <header.h>

int count(int a,int b);
int main_bench()
{
    int A[201],B[201];
    int a,b,i,n;
    a=b=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)my_scanf("%d %d",&A[i],&B[i]);
    for(i=0;i<n;i++)
    {
                    if(count(A[i],B[i])==1)a++;
                    else if(count(A[i],B[i])==0)b++;
                    else ;
    }  
    if(a>b)my_printf("A");
    else if(a<b)my_printf("B");
    else   my_printf("Tie");          
    return 0;
}

int count(int a,int b)
{
    if(a==0&&b==1)return 1;
    else if(a==1&&b==2)return 1;
    else if(a==2&&b==0)return 1;
    else if(a==b) return 2;
    else return 0;
}