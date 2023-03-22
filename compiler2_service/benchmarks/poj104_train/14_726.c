#define NUM_ITER 27580

#include <header.h>


typedef struct {
	int d;
	int score;
} student;

int main_bench()
{
	int n, i, temp1, temp2;
	student a[100002];
	my_scanf("%d", &n);
	for (i = 0; i < n; i++) {
		my_scanf("%d%d%d", &a[i].d, &temp1, &temp2);
		a[i].score = temp1 + temp2;
	}

	student max1, max2, max3;
	max1.d = max2.d = max3.d = -1;
	max1.score = max2.score = max3.score = 0;
	
	for (i = 0; i < n; i++) {
		if (a[i].score > max1.score) {
			max3 = max2;
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i].score > max2.score) {
			max3 = max2;
			max2 = a[i];
		}
		else if (a[i].score > max3.score) {
			max3 = a[i];
		}
	}

	my_printf("%d %d\n", max1.d, max1.score);
	if (max2.d != -1)
		my_printf("%d %d\n", max2.d, max2.score);
	if (max3.d != -1)
		my_printf("%d %d\n", max3.d, max3.score);
	return 0;
} 
