#define NUM_ITER 4221

#include <header.h>


struct patient
{
       char name[20];
       int age;
} line[202], temp;

int main_bench()
{
    int n, i, j;
    my_scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        my_scanf("%s", &line[i].name);
        my_scanf("%d", &line[i].age);
    }
    for(i=1;i<=n;i++)
    {
       for (j=n;j>i;j--)
       {
           if(line[j].age>=60){
       if(line[j].age>line[j-1].age)
       {
           temp=line[j];
           line[j]=line[j-1];
           line[j-1]=temp;
       }
       }
       }
    }
    for(i=1;i<=n;i++)
    {
        
            my_printf("%s\n", line[i].name);
        
    }
    return 0;
}