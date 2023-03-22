#include <header.h>

int main_bench()
{
    int n,i,j;
    char an[1000][1000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       my_scanf("%s",&an[i]);
        for(j=0;an[i][j]!=0;j++)
        {
            if(an[i][j]=='A')
			   my_printf("T");
		   else if(an[i][j]=='T')
			   my_printf("A");
		   else if(an[i][j]=='C')
			   my_printf("G");
		   else if(an[i][j]=='G')
			   my_printf("C");
        }
        my_printf("\n");
    }
    return 0;
}
