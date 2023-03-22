#define NUM_ITER 14633

#include <header.h>

int main_bench()
{
    struct patients
    {
       char id[10];
       int age;
       }temp;
    struct patients patient[100];
    struct patients old[100];
    int i,j,n,first;
    my_scanf("%d",&n);
    first=0;
    for (i=0;i<n;i++){
        my_scanf("%s",patient[i].id);
        my_scanf ("%d",&patient[i].age);
        if (patient[i].age>=60){
            old[first]=patient[i];
            first=first+1;
            }
        }
    for (i=0;i<first;i++){
        for (j=0;j<first-i-1;j++){
            if (old[j].age<old[j+1].age){
                temp=old[j];
                old[j]=old[j+1];
                old[j+1]=temp;
                }
            }
        }
    for (i=0;i<first;i++){
        my_printf("%s\n",old[i].id);
        }
    for (i=0;i<n;i++){
        if (patient[i].age<60){
            my_printf("%s\n",patient[i].id);
            }
        }
    return 0;
    }
