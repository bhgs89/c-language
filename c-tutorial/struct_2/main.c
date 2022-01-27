#include <stdio.h>
#define SIZE 5

// 구조체의 배열
struct student {
    int number;
    char name[20];
    double grade;
};

// 구조체의 비교
struct point {
    int x;
    int y;
};

// 구조체 매개변수
void comparePoint(struct point p1, struct point p2) {
    if ((p1.x == p2.x) && (p1.y == p2.y)) {
        printf("p1과 p2가 같습니다.\n");
    }
}

int main(void) {
    // 구조체의 비교
    // struct point p1;
    // struct point p2;

    // p1.x = 30;
    // p1.y = 10;

    // p2.x = 30;
    // p1.y = 10;

    // 구조체 전체를 비교하는 것은 불가능하다
    // if (p1 == p2) {
    //     printf("p1과 p2가 같습니다.\n");
    // }

    // 구조체의 비교는 구조체 안의 값을 비교해야한다
    // if ((p1.x == p2.x) && (p1.y == p2.y)) {
    //     printf("p1과 p2가 같습니다.\n");
    // }
    // comparePoint(p1, p2);

    // 구조체의 배열
    struct student list[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        printf("학번을 입력하세요 : ");
        scanf("%d", &list[i].number);

        printf("이름을 입력하세요 : ");
        scanf("%s", &list[i].name);

        printf("학점을 입력하세요 : ");
        scanf("%lf", &list[i].grade);
    }

    for (i = 0; i < SIZE; i++) {
        printf("학번: %d, 이름: %s, 학점: %.1lf\n", list[i].number, list[i].name, list[i].grade);
    }

    return 0;
}
