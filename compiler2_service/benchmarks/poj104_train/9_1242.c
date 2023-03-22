#define NUM_ITER 1542

#include <header.h>

int main_bench(){
	int n,i,j,mid;
	char M[11];
	my_scanf("%d",&n);
	struct patient{
		char ID[11];
		int age;
	};
	struct patient *per=(struct patient*)malloc(sizeof(struct patient)*n);
	for(i=0;i<n;i++)
		my_scanf("%s%d",per[i].ID,&per[i].age);
	for(j=0;j<n;j++)
		for(i=0;i<n-1;i++){
			if(per[i].age<60&&per[i+1].age>=60){
				mid=per[i].age;
				strcpy(M,per[i].ID);
				per[i].age=per[i+1].age;
				strcpy(per[i].ID,per[i+1].ID);
				per[i+1].age=mid;
				strcpy(per[i+1].ID,M);
				}
			if(per[i].age>=60&&per[i+1].age>=60&&per[i].age<per[i+1].age){
				mid=per[i].age;
				strcpy(M,per[i].ID);
				per[i].age=per[i+1].age;
				strcpy(per[i].ID,per[i+1].ID);
				per[i+1].age=mid;
				strcpy(per[i+1].ID,M);
				}
	}
	for(i=0;i<n;i++)
		my_printf("%s\n",per[i].ID);
	free(per); 
}