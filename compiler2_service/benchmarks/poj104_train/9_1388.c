#define NUM_ITER 16361

#include <header.h>

int main_bench()
{
	struct Patient{
		char ID[10];
		int age;
	}patient[100],patient2[100];
	struct Patient t;
	int n,i=0,j=0,k=0,num;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
		my_scanf("%s %d",patient[i].ID,&patient[i].age);
	for(i=0;i<n;i++){
		if(patient[i].age>=60){
			patient2[j]=patient[i];
			j++;}}
	num=j;
	for(i=0;i<n;i++){
		if(patient[i].age<60){
			patient2[j]=patient[i];
			j++;}}
	for(k=1;k<num;k++){
		for(i=0;i<num-k;i++){
			if(patient2[i+1].age>patient2[i].age){
				t=patient2[i+1];
				patient2[i+1]=patient2[i];
				patient2[i]=t;}}}
	for(i=0;i<n;i++)
		my_printf("%s\n",patient2[i].ID);
	return 0;
}