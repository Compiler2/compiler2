#define NUM_ITER 21905

#include <header.h>


int main_bench()
{
	int n,i,j,a,zf[100000];
	struct student
	{
		int name;
		int yw;
		int sx;

	}stu[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&stu[i].name,&stu[i].yw,&stu[i].sx);
		zf[i]=stu[i].yw+stu[i].sx;
	}
	for(j=1;j<4;j++){
		for(i=0;i<n-j;i++){
			if(zf[i]>=zf[i+1]){
				a=zf[i];
				zf[i]=zf[i+1];
				zf[i+1]=a;
				a=stu[i].name;
				stu[i].name=stu[i+1].name;
				stu[i+1].name=a;
			}
		}
	}
	for(i=n-1;i>=n-3;i--){
	my_printf("%d %d\n",stu[i].name,zf[i]);
	}
	return 0;
}
