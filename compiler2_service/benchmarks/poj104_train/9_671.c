#define NUM_ITER 6624

#include <header.h>


struct p
{
       char id[11];
       int age;
};

int main_bench()
{
    void sort(int n,struct p a[101]);
    int n,i;
    struct p a[101];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    my_scanf("%s %d",&a[i].id,&a[i].age);
    }
    sort(n,a);
    
    return 0;
}

void sort(int n,struct p a[101])
{
     int i,k=0;
     for(i=0;i<n;i++)
     {
                     if((a[i].age)>k)
                     k=(a[i].age);
     }
     for(;k>59;k--)
     {
                   for(i=0;i<n;i++)
                   {
                                   if((a[i].age)==k)
                                   {
                                                    my_printf("%s\n",a[i].id);
                                                    (a[i].age)=0;
                                   }
                   }
     }
     for(i=0;i<n;i++)
     {
                     if((a[i].age)!=0)
                     {
                                      my_printf("%s\n",a[i].id);
                     }
     }
}