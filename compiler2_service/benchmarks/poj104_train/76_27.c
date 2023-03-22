#include <header.h>

int main_bench()
{
	struct qujian
	{
		int a;
		int b;
	}qj[50000],temp;
	int n,i,j,max;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&qj[i].a,&qj[i].b);
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(qj[j].a>qj[j+1].a){
				temp.a=qj[j].a;
				temp.b=qj[j].b;
				qj[j].a=qj[j+1].a;
				qj[j].b=qj[j+1].b;
				qj[j+1].a=temp.a;
				qj[j+1].b=temp.b;
			}
		}
	}
	max=qj[0].b;
	for(i=0;i<n-1;i++){
		if(max<qj[i].b){
			max=qj[i].b;
		}
		if(max<qj[i+1].a){
			my_printf("no");
			break;
		}
	}
	if(i==n-1){
		my_printf("%d %d",qj[0].a,max);
	}
	return 0;
}

