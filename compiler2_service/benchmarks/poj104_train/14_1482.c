#include <header.h>

struct grade
{
    int No;
	int chinese;
	int math;
	int sum;
}student[100000],s;
int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d %d %d",&student[i].No,&student[i].chinese,&student[i].math);
    student[i].sum=student[i].chinese+student[i].math;
	}
    for(i=0;i<3;i++){
		for(j=i+1;j<n;j++){
			if(student[i].sum<student[j].sum){
			    s=student[i];
				student[i]=student[j];
				student[j]=s;
			} 
		}
	}
	for(i=0;i<3;i++){
	my_printf("%d %d\n",student[i].No,student[i].sum);
	}
    return 0;
}