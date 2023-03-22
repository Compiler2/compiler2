#define NUM_ITER 10826

#include <header.h>

struct student{
	char name[20];
	int qimo;
	int ping;
	char gan;
	char xi;
	int lun;
}stu[101];

int main_bench()
{	int n,i;
	int jiang[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].ping,&stu[i].gan,&stu[i].xi,&stu[i].lun);
		jiang[i]=0;
	}
	int max=0,zong=0;
	for(i=0;i<n;i++){
		if(stu[i].qimo>80&&stu[i].lun>0)jiang[i]+=8000;
		if(stu[i].qimo>85&&stu[i].ping>80)jiang[i]+=4000;
		if(stu[i].qimo>90)jiang[i]+=2000;
		if(stu[i].qimo>85&&stu[i].xi=='Y')jiang[i]+=1000;
		if(stu[i].ping>80&&stu[i].gan=='Y')jiang[i]+=850;
		if(max<jiang[i])max=jiang[i];
		zong+=jiang[i];
	}
	for(i=0;i<n;i++){
		if(max==jiang[i]){
			my_printf("%s\n%d\n",stu[i].name,jiang[i]);break;

		}
	}
	
my_printf("%d\n",zong);
		
	return 0;
}