#include <header.h>

struct score
{
	char name[20];
	int score1;
	int score2;
	char ganbu;
	char xibu;
	int lunwen;	
}student[100];
int main_bench()
{
	int i,num,money,max=0,s=0;
	my_scanf("%d",&num);
	for(i=0;i<num;i++){
		my_scanf("%s%d%d",student[i].name,&student[i].score1,&student[i].score2);
		getchar();
		my_scanf("%c",&student[i].ganbu);
		getchar();
		my_scanf("%c%d",&student[i].xibu,&student[i].lunwen);
	}
	for(i=0;i<num;i++){
		money=0;
		if(student[i].score1>80&&student[i].lunwen>0)money+=8000;
		if(student[i].score1>85&&student[i].score2>80)money+=4000;
		if(student[i].score1>90)money+=2000;
		if(student[i].score1>85&&student[i].xibu=='Y')money+=1000;
		if(student[i].score2>80&&student[i].ganbu=='Y')money+=850;
		if(money>max)	max=money;	
		s+=money;
	}
	for(i=0;i<num;i++){
		money=0;
		if(student[i].score1>80&&student[i].lunwen>0)money+=8000;
		if(student[i].score1>85&&student[i].score2>80)money+=4000;
		if(student[i].score1>90)money+=2000;
		if(student[i].score1>85&&student[i].xibu=='Y')money+=1000;
		if(student[i].score2>80&&student[i].ganbu=='Y')money+=850;
		if(money==max){
			my_printf("%s\n%d\n",student[i].name,max);
			break;
		}
	}
	my_printf("%d",s);
	return 0;
}

