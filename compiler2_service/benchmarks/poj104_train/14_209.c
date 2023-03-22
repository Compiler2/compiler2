#include <header.h>

main_bench()
{
      int n,i; 
      struct student
      {
             int num;
             int yuwen;
             int shuxue;
             int zongfen;
      }
      stu[100000];
      struct qiansan
      {
             int num;
             int zongfen;
      }st[3]={{0,0},{0,0},{0,0}};
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          my_scanf("%d",&stu[i].num);
          my_scanf("%d",&stu[i].yuwen);
          my_scanf("%d",&stu[i].shuxue);
          stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
          if(stu[i].zongfen>st[0].zongfen)
          {
              st[2]=st[1];
              st[1]=st[0];
              st[0].zongfen=stu[i].zongfen;
              st[0].num=stu[i].num;
          }
          else if(stu[i].zongfen<=st[0].zongfen&&stu[i].zongfen>st[1].zongfen)
          {
              st[2]=st[1];
              st[1].zongfen=stu[i].zongfen;
              st[1].num=stu[i].num;
          }
          else if(stu[i].zongfen<=st[1].zongfen&&stu[i].zongfen>st[2].zongfen)
          {
              st[2].zongfen=stu[i].zongfen;
              st[2].num=stu[i].num;
          }
      }
      for(i=0;i<3;i++)
      {
          if(i==0)
          my_printf("%d %d",st[i].num,st[i].zongfen);
          else
          my_printf("\n%d %d",st[i].num,st[i].zongfen);
      }
      getchar();
      getchar();
}
