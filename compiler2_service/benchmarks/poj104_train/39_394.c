#define NUM_ITER 8949

#include <header.h>

struct stu
{char name[24];
 int score;
 int ass;
 char pos;
 char west;
 int paper;
 int fel;
};
int f(struct stu*q)
{int z=0;
 if( q->score>80 && q->paper>0 ) z=z+8000;
 if( q->score>85 && q->ass>80 ) z=z+4000;
 if( q->score>90) z=z+2000;
 if( q->score>85 && q->west=='Y' ) z=z+1000;
 if( q->ass>80 && q->pos=='Y' ) z=z+850;
 return(z);
}
int main_bench()
{struct stu* p;
 int n,i,m=0,t=0;
 my_scanf("%d",&n);
 p=(struct stu*)malloc(n*sizeof(struct stu));
 for(i=0;i<n;i++)
 {my_scanf("%s %d %d %c %c %d",(p+i)->name,&(p+i)->score,&(p+i)->ass,&(p+i)->pos,&(p+i)->west,&(p+i)->paper);
  (p+i)->fel=f(p+i);
   t=t+(p+i)->fel;
  }
 for(i=1;i<n;i++)
  if( (p+i)->fel > (p+m)->fel ) m=i;
 my_printf("%s\n%d\n%d",(p+m)->name,(p+m)->fel,t);
}
 
 

