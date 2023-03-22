#include <header.h>



int main_bench()
{
	struct stu {
		char name[100];
		int score,cscore,p;
		char w,l;
	};
	int n,tot=0,i,j,swap;
	struct stu a[102];
	struct stu aswap;
	int b[102];
	char rr,tt;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++){
		my_scanf("%s",a[i].name);
		my_scanf("%d%d%c%c%c%c%d",&a[i].score,&a[i].cscore,&rr,&a[i].l,&tt,&a[i].w,&a[i].p);
	}
	
	for (i=1;i<=n;i++){
		b[i]=0;
		if ((a[i].score>80)&&(a[i].p>=1)) b[i]=b[i]+8000;
		if ((a[i].score>85)&&(a[i].cscore>80)) b[i]=b[i]+4000;
		if (a[i].score>90) b[i]=b[i]+2000;
		if ((a[i].score>85)&&(a[i].w=='Y')) b[i]=b[i]+1000;
		if ((a[i].cscore>80)&&(a[i].l=='Y')) b[i]=b[i]+850;
		tot=tot+b[i];
	}
	for (i=1;i<=n;i++){
		for (j=i+1;j<=n;j++){
			if (b[i]<b[j]) {
				swap=b[i];b[i]=b[j];b[j]=swap;
				aswap=a[i];a[i]=a[j];a[j]=aswap;
			}
		}
	}
    my_printf("%s\n",a[1].name);
	my_printf("%d\n",b[1]);
	my_printf("%d\n",tot);
	return 0;
}

