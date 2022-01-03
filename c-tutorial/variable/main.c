// Standard Input/Output library header file
//  printf()
#include <stdio.h>

// Limit library header file
//  INT_MAX
#include <limits.h>

// Memory(RAM)에 변수 및 상수를 할당한다

// Variable 변수
//  수정가능

// Constant 상수
//  수정 불가능

int main(void) {
    int x = 5;
    // printf() parameters
    // %d: Int형태 값
    // %f: float 또는 double 형태 값
    //      %.1f: 소수점 1까지의 float형태 값
    //      %.2f: 소수점 2까지의 float형태 값
    //      ...
    printf("변수 x는 %d \n", x);
    
    // sizeof(X)
    // X의 Memory 크기를 Return하는 함수
    printf("변수 x의 메모리 크기는 %d 입니다\n", sizeof(x));
    
    
    // 자료형
    //  int: 정수
    //  float: 실수 (4bytes까지만 Memory에 할당된다)
    //  double: 실수 (8bytes까지만 Memory에 할당된다)
    int a = 50;
    float b = 123456789.123456789;
    double c = 123456789.123456789;
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);
    
    
    // Overflow
    //  - 자료형태의 최대값을 넘는 값을 할당하면 최소값부터 다시 시작된다는 개념
    // INT_MAX: Int형태 최대값 2147483647 상수
    int y = INT_MAX;
    printf("int형의 최대값 y는 %d입니다\n", y);
    printf("y + 1은 %d입니다\n", y + 1);
    
    
    // Operators
    // +, -, *, /, %
    int xx = 10;
    int yy = 20;
    printf("xx = %d입니다.\n", xx);
    printf("yy = %d입니다.\n", yy);
    printf("xx + yy = %d입니다.\n", xx + yy);
    printf("xx - yy = %d입니다.\n", xx - yy);
    printf("xx * yy = %d입니다.\n", xx * yy);
    printf("xx / yy = %d입니다.\n", xx / yy);  // 나누기의 몫만 출력
    printf("xx % yy = %d입니다.\n", xx % yy);  // 나누기의 나머지만 출력
    
    return 0;
}
