#define NUM_ITER 6782

#include <header.h>

struct patience
{
       int shunxu;
       char id[10];
       int age;
       } pa[100];
int main_bench()
{
    int n,i,j,p=60,q=0;
    my_scanf("%d",&n);
    int a[n];
    int b[n],c[n];
    for(i=0;i<n;i++)
	{
                     my_scanf("%s%d",&pa[i].id,&pa[i].age);
                     }
    for(i=0;i<n;i++){
                     if(pa[i].age>=60)
					 {
                                       q++;
                                       }
                     }
    do{
    for(i=0;i<n;i++)
	{
                     if(pa[i].age>=p)
					 {
                                      p=pa[i].age;
                                      }
                     }
    for(i=0;i<n;i++)
	{
                     if(pa[i].age==p){
                                      my_printf("%s\n",pa[i].id);
                                      pa[i].age=0;
                                      }
                     }
    p=60;
    q--;
    }
	while(q>0); 
    for(i=0;i<n;i++)
	{
                     if(pa[i].age<60 && pa[i].age>0){
                                     my_printf("%s\n",pa[i].id);
                                     }
                                     }
    return 0;
}