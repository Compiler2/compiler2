#define NUM_ITER 672

#include <header.h>

int main_bench()
{
	 int a[100][100];
    int n,s,k=0;
    int b[1000];
    b[0]=0;
    my_scanf ("%d",&n);
    
    for (int i=0;i<n;i++)
    { for (int j=0;j<n;j++)
        { my_scanf ("%d",&a[i][j]);
           
              if (a[i][j]==0)
              {  b[k]=b[k]+1;}
        }
        if (b[k]!=0)
           {  k+=1;}
    }
    
    s=(b[0]-2)*(k-2);
    my_printf("%d",s);
	return 0;
}
