#define NUM_ITER 7869

#include <header.h>

struct student
{char name[30];
int qimo;
int banji;
char gb;
char xb;
int lw;
};
int k=0;
int main_bench()
{
	
int money(struct student a);
int cmp(int a[],int n);
int n,i,b[200]={0},m;
long q=0;
  struct student a[105];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  my_scanf("%s %d %d %c %c %d",a[i].name,&a[i].qimo,&a[i].banji,&a[i].gb,&a[i].xb,&a[i].lw);
	  b[i]=money(a[i]);q=q+b[i];
  }
 m =cmp(b,n);
  my_printf("%s\n",a[k].name);
  my_printf("%d\n",m);
  my_printf("%ld",q);
}




int money(struct student a)
{
	int sum=0;
	if(a.qimo>80 && a.lw>=1)sum=8000;
	if(a.banji>80 && a.qimo>85)sum=sum+4000;
	if(a.qimo>90)sum=sum+2000;
	if(a.qimo>85 && a.xb=='Y')sum=sum+1000;
	if(a.banji>80 && a.gb=='Y')sum=sum+850;
	return sum;
}

int cmp(int a[],int n)
{
	int max=a[0],i;
	for(i=0;i<n-1;i++)
		if(max<a[i+1]){max=a[i+1];k=i+1;}
	return max;
}
	