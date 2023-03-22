#define NUM_ITER 1424

#include <header.h>

int main_bench()
{
    int n,m;
    int i,j;
    int a[201];
    a[0]=0;
    int b[201];
    int sum,c,d;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
		            sum=0;
                    my_scanf("%d",&m);
                    if(m==0){b[i]=60;}
                    if(m!=0)
					{
						for(j=1;j<=m;j++)
						{
                                         my_scanf("%d",&a[j]);
                        }
                        for(j=1;j<=m;j++)
						{
							c=a[j];
							d=a[j-1];
							sum=a[j]+3*j-3;
							if(sum<60)continue;
							else break;
						}
						if(sum<=60&&sum>=57)b[i]=c;
						else if(sum<57)b[i]=57-sum+c;
						else if(sum>60&&sum-(c-d)<=63&&sum-(c-d)>=60)b[i]=d;
						else if(sum>60&&(sum-(c-d))<60)b[i]=c-sum+60;
					}
	}
	for(i=0;i<n;i++){my_printf("%d\n",b[i]);}
	return 0;
}
