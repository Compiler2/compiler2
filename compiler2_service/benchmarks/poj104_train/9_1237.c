#define NUM_ITER 16678

#include <header.h>


struct patients
{
	int num;
	char ID[10];
	int age;
};

int main_bench()
{
	int n,i,j,y,o;
    struct patients list[100],young[100],old[100];
	my_scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		list[i].num=i;
		my_scanf("%s %d",list[i].ID,&list[i].age);
	}

	y=0;
	o=0;

	for(i=0;i<n;i++)
	{
		if(list[i].age>=60){
			old[o]=list[i];
			o++;
		}else{
			young[y]=list[i];
			y++;
		}
	}

	for(i=1;i<o;i++)
	{
		for(j=0;j<o-i;j++)
		{
			if(old[j].age<old[j+1].age){
				struct patients check;
				check=old[j];
				old[j]=old[j+1];
				old[j+1]=check;
			}
		}
	}

	for(i=0;i<o;i++)
	{
		my_printf("%s\n",old[i].ID);
	}
	for(i=0;i<y;i++)
	{
		my_printf("%s\n",young[i].ID);
	}

	return 0;
}







