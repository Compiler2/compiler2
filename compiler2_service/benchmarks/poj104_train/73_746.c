#define NUM_ITER 185127

#include <header.h>


int main_bench()
{
    int n,i,j,k=0;
    int a[5][3]={0};
    int s[5][5]={0};
    int r[5]={0};
    int c[5]={0};
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {my_scanf("%d",&s[i][j]);
    if(s[i][j]>r[i]) r[i]=s[i][j];
    if(s[i][j]<c[j]||c[j]==0) c[j]=s[i][j];
    }
    }
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    if(s[i][j]==r[i]&&s[i][j]==c[j])
    {
        a[k][0]=i+1;
        a[k][1]=j+1;
        a[k][2]=s[i][j];
    }
    }
	k=0;
    
	if(a[k][0]==0) my_printf("not found");
	else
    my_printf("%d %d %d",a[k][0],a[k][1],a[k][2]);
	return 0;
}
