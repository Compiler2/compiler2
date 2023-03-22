#define NUM_ITER 9628

#include <header.h>

struct patient
{	char id[11];
	int age;
};

int main_bench()
{	struct patient pt[100];

	int n,i,j,a=0,b=0,tem;
	int age_r[100],time_range[100];
	char temid[11];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s%d",pt[i].id,&pt[i].age);
		if(pt[i].age>=60){
			age_r[a]=i;
			a++;
		}
		else{
			time_range[b]=i;
			b++;
		}
	}
	for(i=1;i<a-1;i++){
		for(j=0;j<a-i;j++){
			if(pt[age_r[j]].age<pt[age_r[j+1]].age){   
				strcpy(temid,pt[age_r[j]].id);
				strcpy(pt[age_r[j]].id,pt[age_r[j+1]].id);
				strcpy(pt[age_r[j+1]].id,temid);
				tem=pt[age_r[j]].age;
				pt[age_r[j]].age=pt[age_r[j+1]].age;
				pt[age_r[j+1]].age=tem;

			}
		}

	}
	for(i=0;i<a;i++){
		my_printf("%s\n",pt[age_r[i]].id);
	}
	for(i=0;i<b;i++){
		my_printf("%s\n",pt[time_range[i]].id);
	}

	return 0;
}