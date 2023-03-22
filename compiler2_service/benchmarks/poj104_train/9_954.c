#include <header.h>

main_bench()
{
    struct p
    {char num[100];
     int age;
    } p[101];
    int n,i,j,k,m=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++) my_scanf("%s %d",&p[i].num,&p[i].age);
    struct q
    {char num[100];
     int age;
    } q[101];
    for(i=1,j=1;i<=n;i++) {if(p[i].age>=60) {strcpy(q[j].num,p[i].num);q[j].age=p[i].age;j++;m=m+1;}}
    for(j=1;j<=m;j++)
    {
                     for(i=1;i<=m-1;i++)
                     {
                                        if(q[i].age<q[i+1].age)
                                        {
                                                               q[101]=q[i];
                                                               q[i]=q[i+1];
                                                               q[i+1]=q[101];
                                        }
                     }
    }
    my_printf("%s",q[1].num);
    for(i=2;i<=m;i++) my_printf("\n%s",q[i].num);
    for(i=1;i<=n;i++) if(p[i].age<60) my_printf("\n%s",p[i].num);
}
