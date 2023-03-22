#define NUM_ITER 14960

#include <header.h>

int main_bench()
{
    int n,i,y,x=0;
	struct ID {
		int age;
		char a[10];
	}ID[201];
	my_scanf("%d",&n);
    for(i=0;i<n;i++){
		my_scanf("%s",ID[i].a);
		my_scanf("%d",&ID[i].age);
	}
	for(i=0;i<n;i++){
		if(ID[i].age>=60){
			ID[100+x]=ID[i];
			ID[i].a[0]='\0';
            x++;
		}
	}
	for(i=0;i<x-1;i++){
		for(y=0;y<x-1-i;y++){
			if(ID[100+y].age<ID[y+101].age){
				ID[200]=ID[100+y];
				ID[100+y]=ID[y+101];
				ID[y+101]=ID[200];
			}
		}
	}
	for(i=0;i<x;i++){
		my_printf("%s\n",ID[100+i].a);
	}
	for(i=0;i<n;i++){
		if(ID[i].a[0]!='\0')
			my_printf("%s\n",ID[i].a);
	}


	return 0;
}

