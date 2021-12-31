
#include <stdio.h>
void selection_sort(int a[], int n);
void print_data(int a[], int n);
main()
{
    int list[] = { 40, 30, 80, 70, 100, 10, 90, 20, 170, 60, 80 };
    int n = sizeof(list) / sizeof(int);
    print_data(list, n);
    selection_sort(list, n);
    printf("\n --------------------------------  \n");
    print_data(list, n);
} // main

void selection_sort(int list[], int n)
{
    int j, m, s, temp;
    for (s = 0; s < n - 1; s++) {
        m = n - 1;
        for (j = s; j < n - 1; j++) {
            if (list[j] > list[m]) m = j;
        } // for
        temp = list[m];
        list[m] = list[s];
        list[s] = temp;
    } // sort
} // selection_sort

void print_data(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d [%d] \n", i, a[i]);
} // print_data


/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
;
typedef struct member {
    int k;
    int id;
    char name[20];
    float score;
} example;

void over40(example* a, int n);
example find_max(example* a, int n);

main()
{
    example onep, exmember[20];
    int i, n;
    printf("Input the number of data : ");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        printf("������ �Է� : ");
        scanf_s("%d %s %f", &exmember[i].id, exmember[i].name, &exmember[i].score);
    }

    over40(exmember, n);
    onep = find_max(exmember, n);
    printf("Information of the highest score student = %d : %s : %.2f\n", onep.id, onep.name, onep.score);
}

void over40(example a[], int n)
{
    int k;
    printf("List of high score students(over 4.0)\n");
    for (k = 0; k < n; k++) {
        if (a[k].score > 4.0)
            printf("%d -- %s\n", a[k].id, a[k].name);
    }
}

example find_max(example a[], int n)
{
    int k, max_index;
    max_index = 0;
    for (k = 1; k < n; k++)
        if (a[k].score > a[max_index].score)
            max_index = k;
    return a[max_index];
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CNUM 50

typedef struct course {
    char couseid[10];
    char tname[20];
    unsigned snum;
    unsigned roomnum;
} cinform;

main(int argc, char* argv[])
{
    int i = 0, dnum;
    char sprof[20];
    unsigned sroomnum;
    cinform cdb[MAX_CNUM];
    FILE* coursedb;

    if ((coursedb = fopen(argv[1], "r")) == NULL) {
        printf("������ ������ �� �� �����ϴ� \n");
        exit(1);
    }
    while (fcanf(coursedb, "%s %s %u %u", cdb[i].courseid,
        cdb[i].tname, &(cdb[i].snum), &(cdb[i].roomnum)) != EOF)
        i++;
    dnum = i;

    printf("�����ο��� 40�� �̻��� ���� �ڵ� ��ȣ�� ����Ͻÿ�.\n");
    for (i=0; i < dnum; i++)
        if (cdb[i].snum >= 40)
            printf("%s\n", cdb[i].courseid);

    printf("�˻��ϰ��� �ϴ� �����̸� �Է� : ");
    scanf("%s", sprof);
    printf("%s ������ �����ϴ� �����ڵ�� ���ǽ� ��ȣ�� ����Ͻÿ�.\n",sprof);
    for (i=0; i < dnum; i++)
    if (!strcmp(cdb[i].tname, sprof))
        printf("%s\t%u\n", cdb[i].courseid, cdb[i].roomnum);

    printf("�˻��ϰ��� �ϴ� ���ǽ� ��ȣ �Է� : ");
    scanf("%u", &sroomnum);
    printf("%u ���ǽǿ��� �����ϴ� �����ڵ�� ��米���� ����Ͻÿ�.\n",sroomnum);
    for (i=0; i < dnum; i++)
        if (cdb[i].roomnum == sroomnum)
            printf("%s\t%s\n", cdb[i].courseid, cdb[i].tname);
}
*/