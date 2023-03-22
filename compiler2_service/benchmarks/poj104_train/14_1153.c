#include <header.h>

struct grade
{
	char ID[20];
	int math,cn;
};

int main_bench(){
	int n,i,j,max,m;
	int *s;
struct grade stu[100000];
	my_scanf("%d",&n);
	s=(int*)malloc(n*sizeof(int));
	if(n==1){
		my_scanf("%s %d %d",stu[0].ID,&stu[0].math,&stu[0].cn);
		my_printf("%s %d",stu[0].ID,stu[0].math+stu[0].cn);
	}
	else if(n==2){
		my_scanf("%s %d %d",stu[0].ID,&stu[0].math,&stu[0].cn);
		my_scanf("%s %d %d",stu[1].ID,&stu[1].math,&stu[1].cn);
		if(stu[0].math+stu[0].cn>stu[1].math+stu[1].cn){
			my_printf("%s %d\n",stu[0].ID,stu[0].math+stu[0].cn);
			my_printf("%s %d\n",stu[1].ID,stu[1].math+stu[1].cn);
		}else{
			my_printf("%s %d\n",stu[0].ID,stu[0].math+stu[0].cn);
			my_printf("%s %d\n",stu[1].ID,stu[1].math+stu[1].cn);
		}
	}
	else if(n>=2){
		for(i=0;i<n;i++){
			my_scanf("%s %d %d",stu[i].ID,&stu[i].math,&stu[i].cn);
			s[i]=stu[i].math+stu[i].cn;
		}
		for(i=1;i<4;i++){
			max=s[0];
			for(j=1;j<n;j++){
				if(s[j]>max){
					max=s[j];
					m=j;
				}
			}
			my_printf("%s %d\n",stu[m].ID,max);
			s[m]=0;
		}
	}
	return 0;
}