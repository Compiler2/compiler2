#define NUM_ITER 31734

#include <header.h>

int main_bench()
{
    int n,l,t=0,c[500]={0},max=0,z=0;
    char a[1000],b[500][6];
    my_scanf("%d",&n);
    my_scanf("%s",a);
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
    for(int j=i;j-i<n;j++)
    {
            b[i][j-i]=a[j];
    }
    }
    for(int i=0;i<l;i++)
    {
    for(int j=0;j+i<l;j++)
    {
            for(int k=0;k<n;k++)
            {
            if(b[i][k]==b[i+j][k]) t++;
            if(t==n) c[i]++;
            }
			t=0;
    } 
    }
    for(int i=0;i<l;i++) if(c[i]>max) max=c[i];
    if(max==0||max==1) 
	{
		my_printf("NO");
		goto end;
	}
	else my_printf("%d\n",max);
        for(int i=0;i<l;i++)
    {
            if(max==c[i])
            for(int j=0;j<n;j++)
            {
            my_printf("%c",b[i][j]);
            }
            my_printf("\n");
    }
end:    return 0;
}
    