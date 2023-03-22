#include <header.h>

int main_bench()
{
struct student
{	char as[10];
	int ag;
};
struct student stu[100];
struct student st[100];
struct student temp;
int n,i,j,k;
my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%s %d",stu[i].as,&stu[i].ag);
j=0;
for(i=0;i<n;i++){
	if(stu[i].ag>59){
		st[j]=stu[i];
		stu[i].ag=0;
		j++;
	}
}
for(k=1;k<j;k++){
	for(i=0;i<j-k;i++){
		if(st[i].ag<st[i+1].ag){
			temp=st[i];
			st[i]=st[i+1];
			st[i+1]=temp;
		}
	}
}
for(i=0;i<j;i++)
my_printf("\n%s",st[i].as);
for(i=0;i<n;i++)
	if(stu[i].ag!=0)
	my_printf("\n%s",stu[i].as);
return 0;
}




