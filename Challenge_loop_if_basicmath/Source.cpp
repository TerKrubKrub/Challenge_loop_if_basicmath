#include <stdio.h>
#include <math.h>
int main()
{
	int i, x, y;
	float count = 0, sum=0, sum2=0;
	float SD;
	scanf_s("%d %d", &x, &y);
	if (x > y)
	{
		for (i = x; i >= y; i--)
		{
			printf("%d ", i);
			count++;
			sum += i;
			sum2 += i * i;
		}
		printf("\n");
	}
	else if (y > x)
	{
		for (i = x; i <= y; i++)
		{
			printf("%d ", i);
			count++;
			sum += i;
			sum2 += i * i;
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", x);
		printf("Average = %d.0\n", x);
		printf("SD = 0.00");
		return 0;
	}
	printf("Average = %.1f\n", sum / count);
	SD = sqrt((count * sum2 - sum * sum) / (count * (count - 1)));
	printf("SD = %.2f",SD);
	return 0;
}