#define NUM_ITER 3205

#include <header.h>

void scan_(int m,int*a,int n,int*b);
void sort_(int m,int*a,int n,int*b);
void print_(int m,int*a,int n,int*b);

int main_bench()
{
int m,n,*a,*b;
my_scanf("%d %d",&m,&n);   
a=(int*)malloc(m*sizeof(int));
b=(int*)malloc(n*sizeof(int)); 
scan_(m,a,n,b);
sort_(m,a,n,b);
print_(m,a,n,b);
return 0;    
}

void scan_(int m,int*a,int n,int*b)
{
    int i,j,*p;      
   
    p=a;
    for(i=0;i<m;i++) 
    my_scanf("%d",p++);
    p=b;
    for(j=0;j<n;j++)
    my_scanf("%d",p++);
    
}


void sort_(int m,int*a,int n,int*b)
{
  int i,j,t,*q;
  for(i=0;i<m-1;i++) 
  {
      q=a;   
      for(j=0;j<m-1-i;j++)  
      { 
        if(*q>*(q+1))  {t=*q;*q=*(q+1);*(q+1)=t;}
        q++;
       }
   }    
  
  for(i=0;i<n-1;i++) 
  {
        q=b;   
        for(j=0;j<n-1-i;j++)  
      { 
        if(*q>*(q+1))  {t=*q;*q=*(q+1);*(q+1)=t;}
        q++;
      }
  }      
} 

void print_(int m,int*a,int n,int*b)
{
int i,*p;
my_printf("%d",*a);
p=a+1;
for(i=1;i<m;i++,p++)    
my_printf(" %d",*p);
p=b;    
for(i=0;i<n;i++,p++)
my_printf(" %d",*p);
my_printf("\n");    
}
