#include<stdio.h>
#include<string.h>
void search(int p[][4], int n)
{
	int i, j, flag;
	for (i = 0; i < 5; i++)
	{
		flag = 0;
		for (j = 0; j < 4; j++)
		{
			if (*(*(p + i) + j) < 60)
			{
				flag = 1;
			}
		}
			if (flag == 1)
			{
				for (j = 0; j< 4; j++)
				{
					if (j == 3)
					{
						printf("%d\n", *(*(p + i) + j));
					}
					else
						printf("%d,", *(*(p + i) + j));
				}
			}
	}
}
int main()
{
	int score[5][4] = { {65,57,70,60},{80,90,70,65},{58,60,90,80},{98,90,95,65},{80,90,95,40} };
	search(score,5);
	return 0;
}