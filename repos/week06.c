/*
// 6주차 과제 7번 - 선택정렬과 이진검색
#include <stdio.h>
int bsearch(int a[], int n, int key);
void selection_sort(int a[], int n);
void main()
{
    int list[] = { 82, 120, 30, 40, 5, 90, 77, 25, 45, 100, 10, 79, 31, 55, 87 };
    int n = sizeof(list) / sizeof(int);
    int key, i;
    char sorted;

    printf("Is your data set sorted(y/n)? ");
    scanf_s("%c", &sorted);

    if (sorted == 'n') selection_sort(list, n);

    printf("The data set : \n");
    for (i = 0; i < n; i++) {
        printf("%5d", list[i]);
        if ((i + 1) % 5 == 0) printf("\n");
    }

    printf("\nEnter a key: ");
    scanf_s("%d", &key);

    if ((i = bsearch(list, n, key)) != -1)
        printf("%d은 [%d]번째에 위치해 있습니다.\n", key, i + 1);
    else
        printf("not exist\n");

} // main

int bsearch(int a[], int n, int key)
{
    int mid;
    int left = 0, right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (key > a[mid]) left = mid + 1;
        else if (key < a[mid]) right = mid - 1;
        else return mid;
    }
    return -1;
} // bsearch

void selection_sort(int a[], int n) {
    int j, m, s, temp;
    for (s = 0; s < n - 1; s++) {
        m = n - 1;
        for (j = s; j < n - 1; j++) {
            if (a[j] < a[m]) m = j;
        }
        temp = a[m];
        a[m] = a[s];
        a[s] = temp;
    }
} // selection_sort
*/


// 6주차 과제 8번 - 마방진
#include <stdio.h>
#define MAX_SIZE 100
void make_msquare(int table[][MAX_SIZE], int n);
void display(int table[][MAX_SIZE], int n);
void main()
{
    int n, i, j, sum = 0;
    int table[MAX_SIZE][MAX_SIZE];

    printf("Enter a number: ");
    scanf_s("%d", &n);
    if ((n < 1) || n > MAX_SIZE) {
        printf("Error! size is out of range.\n");
        exit(0);
    }
    if (!(n % 2)) {
        printf("Error! size is even.\n");
        exit(0);
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            table[i][j] = 0;
    make_msquare(table, n);
    display(table, n);

    for (j = 0; j < n; j++)
        sum += table[0][j];
    printf("Row/Column/Diagonal Sum = %d\n", sum);
} // main

void display(int table[][MAX_SIZE], int n)
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", table[i][j]);
        printf("\n");
    }
} // display

void make_msquare(int table[][MAX_SIZE], int n)
{
    int i, j, count, row, col;

    i = 0; j = (n - 1) / 2;
    table[i][j] = 1;
    for (count = 2; count <= n * n; count++) {
        row = (i - 1 < 0) ? (n - 1) : (i - 1); // up
        col = (j - 1 < 0) ? (n - 1) : (j - 1); // left
        if (table[row][col])  i++;
        else {
            i = row; j = col;
        }
        table[i][j] = count;
    }
} // make_msquare