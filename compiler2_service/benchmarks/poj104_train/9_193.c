#define NUM_ITER 12457

#include <header.h>



typedef struct
{
    char ID[10];
    int age;
}patient;

patient pat[100];

int cmp(const void*, const void*);

int main_bench()
{
    int n;
    int i;
    my_scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        my_scanf("%s",pat[i].ID);
        my_scanf("%d",&pat[i].age);
    }

    qsort(pat,n,sizeof(patient),cmp);

    for (i=0;i<n;i++)
    {
        my_printf("%s\n",pat[i].ID);
    }
    return 0;
}

int cmp(const void *_p1, const void *_p2)
{
    patient *p1 = (patient*)_p1;
    patient *p2 = (patient*)_p2;
    if (p1->age>=60 && p1->age<60)
        return -1;
    else if (p1->age<60 && p2->age >= 60)
        return 1;
    else if (p1->age>=60 && p2->age >= 60)
        return p2->age - p1->age;
    else
        return 0;
}