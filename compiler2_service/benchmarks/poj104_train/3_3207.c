#define NUM_ITER 11056

#include <header.h>

int t[2000];
double s[1000],si;

int main_bench()
{
 int i,j,n,m,s=0;
 my_scanf("%d%d",&m,&n);
 for(i=0;i<m;i++)

        my_scanf("%d",&t[i]);

         
        
        for(i=0;i<m-1;i++)
        for(j=i;j<m;j++)

        if(t[i]+t[j]==n)
        s=1;


        s?my_printf("yes"):my_printf("no");
        return 0;
}

