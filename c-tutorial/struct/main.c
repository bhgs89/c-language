#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 구조체 Struct
// - 여러 개의 데이터를 하나로 묶어서 사용할 수 있도록 하기 위해 만들어진 c언어의 문법
// - 서로 다른 Data들을 하나로 묶어서 관리
// - 객체지향 모듈인 Class와 비슷한 모듈

// 선언
//  struct 이름 {
//      data
//  }

// 호출
//  struct STRUCT이름 변수이름



// 학생 정보 구조체
struct student {
    int number;
    char name[10];
    double grade;
}

// 두 점 사이의 거리
struct point {
    int x, y;
}

int main(void) {
    // 학생 정보 구조체
    // struct student s;
    // s.number = 20150001;
    // strcpy(s.name, "홍길동"); // char type 배열은 pointer의 개념이기 때문에, strcpy 함수를 사용한다
    // s.grade = 4.5;
    // printf("학번 : %d\n", s.number);
    // printf("이름 : %s\n", s.name);
    // printf("학점 : %.1lf\n", s.grade);
    
    // 학생 정보 구조체 활용
    // struct student s;
    // printf("학번을 입력하세요 : ");
    // scanf("%d", &s.number);
    // printf("이름을 입력하세요 : ");
    // scanf("%s", s.name);
    // printf("학점을 입력하세요 : ");
    // scanf("%lf", &s.grade);
    // printf("학번 : %d\n", s.number);
    // printf("이름 : %s\n", s.name);
    // printf("학점 : %.1lf\n", s.grade);

    // 두 점 사이의 거리
    struct point p1, p2;
    int xDiff, yDiff;
    double distance;

    printf("1번 점의 좌표를 입력하세요 : ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("2번 점의 좌표를 입력하세요 : ");
    scanf("%d %d", &p2.x, &p2.y);

    xDiff = p1.x - p2.x;
    yDiff = p1.y - p2.y;

    distance = sqrt(xDiff * xDiff + yDiff * yDiff);
    printf("두 점 사이의 거리는 %.2f입니다.\n", distance);
    
    return 0;
}
