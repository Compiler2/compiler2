#define NUM_ITER 23007

#include <header.h>

int main_bench()
{
	int num,*xuefen,*score,i,txuefen=0;
	float *gpa,total=0,part,GPA;
	my_scanf("%d",&num);
	xuefen=(int*)malloc(sizeof(int)*num);
	score=(int*)malloc(sizeof(int)*num);
    gpa=(float*)malloc(sizeof(float)*num);
    for(i=0;i<num;i++)
		my_scanf("%d",xuefen+i);
	for(i=0;i<num;i++)
		my_scanf("%d",score+i);
	for(i=0;i<num;i++)
	{
		if(score[i]>=90)
			gpa[i]=4.0;
		if(score[i]>=85&&score[i]<=89)
			gpa[i]=3.7;
		if(score[i]>=82&&score[i]<=84)
			gpa[i]=3.3;
		if(score[i]>=78&&score[i]<=81)
			gpa[i]=3.0;
		if(score[i]>=75&&score[i]<=77)
			gpa[i]=2.7;
		if(score[i]>=72&&score[i]<=74)
			gpa[i]=2.3;
		if(score[i]>=68&&score[i]<=71)
			gpa[i]=2.0;
		if(score[i]>=64&&score[i]<=67)
			gpa[i]=1.5;
		if(score[i]>=60&&score[i]<=63)
			gpa[i]=1.0;
		if(score[i]<=59)
			gpa[i]=0;
	}
	for(i=0;i<num;i++)
	{
		part=xuefen[i]*gpa[i];
		total=total+part;
		txuefen=xuefen[i]+txuefen;
	}
	GPA=total/txuefen;
	my_printf("%.2f",GPA);
}