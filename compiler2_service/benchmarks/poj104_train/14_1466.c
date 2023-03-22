#define NUM_ITER 5290

#include <header.h>

 struct student
 { int id;
   int a;
   int b;
   int zong;
 }; 
 struct student ren[100000];
 
 int main_bench()
 {int n,i,fen,flag=0,j;
 
  my_scanf("%d\n",&n);
   for(i=0;i<=n-1;i++)
   { my_scanf("%d",&ren[i].id);
    my_scanf("%d",&ren[i].a);
    my_scanf("%d",&ren[i].b);
    ren[i].zong=ren[i].a+ren[i].b;
   }
   
   for(fen=200;fen>=100;fen--)
   { for(i=0;i<=n-1;i++)
      if(fen==ren[i].zong)
      {my_printf("%d %d\n",ren[i].id,ren[i].zong);
       flag=flag+1;
       if(flag==3)goto end;
      
      }
      }
      end:
  getchar();
  
}