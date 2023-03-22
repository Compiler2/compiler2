#include <header.h>

int main_bench()
{
    int n,T=0,A=0,B=0;
    int sz[200][2];
    my_scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int a=0;a<2;a++)
        {
            my_scanf("%d",&sz[i][a]);
        }
    }
    for(int b=0;b<n;b++)
    {
                   if((sz[b][0]==0&&sz[b][1]==1)||(sz[b][0]==1&&sz[b][1]==2)||(sz[b][0]==2&&sz[b][1]==0))
			A++;
		if((sz[b][0]==1&&sz[b][1]==0)||(sz[b][0]==2&&sz[b][1]==1)||(sz[b][0]==0&&sz[b][1]==2))
			B++;
    }
    if(A==B)
	my_printf("Tie");
    if(A>B)
	my_printf("A");
    if(A<B)
	my_printf("B");
return 0;
}