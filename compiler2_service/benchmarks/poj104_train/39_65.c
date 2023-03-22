#define NUM_ITER 9910

#include <header.h>

int main_bench()
{int i,n,grade1[100],grade2[100],lunwen[100],money[100]={0},moneyall=0,max=0,p;
char name[100][100],ganbu[100],xibu[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){

my_scanf("%s%d%d%s%s%d",name[i],&grade1[i],&grade2[i],&ganbu[i],&xibu[i],&lunwen[i]);
if(grade1[i]>80&&lunwen[i]>=1)
money[i]=money[i]+8000;
if(grade1[i]>85&&grade2[i]>80)
money[i]=money[i]+4000;
if(grade1[i]>90)
money[i]=money[i]+2000;
if(grade1[i]>85&&xibu[i]=='Y')
money[i]=money[i]+1000;
if(grade2[i]>80&&ganbu[i]=='Y')
money[i]=money[i]+850;}

for(i=0;i<n;i++)
{if(money[i]>max){
max=money[i];
p=i;
}
moneyall=moneyall+money[i];}
my_printf("%s",name[p]);
my_printf("\n");
my_printf("%d",max);
my_printf("\n");
my_printf("%d",moneyall);
return 0;
}


