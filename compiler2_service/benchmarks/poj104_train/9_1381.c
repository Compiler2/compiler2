#define NUM_ITER 17158

#include <header.h>

struct patient
{
	char ID[10];
	int age; 
}pat[100];
int main_bench()
{
	struct patient t;
	struct patient num[100];
	int n,i,j,a=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%s%d",pat[i].ID,&pat[i].age);
	for(i=0;i<n;i++)
	{ if(pat[i].age>=60)
	   { num[a-1]=pat[i];
		 a++;}
    }
	for(i=0;i<a-2;i++)
	{ for(j=0;j<a-2-i;j++)
	if(num[j].age<num[j+1].age)
	  { t=num[j];
	    num[j]=num[j+1];
	    num[j+1]=t;}
	}
    for(i=0;i<a-1;i++)
    my_printf("%s\n",num[i].ID);
	for(i=0;i<n;i++)
	{ if(pat[i].age<60)
	  my_printf("%s\n",pat[i].ID);}

  return 0;	
}