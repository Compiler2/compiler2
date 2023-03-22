#define NUM_ITER 3656

#include <header.h>

 int main_bench(){
     int n;
     my_scanf("%d",&n);
     int i;
     struct qj{
       int a,b;       
     }*qjs,e;
     qjs=(struct qj*)malloc(sizeof(struct qj)*n);
     for(i=0;i<n;i++){
       my_scanf("%d%d",&qjs[i].a,&qjs[i].b);
     }
     int k,t;
     for(k=1;k<=n;k++){
       for(i=0;i<n-k;i++){
         if(qjs[i].a>qjs[i+1].a){
           e=qjs[i];
           qjs[i]=qjs[i+1];
           qjs[i+1]=e;
         }
         if(qjs[i].b>qjs[i+1].b){
           t=qjs[i].b;
           qjs[i].b=qjs[i+1].b;
           qjs[i+1].b=t;
         }                   
       }                 
     }

     int c=0;
     for(i=0;i<n-1;i++){
       if(qjs[i].b<qjs[i+1].a){
         c++;                        
       }                 
     }
     if(c==0){
       my_printf("%d %d",qjs[0].a,qjs[n-1].b);         
     }
     else{
       my_printf("no");     
     }
     free(qjs);
 return 0;
}

