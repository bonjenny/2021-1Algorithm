
//���� 1-2 ����� ���Ǹ� �̿��� C�Լ�
//��Ŭ���� �˰����� �̿��� �� ���� �ִ����� ���ϱ�

/*
int GCD(int x, int y)
{
	if (y == 0)
		return x;
	else
		GCD(y, x%y)
}
*/

//���� 2-2 �ݺ��� �̿��� C�Լ�
//��Ŭ���� �˰����� �̿��� �� ���� �ִ����� ���ϱ�

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

//���� 3-1 ��Ŭ���� �˰����� GCD �Լ� ����
//�׳� �Լ��� ���� �ޱ�

/*
#include <stdio.h>
main()
{
	int gvalue;
	int a, b, again = 1;

	while (again) {
		printf("�ִ������� ���� �� ���� �Է��Ͻÿ�(Ex. 24 18): ");
		scanf_s("%d %d", &a, &b);
		gvalue = gcd(a, b);
		printf("gcd(%d %d) = %d\n\n", a, b, gvalue);
		printf("����Ͻðڽ��ϱ�? (Yes-1 / No-0");
		scanf_s("%d", &again);
	}
}
*/

//���� 3-2 ��Ŭ���� �˰����� GCD �Լ� ����
//���Ϸ� ���� �޾ƿ���-argtest
//�����Ӽ�-�����-��� �μ�
//C:\Users\bonje\source\repos\2-1week04\gcd_test.d C:\Users\bonje\source\repos\2-1week04\again.d

/*
#include <stdio.h>
main(int argc, char* argv[])
{
	int i;
	printf("���α׷� ��� �μ��� ������ %d\n", argc);
	for (i = 0;i < argc;i++)
		printf("%d : %s\n", i, argv[i]);
}
*/

//���� 3-3 ��Ŭ���� �˰����� GCD �Լ� ����
//���Ϸ� ���� �޾ƿ���


#include <stdio.h>
#include <stdlib.h>
;
int GCD(int x, int y);
void main(int argc, char *argv[]) //argc�� 3
{
	int a, b, result, answer;
	int correct = 0, i = 0;
	FILE *infile, *out;
	if (argc != 3) {
		printf("�����μ��� �߸� �־����ϴ�...\n");
		exit(1);
	}
	
	if ((infile = fopen(argv[1], "r")) == NULL) {
		printf("�Է� ������ �� �� �����ϴ�. \n");
		exit(1);
	}

	if ((out = fopen(argv[2], "w")) == NULL) {
		printf("��� ������ �� �� �����ϴ�. \n");
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
	printf("%d ���� �߿� %d ���� ����ϼ̽��ϴ�...\n", i, correct);
}
int GCD(int x, int y)
{
	if (y == 0)
		return x;
	else
		GCD(y, x % y);
}


//���� 4 

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