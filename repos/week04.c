
//과제 1-2 재귀적 정의를 이용한 C함수
//유클리드 알고리즘을 이용해 두 수의 최대공약수 구하기

/*
int GCD(int x, int y)
{
	if (y == 0)
		return x;
	else
		GCD(y, x%y)
}
*/

//과제 2-2 반복을 이용한 C함수
//유클리드 알고리즘을 이용해 두 수의 최대공약수 구하기

/*
int GCD(int x, int y)
{
	int tmp;
	while (y != 0) {
		tmp = y;
		y = x % y;
		x = tmp;
	}
	return x;
}
*/

//과제 3-1 유클리드 알고리즘의 GCD 함수 실행
//그냥 함수로 문제 받기

/*
#include <stdio.h>
main()
{
	int gvalue;
	int a, b, again = 1;

	while (again) {
		printf("최대공약수를 구할 두 수를 입력하시오(Ex. 24 18): ");
		scanf_s("%d %d", &a, &b);
		gvalue = gcd(a, b);
		printf("gcd(%d %d) = %d\n\n", a, b, gvalue);
		printf("계속하시겠습니까? (Yes-1 / No-0");
		scanf_s("%d", &again);
	}
}
*/

//과제 3-2 유클리드 알고리즘의 GCD 함수 실행
//파일로 문제 받아오기-argtest
//구성속성-디버깅-명령 인수
//C:\Users\bonje\source\repos\2-1week04\gcd_test.d C:\Users\bonje\source\repos\2-1week04\again.d

/*
#include <stdio.h>
main(int argc, char* argv[])
{
	int i;
	printf("프로그램 명령 인수의 갯수는 %d\n", argc);
	for (i = 0;i < argc;i++)
		printf("%d : %s\n", i, argv[i]);
}
*/

//과제 3-3 유클리드 알고리즘의 GCD 함수 실행
//파일로 문제 받아오기


#include <stdio.h>
#include <stdlib.h>
;
int GCD(int x, int y);
void main(int argc, char *argv[]) //argc는 3
{
	int a, b, result, answer;
	int correct = 0, i = 0;
	FILE *infile, *out;
	if (argc != 3) {
		printf("실행인수를 잘못 주었습니다...\n");
		exit(1);
	}
	
	if ((infile = fopen(argv[1], "r")) == NULL) {
		printf("입력 파일을 열 수 없습니다. \n");
		exit(1);
	}

	if ((out = fopen(argv[2], "w")) == NULL) {
		printf("출력 파일을 열 수 없습니다. \n");
		exit(1);
	}

	while (fscanf(infile, "%d %d", &a, &b) != EOF) {
		printf("%d : GCD(%d, %d) = ", i + 1, a, b);
		scanf_s("%d", &answer);
		result = GCD(a, b);
		if (answer != result) {
			fprintf(out, "%d %d\n", a, b);
			printf("Answer : GCD(%d, %d) = %d\n", a, b, result);
		}
		else {
			printf("Correct...\n");
			correct++;
		}
		i++;
	}
	printf("%d 문제 중에 %d 문제 통과하셨습니다...\n", i, correct);
}
int GCD(int x, int y)
{
	if (y == 0)
		return x;
	else
		GCD(y, x % y);
}


//과제 4 

/*
#include <stdio.h>
void hanoi(int n, char a, char c, char b);
long count = 0;
void main()
{
	int n;
	printf("Input the number of disk: ");
	scanf_s("%d", &n);
	if (n <= 0)
		printf("\nNo disk!!\n");
	else
		hanoi(n, 'A', 'C', 'B');
	printf("Moving count = %d\n", count);
}
void hanoi(int n, char a, char c, char b)
{
	if (n == 1) {
		count++;
		printf("Move disk from %c to %c\n", a, c);
	}
	else {
		hanoi(n - 1, a, b, c);
		hanoi(1, a, c, b);
		hanoi(n - 1, b, c, a);
	}
}
*/