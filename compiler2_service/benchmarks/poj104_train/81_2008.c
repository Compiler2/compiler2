#define NUM_ITER 232125

#include <header.h>

int a[5][5],b[5][5],m,n,c[5];   
int *p=a;
int zhuanhuan(int p,int m, int n)
{
    int z,i;
    if(n<=4&&n>=0&&m<=4&&m>=0)
    {
       z=1;
        for (i=0;i<5;i++)
        {
            *(c+i)=*(a[m]+i);           
            *(a[m]+i)=*(a[n]+i);
            *(a[n]+i)=*(c+i);
        }
        
    }
    else 
    {
        z=0;
    }
    return(z);
}
int main_bench()
{
     int i,j,fanhui;
     for (i=0;i<5;i++)
     {
         for (j=0;j<5;j++)
         {
             my_scanf("%d",&*(a[i]+j));
         }
     }     
     my_scanf("%d",&m);
     my_scanf("%d",&n);
     fanhui=zhuanhuan(a,m,n);          
     if (fanhui==0)
     {
         my_printf("error");
     }
     if (fanhui==1)
     {
         for(i=0;i<5;i++)
         {
             for (j=0;j<5;j++)
             {
                 if(j==4) my_printf("%d\n",*(a[i]+j));
                 else my_printf("%d ",*(a[i]+j));
             }
         } 
     }
}