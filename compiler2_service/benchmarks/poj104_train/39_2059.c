#define NUM_ITER 10628

#include <header.h>


int main_bench()
{
	int N,i,g=0,n[100]={0},h,sum=0;
	my_scanf("%d",&N);
	struct student{
		char name[20];
		int x,y;
		char p,q;
		int z;
	}s[100];
	for(i=0;i<N;i++){
		my_scanf("%s %d %d %c %c %d",s[i].name,&s[i].x,&s[i].y,&s[i].p,&s[i].q,&s[i].z);
		if((s[i].x>80)&&(s[i].z>0))
			n[i]+=8000;
		if((s[i].x>85)&&(s[i].y>80))
			n[i]+=4000;
		if(s[i].x>90)
			n[i]+=2000;
		if((s[i].x>85)&&(s[i].q=='Y'))
			n[i]+=1000;
		if((s[i].y>80)&&(s[i].p=='Y'))
			n[i]+=850;
	}
	for(i=0;i<N;i++){
		if(n[i]>g){
			g=n[i];
			h=i;
		}
		sum += n[i];
	}
	my_printf("%s\n",s[h].name);
	my_printf("%d\n",g);
	my_printf("%d",sum);
}