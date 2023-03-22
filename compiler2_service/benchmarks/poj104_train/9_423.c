#define NUM_ITER 4261

#include <header.h>


int main_bench()
{
    struct br
	{
		char id[10];
		int age;
	} *patients,t;
	int n,i,j;
	my_scanf("%d",&n);
	patients=(struct br *)malloc(sizeof(struct br)*n);
	
    for (i=0; i<n; i++) {
        my_scanf("%s%d", patients[i].id, &patients[i].age);
    }
	for (i=0; i<n; i++) {
        for (j=n-1; j>i; j--) {
            if (patients[j].age >= 60 &&
                patients[j].age > patients[j-1].age) {
                t = patients[j];
                patients[j] = patients[j-1];
                patients[j-1] = t;
            }
        }
    }

	for (i=0; i<n; i++) {
        my_printf("%s\n", patients[i].id);
    }

    return 0;
}
