#define NUM_ITER 21551

#include <header.h>

struct student
{
       int ID;
       int Chinese;
       int Math;
       int Score;
};
main_bench()
{
      int n,i,first=0,ifirst,second=0,isecond,third=0,ithird;
      my_scanf("%d",&n);
      struct student STUDENT_NUM[n];
      for(i=0;i<n;i++)
      {
                      my_scanf("%d %d %d",&STUDENT_NUM[i].ID,&STUDENT_NUM[i].Chinese,&STUDENT_NUM[i].Math);
                      STUDENT_NUM[i].Score=STUDENT_NUM[i].Chinese+STUDENT_NUM[i].Math; 
      }
      for(i=0;i<n;i++)
      {
                      if(first<STUDENT_NUM[i].Score)
       {
                                     first=STUDENT_NUM[i].Score;
                                     ifirst=i;
       }
      }
      for(i=0;i<n;i++)
      {
                      if(second<STUDENT_NUM[i].Score&&STUDENT_NUM[i].Score<=first&&i!=ifirst)
                      {
                                     second=STUDENT_NUM[i].Score;
                                     isecond=i;
                      }
      }
      for(i=0;i<n;i++)
      {
                      if(third<STUDENT_NUM[i].Score&&STUDENT_NUM[i].Score<=second&&i!=ifirst&&i!=isecond)
                      {
                                     third=STUDENT_NUM[i].Score;
                                     ithird=i;
                      }
      }
      my_printf("%d %d\n",STUDENT_NUM[ifirst].ID,first);
      my_printf("%d %d\n",STUDENT_NUM[isecond].ID,second);
      my_printf("%d %d\n",STUDENT_NUM[ithird].ID,third);
      
      
      
}