#include <header.h>

struct myturn
{
	char ID[10];	int age;
};

int main_bench()
{
	int n,i,j=0,max=0;
	struct myturn patient[100];
	my_scanf("%d",&n);			
	for(i=0;i<n;i++){
		my_scanf("%s%d",&patient[i].ID,&patient[i].age);
		if(patient[i].age>max) max=patient[i].age;			
	}
	if(max>=60){		 
		for(max;max>=60;max--){
			for(i=0;i<n;i++){                    
				if(patient[i].age==max) {
					my_printf("%s\n",patient[i].ID);			
					patient[i].age=0; j++;}	}	}	}
	for(i=0;i<n;i++){		
		if(patient[i].age!=0){ my_printf("%s",patient[i].ID);
		j++;
		if(j<n) my_printf("\n");}
	}
	return 0;
}