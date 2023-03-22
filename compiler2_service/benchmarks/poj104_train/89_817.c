#define NUM_ITER 124582

#include <header.h>

main_bench()
{
   int N,i,A,B;
   int a[1000000],b[1000000];
   my_scanf("%d",&N);                     
   int c[N];
   for(i=0;i<N;i++)
   {c[i]=N;}
   i=0;
   while(my_scanf("%d %d",&A,&B)&&((A*A+B*B)!=0)) 
   {  
      c[A]=0;             
      a[i]=A;
      b[i]=B;             
      i++;}   
   
   for(i;i>0;i--)
   {
    c[b[i-1]]--;           
                  }
    int k=0;
    for(i=0;i<N;i++)
    {
    if(c[i]==1)
    my_printf("%d",i);
     else
     k++;            
        }              
    if(k==N)
    my_printf("NOT FOUND") ;
    
    
    getchar();      
    getchar();      
    getchar(); 
    getchar(); 
    getchar();      
    getchar();      
    getchar();
    getchar();      
    getchar(); 
    getchar(); 
    getchar();           
   }
