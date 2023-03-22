#include <header.h>


struct student{
  int num;
  int chin;
  int math;
  int sum;
};
int main_bench()
{
 int n,i;
 my_scanf("%d",&n);
 struct student *stu;
 stu=(struct student*)malloc(n*sizeof(int)*4);
 for(i=0;i<n;i++){
  my_scanf("%d%d%d",&stu[i].num,&stu[i].chin,&stu[i].math);
  stu[i].sum=stu[i].chin+stu[i].math;
 }
 int j,e1,e2;
 for(j=1;j<4;j++){
  for(i=0;i<n-j;i++){
   if(stu[i].sum>=stu[i+1].sum){
         e1=stu[i+1].sum;
	e2=stu[i+1].num;
         stu[i+1].sum=stu[i].sum;
	stu[i+1].num=stu[i].num;
	stu[i].sum=e1;
         stu[i].num=e2;
   }
  }
 }
 
 my_printf("%d %d\n",stu[n-1].num,stu[n-1].sum);
 my_printf("%d %d\n",stu[n-2].num,stu[n-2].sum);
 my_printf("%d %d\n",stu[n-3].num,stu[n-3].sum);
 free(stu);
 return 0;
}	