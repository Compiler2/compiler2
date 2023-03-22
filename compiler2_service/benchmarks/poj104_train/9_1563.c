#include <header.h>

struct pa
{
	char num[10];
	int age;
}p[105],t,a[105];
int main_bench()
{
	int i,k,n,c,d;
	my_scanf("%d",&n);
	k=0;
	for(i=0;i+k<n;)
	{
		my_scanf("%s%d",p[i].num,&p[i].age);
		if(p[i].age>=60) {a[k]=p[i];k++;}
		else i++;
	}
	for(c=0;c<k-1;c++)
	{
		for(d=0;d<k-1;d++)
		{
			if(a[d].age<a[d+1].age){t=a[d];a[d]=a[d+1];a[d+1]=t;}
			
		}
	}

	if(k>=0){k--;
	for(c=0;c<=k;c++) my_printf("%s\n",a[c].num);}
if(i>=0){i--;
	for(d=0;d<=i;d++) my_printf("%s\n",p[d].num);}
	return 0;
}
