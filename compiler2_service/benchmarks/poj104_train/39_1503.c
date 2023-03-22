#define NUM_ITER 10058

#include <header.h>

int main_bench()
{
 int N;
 my_scanf("%d",&N);
 struct std
 {
  char name[21];
  int pin;
  int yi;
  char gan;
  char west;
  int n;
 }std[100];
 int i;
 for(i=0;i<N;i++)
 {
  my_scanf("%s %d %d %c %c %d",std[i].name,&std[i].pin,&std[i].yi,&std[i].gan,&std[i].west,&std[i].n);
 }
 int sum[100];
 for(i=0;i<N;i++)
  sum[i]=0;
 for(i=0;i<N;i++)
 {
  if(std[i].pin>80&&std[i].n>0)
   sum[i]+=8000;
  if(std[i].pin>85&&std[i].yi>80)
   sum[i]+=4000;
  if(std[i].pin>90)
   sum[i]+=2000;
  if(std[i].pin>85&&std[i].west=='Y')
   sum[i]+=1000;
  if(std[i].yi>80&&std[i].gan=='Y')
   sum[i]+=850;
 }
 int max=sum[0],k=0,he=sum[0];
 for(i=1;i<N;i++)
 {
  he+=sum[i];
  if(max<sum[i])
  {
   max=sum[i];
   k=i;
  }
 }
 my_printf("%s\n",std[k].name);
 my_printf("%d\n",max);
 my_printf("%d\n",he);
 return 0;
}


