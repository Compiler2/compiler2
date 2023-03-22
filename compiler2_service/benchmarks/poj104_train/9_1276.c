#include <header.h>

struct Student
{
    char id[10];
    int age; 
}ill[100];

int main_bench()
{ 
    int i,j,n,q;
    char p[10];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%s%d",&ill[i].id,&ill[i].age);
    
    for(j=0;j<n-1;j++)
        for(i=n-1;i>j;i--){
            if(ill[i].age>=60&&ill[i].age>ill[i-1].age){
                strcpy(p,ill[i].id);        q=ill[i].age;
                strcpy(ill[i].id,ill[i-1].id);  ill[i].age=ill[i-1].age;
                strcpy(ill[i-1].id,p);      ill[i-1].age=q;    
            }
        }
    for(i=0;i<n;i++)
        my_printf("%s\n",ill[i].id);       
}