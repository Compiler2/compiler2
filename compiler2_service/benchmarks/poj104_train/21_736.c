#define NUM_ITER 4547

#include <header.h>

int main_bench()
{struct student
{
	double a;
	double b;
};
struct student stu[300];
struct student temp;
int n,i,j,t=1;
double s=0.0;
double max=0.0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%lf",&stu[i].a);
	s+=stu[i].a;
}
s=s/n;
for(i=0;i<n;i++){
	stu[i].b=stu[i].a-s;
	if(stu[i].b<0)
		stu[i].b=-stu[i].b;
}
for(j=1;j<n;j++){
	for(i=0;i<n-j;i++){
		if(stu[i].a>stu[i+1].a){
			temp=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=temp;
		}
	}
}
for(i=0;i<n;i++)
if(stu[i].b>max)
max=stu[i].b;
for(i=0;i<n;i++){
	if(stu[i].b==max){
		if(t==1){
		my_printf("%.0lf",stu[i].a);
		t=2;
		}
		else 
			my_printf(",%.0lf",stu[i].a);
	}
}
	return 0;
}
