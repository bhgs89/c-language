#include <stdio.h>

// 사용자 정의 함수, 배열, 문자열, 포인터 - 메인 포인트
// 포인터
//  - 특정한 데이터가 저장되어 있는 메모리의 주소 그 자체를 저장하는 변수

// 전역 변수
//  - 프로그램 어디서나 접근 가능한 변수
int hour;
int minute;
int minuteAdd;

// 사용자 정의 함수
//  - 자기 스스로 정의한 함수
//  - 정해진 특정한 기능을 수행하는 모듈
// [반환형태] [함수이름]([매개변수])
// - 반환형태의 값을 반드시 Return해야한다
//  - 함수의 반환값이 없을 떄, void 사용

// 시간 더하기 프로그램
//void counter() {
//    minute += minuteAdd;
//    hour += minute/60;
//    minute %= 60;
//    hour %= 24;
//}

// 화폐의 개수를 가장 적게 해주는 프로그램
//int smallest(int number) {
//    int count = 0;
//    while (number >= 50000) {
//        number -= 50000;
//        count++;
//    }
//    while (number >= 10000) {
//        number -= 10000;
//        count++;
//    }
//    while (number >= 5000) {
//        number -= 5000;
//        count++;
//    }
//    while (number >= 1000) {
//        number -= 1000;
//        count++;
//    }
//    while (number >= 500) {
//        number -= 500;
//        count++;
//    }
//    while (number >= 100) {
//        number -= 100;
//        count++;
//    }
//
//    return count;
//}

// 날짜 차이 계산 프로그램
int getDays(int month, int day) {
    int i, sum = 0;
    for (i = 1; i < month; i++) {
        if (i == 2) {
            sum += 28;
        } else if (i % 2 == 0) {
            sum += 30;
        } else {
            sum += 31;
        }
    }
    
    return sum + day;
}

int main(int argc, const char * argv[]) {
    // 시간 더하기 프로그램
    //    printf("시를 입력하세요: ");
    //    scanf("%d", &hour);
    //    printf("분를 입력하세요: ");
    //    scanf("%d", &minute);
    //    printf("더할 분을 입력하세요: ");
    //    scanf("%d", &minuteAdd);
    //    counter();
    //    printf("더해진 시간은 %d시 %d분 입니다\n", hour, minute);
    
    // 화폐의 개수를 가장 적게 해주는 프로그램
    //    int number;
    //    printf("금액을 입력하세요: ");
    //    scanf("%d", &number);
    //    printf("최초로 줄 수 있는 화폐의 개수는 %d입니다.\n", smallest(number));
    
    // 날짜 차이 계산 프로그램
    int month, day;
    scanf("%d %d", &month, &day);
    printf("1월 1일 부터 해당 날짜까지의 거리는 %d입니다.\n", getDays(month, day));
    return 0;
}
