#include<stdio.h>
int main(void)
{
	float h1,h2,h3;
	printf("Enter the first person's height");
        scanf("%f", &h1);
	printf("Enter the second person's height");
	scanf("%f", &h2);
	printf("Enter the third person's height");
	scanf("%f", &h3);

	float avg;
	avg = (h1+h2+h3)/3;
	printf("Average: %.2f\n",avg);

	float total_height,missing_height;
	total_height = avg * 5;

	missing_height = (total_height - (h1+h2+h3)) / 2;

	printf("Missing height of person 4: %2f\n", missing_height);
	printf("Missing height of person 5: %2f\n", missing_height);

	return 0;
}

