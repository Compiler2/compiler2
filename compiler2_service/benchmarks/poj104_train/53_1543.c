#define NUM_ITER 16887

#include <header.h>

int main_bench()
{
	static int b[1000];
	int n,i,j,k=0,w,c;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
                     my_scanf("%d",&c);
                     w=0;
                     for(j=0;j<k;j++)
                     {if(c==b[j]) 
                     {w++;
                     break;}}
                     if(w==0)
                     {b[k]=c;
                     k++;}
                     }
                     my_printf("%d",b[0]);
 for(i=1;i<k;i++)
 my_printf(",%d",b[i]);
}
