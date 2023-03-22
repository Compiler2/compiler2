#define NUM_ITER 11837

#include <header.h>

   struct student
   {
      int n;
      int y;
      int s;
   };
int cmp(const void *a,const void *b)
{
return(((struct student *)b)->y > ((struct student *)a)->y?1:-1);
}

main_bench()
{    
    int num;
    my_scanf("%d",&num);
    struct student s[100000];
    for(int i=0;i<num;i++)
    {
            my_scanf("%d %d %d",&s[i].n,&s[i].y,&s[i].s);
            s[i].y=s[i].y+s[i].s;        
    }
    qsort(s,num,sizeof(s[0]),cmp);
    for(int i=0;i<3;i++)
     my_printf("%d %d\n",s[i].n,s[i].y);      
} 