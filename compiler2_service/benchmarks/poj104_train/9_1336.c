#define NUM_ITER 13684

#include <header.h>


int main_bench(){
	int n,i;
	my_scanf("%d",&n);
	struct{
		char id[10];
		int age;
	}br [100],*p,old[100],*q;
	for(p=br;p<br+n;p++){
		my_scanf("%s%d",&(p->id),&(p->age));
	}
	q=old;
	int js=0;
	for(p=br;p<br+n;p++){
		if(p->age>=60){
			q->age=p->age;
			strcpy(q->id,p->id);
			q++;
			js++;
			p->age=0;
		}
	}
	int  max=0;
	for(i=0;i<js;i++){
		for(q=old;q<old+js;q++){
			if(q->age>(old+max)->age){
				max=q-old;
			}
		}
		my_printf("%s\n",(old+max)->id);
		(old+max)->age=0;
	}
	for(p=br;p<br+n;p++){
		if(p->age!=0){
			my_printf("%s\n",p->id);
		}
	}
	return 0;
}