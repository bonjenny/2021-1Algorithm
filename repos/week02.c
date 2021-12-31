#include <stdio.h>
void main() {

	/*
	int n1, n2, n3;
	int large;

	printf("세 수를 입력하시오.\n");
	printf("Ex) 13 17 7");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2) large = n1;
	else large = n2;

	if (n3 > large) large = n3;
	printf("large: %d", large);
	*/

	/*
	int count = 0;
	int n, data;
	double avg, sum = 0;

	printf("n을 입력하세요: ");
	scanf_s("%d", &n);
	printf("\n");

	while (count < n) {
		printf("data: ");
		scanf_s("%d", &data);
		sum = sum + data;
		count += 1;
	}

	avg = sum / n;
	printf("avg: %.2f", avg);
	*/

	int n, data;

	printf("n을 입력하세요: ");
	scanf_s("%d", &n);

	printf("data을 입력하세요: ");
	scanf_s("%d", &data);

	int count = 1;
	int large = data;

	while (count < n) {

		printf("data을 입력하세요: ");
		scanf_s("%d", &data);
		if (data > large) large = data;
		count++;
	}

	printf("large: %d", large);
}