#define NUM_ITER 19735

#include <header.h>

int main_bench() {
	struct stu{
		int xh;
		int yw;
		int sx;
		int zf;
	}data[100000];
	int n,i,max,x,j;
	my_scanf ("%d",&n);
	for(i=0;i<n;i++) {
		my_scanf("%d %d %d",&data[i].xh,&data[i].yw,&data[i].sx);
		data[i].zf=data[i].yw+data[i].sx;
	}
	for(i=0;i<3;i++) {
		max=data[0].zf;
		x=0;
		for(j=1;j<n;j++) {
			if(data[j].zf>max) {
				max=data[j].zf;
				x=j;
			}
		}
		my_printf("%d %d\n",data[x].xh,data[x].zf);
		data[x].zf=0;

	}
}

