#define NUM_ITER 17655

#include <header.h>

int main_bench()
{
	int n,i,a,b,c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a,&b,&c);
		if((a%400==0)||(a%4==0&&a%100!=0))
		{
			if((b==1&&c==4)||(b==1&&c==7)||(b==4&&c==7)||(b==2&&c==8)||(b==9&&c==12)||(b==3&&c==11)
				||(c==1&&b==4)||(c==1&&b==7)||(c==4&&b==7)||(c==2&&b==8)||(c==9&&b==12)||(c==3&&b==11))
				my_printf("YES\n");
			else my_printf("NO\n");
		}
		else
		{
			if((b==2&&c==3)||(b==2&&c==11)||(b==3&&c==11)||(b==1&&c==10)||(b==9&&c==12)||(b==4&&c==7)
				||(c==2&&b==3)||(c==2&&b==11)||(c==3&&b==11)||(c==1&&b==10)||(c==9&&b==12)||(c==4&&b==7))
				my_printf("YES\n");
			else my_printf("NO\n");
		}
	}
	return 0;
}