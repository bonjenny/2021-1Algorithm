#include <stdio.h>
#define DNUM 100

double find_avg(int a[][2], int n);
int find_max(int a[][2], int n);
int find_rank(int a[][2], int n, int sid);

main() {
	int i, n, scores[DNUM][2], sid;
	double avg;

	printf("n을 입력하시오: ");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		printf("id와 score를 입력하시오 (Ex. 101 85): ");
		scanf_s("%d %d", &scores[i][0], &scores[i][1]);
	}
	printf("평균: %d\n", find_avg(scores, n));
	printf("최대값: %d\n", find_max(scores, n));
	printf("검색될 학생의 학번을 입력하시오: ");
	scanf_s("%d", &sid);

	printf("%d의 등수: %d", sid, find_rank(scores, n, sid));
}

double find_avg(int a[][2], int n) {
	int i;
	double avg = 0;
	for (i = 0;i < n;i++) {
		avg += a[i][1];
	}
	avg = avg / n;
	return avg;
}

int find_max(int a[][2], int n) {
	int i, max = a[0][1];
	for (i = 1;i < n;i++) {
		if (a[i][1] > max) max = a[i][1];
	}
	return max;
}

int find_rank(int a[][2], int n, int sid) {
	int i, rank = 0, jumsu;
	for (i = 0;i < n;i++) {
		if (sid == a[i][0]) {
			jumsu = a[i][1];
			break;
		}
	}
	for (i = 0;i < n;i++) {
		if (a[i][1] > jumsu) rank++;
	}
	return rank + 1;
}