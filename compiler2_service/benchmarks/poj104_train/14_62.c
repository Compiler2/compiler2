#define NUM_ITER 22449

#include <header.h>



typedef struct
{
	int ID;
	int chinese;
	int math;
	int sum;
}Student;

Student topThree[3];
int studentNum;

void initialise()
{
	for(int i = 0; i < 3; i ++)
	{
		topThree[i].sum = -1;
	}
}

void updateTopThree(Student stu)
{
	for(int i = 0; i < 3; i ++)
	{
		if(stu.sum > topThree[i].sum)
		{
			for(int j = 2; j > i; j --)
			{
				topThree[j] = topThree[j-1];
			}

			topThree[i] = stu;
			
			break;
		}
	}
}

void getStudentData()
{
	Student temp;

	my_scanf("%d", &studentNum);
	for(int i = 0; i < studentNum; i ++)
	{
		my_scanf("%d %d %d", &temp.ID, &temp.chinese, &temp.math);
		temp.sum = temp.chinese + temp.math;
		updateTopThree(temp);
	}
}

void printStudentData()
{
	for(int i = 0; i < 3 && i < studentNum; i ++)
	{
		my_printf("%d %d\n", topThree[i].ID, topThree[i].sum);
	}
}

int main_bench()
{
	initialise();
	getStudentData();
	printStudentData();

	return 0;
}

