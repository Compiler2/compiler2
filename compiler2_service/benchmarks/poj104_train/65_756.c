#define NUM_ITER 23868

#include <header.h>

int main_bench(){
int n,i,j,A=0,B=0,Tie=0;
my_scanf("%d",&n);
int* lun=(int*)malloc(n*2*sizeof(int));
int* result=(int*)malloc(n*sizeof(int));
for(i=0;i<n*2;i++)
my_scanf("%d",lun+i);
for(i=0;i<n;i++)
for(j=0;j<1;j++)
if(*(lun+i*2+j)-*(lun+i*2+j+1)==-1||*(lun+i*2+j)-*(lun+i*2+j+1)==2)
  *(result+i)=1;
else if(*(lun+i*2+j)==*(lun+i*2+j+1)) *(result+i)=0;
else  *(result+i)=-1;
  for(i=0;i<n;i++)
{if(*(result+i)==1)A++;
if(*(result+i)==0)Tie++;
if(*(result+i)==-1)B++;}
if(A>B)my_printf("A");
if(B>A)my_printf("B");
if(A==B)my_printf("Tie");
return 0;
}



   


