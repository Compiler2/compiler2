#define NUM_ITER 1160041

#include <header.h>


int comp(const void*a,const void*b)
{
    return (int*)a-(int*)b;
}
int main_bench()
{
    int result[301],i=1,j;
    my_scanf("%d",&result[0]);
    while(my_scanf(",%d",&result[i++])==1);
    
    qsort(result,i,sizeof(result[0]),comp);
    if(find2nd(i-1,result)==-1)
    my_printf("No");
    else
    my_printf("%d",find2nd(i-1,result));

    return 0;
}
int find2nd(int num,int result[])
{
    int k,second=-1,max = result[0];
    if(num==1)return -1;
    for(k=0; k<num; k++)
    {
        if(result[k]>max)
        {
            second=max;
            max=result[k];
        }
        else if((result[k]>second)&&(result[k]<max))
            second=result[k];
    }
    
    if(second==max)return -1;
    else return second;
}
