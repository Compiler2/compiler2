#define NUM_ITER 9355

#include <header.h>


struct student
{
	char num[10];
    int age;
}stu[100];

int main_bench()
{
	char c;
    int n,i,j;    
    struct student*pstu=stu,e;
    pstu=&stu[0];

	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%s %d",stu[i].num,&stu[i].age);

    }
    for(j=0;j<n;j++){if(stu[j].age>=60){
                     for(i=j;i>0;i--){
                                        if(stu[i].age>stu[i-1].age){
                                                                  e=*(pstu+i);
                                                                  *(pstu+i)=*(pstu+i-1);
                                                                  *(pstu-1+i)=e;}
                                        }
                     }}
    for(i=0;i<n;i++){
                     my_printf("%s\n",(pstu+i)->num);}
return 0;
   

}

