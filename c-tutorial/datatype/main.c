#include <stdio.h>
// Data Types
//  Primitive Data Type [원시 자료형]
//      char: 문자 또는 문자열
//          char형은 내부적으로 ASCII code 숫자로 표현된다
//      int: 정수
//      float: 실수
//      double: 실수
//      void: Data type이 없다는 의미
//  Derivied Data Type [파생 자료형]
//      array: 배열
//      pointer
//      function
//  User Defined Data Type [사용자 정의 자료형]
//      enum
//      structure
//      union


// 상수 정의 변수
//  #define [변수이름] [변수값]
#define MONTHS 12

int main(void) {
    // Salary Calculator
        // double monthSalary = 1000.5;
        // printf("$ %.2f\n", monthSalary * MONTHS);
    
    // Char type
    //  'A' char형은 내부적으로 ASCII code 숫자 65로 표현된다
    //  문자열은 char type의 배열로 선언한다
    //  1 글자의 char type은 printf()에서 %c로 참조한다
    //  문자열의 char type은 printf()에서 %s로 참조한다
    //  char type은 printf()에서 %d로 참조하면, ASCII Code 숫자를 출력한다
    //     char x = 'A';
    //     printf("%c\n", x);
    //     printf("%d\n", x);
    //     char y = 65;
    //     printf("%c\n", y);
    //     int z = 65;
    //     printf("%c\n", z);
    //     char a[] = "Hello";
    //     printf("%s\n", a);
    
    // Int type
    //  int type은 printf()에서 %d로 참조하면, 10진수로 출력한다
    //  int type은 printf()에서 %o로 참조하면, 8진수로 출력한다
    //  int type은 printf()에서 %x로 참조하면, 16진수로 출력한다
    //    int x = 100;
    //    printf("10진수로 출력 : %d\n", x);
    //    printf("8진수로 출력 : %o\n", x);
    //    printf("16진수로 출력 : %x\n", x);
    
    // short type
    //    short a = 32767;
    //    short a_1 = 32768;
    //    short a_2 = 32778;
    //    short a_3 = -1;
    //    printf("%hd\n", a);
    //    printf("%hd\n", a_1);
    //    printf("%hd\n", a_2);
    //    printf("%hd\n", a_3);
    //    printf("%hu\n", a_3);
    //
    //    printf("--------------\n");
    //
    //    unsigned short b = 65535;
    //    unsigned short b_1 = 65536;
    //    unsigned short b_2 = 65546;
    //    unsigned short b_3 = -1;
    //    printf("%hu\n", b);
    //    printf("%hu\n", b_1);
    //    printf("%hu\n", b_2);
    //    printf("%hu\n", b_3);
    //    printf("%hd\n", b_3);
    
    // 실수형 타입
    // sizeof()함수는 unsigned long 형태의 값을 return한다
    
    // float type
    float a = 0.0001;
    printf("a는 %f\n", a);
    printf("size는 %lu\n", sizeof(a));
    float b = 0.0001f;
    printf("b는 %f\n", b);
    printf("size는 %lu\n", sizeof(b));
    
    // double type
    double c = 0.00000000001;
    printf("c는 %f\n", c);
    printf("size는 %lu\n", sizeof(c));
    double d = 0.00000000001f;
    printf("d는 %f\n", d);
    printf("size는 %lu\n", sizeof(d));
    
    // 실수 type 확인
    printf("실수 0.1은 %lu bytes이다\n", sizeof(0.1f));
    printf("실수 0.1은 %lu bytes이다\n", sizeof(0.1));
    
    // 실수 유효자릿수
    float a1 = 3.141593f;
    float a2 = 3.141592654589793f;
    printf("a1는 %f\n", a1);
    printf("a1는 %f\n", a2);
    double b1 = 3.14159265458979;
    printf("b1는 %f\n", b1);
    printf("b1는 %lf\n", b1);
    
    // 정수, 실수 표현
    printf("12의 size는 %lu이다\n", sizeof(12));
    printf("12.의 size는 %lu이다\n", sizeof(12.));
    
    // 수소점 지정
    float a3 = 3.14159f;
    double b3 = 3.14159;
    printf("a3는 %.2f\n", a3);
    printf("b3는 %.2lf\n", b3);
    
    // float 출력
    //    float x = 3.14159f;
    //    float y = 3.14159;
    //    printf("x는 %f\n", x);
    //    printf("y는 %f\n", y);
    //    printf("x는 %.2f\n", x);
    //    printf("y는 %.4f\n", y);
    //    printf("x는 %e\n", x);
    //    printf("y는 %e\n", y);
    //    printf("x는 %.2e\n", x);
    //    printf("y는 %.4e\n", y);
    //    printf("x는 %g\n", x);
    //    printf("y는 %g\n", y);
    //    printf("x는 %.2g\n", x);
    //    printf("y는 %.4g\n", y);

    // 지수 표기법 선언
    //    float x = 1234.5678e+2f;
    //    float y = 1234.5678e+2;
    //    float z = 1234.5678e-4f;
    //    printf("x는 %f\n", x);
    //    printf("y는 %f\n", y);
    //    printf("z는 %f\n", z);
    //    printf("x는 %.2f\n", x);
    //    printf("y는 %.4f\n", y);
    //    printf("z는 %.4f\n", z);
    //    printf("x는 %e\n", x);
    //    printf("y는 %e\n", y);
    //    printf("z는 %e\n", z);
    //    printf("x는 %.2e\n", x);
    //    printf("y는 %.4e\n", y);
    //    printf("z는 %.4e\n", z);
    //    printf("x는 %g\n", x);
    //    printf("y는 %g\n", y);
    //    printf("z는 %g\n", z);
    //    printf("x는 %.2g\n", x);
    //    printf("y는 %.4g\n", y);
    //    printf("z는 %.4g\n", z);
    
    // float 오차
    //    float a_e1 = 0.1f;
    //    printf("%.15f\n", a_e1);
    //
    //    double b_e1 = 0.1;
    //    printf("%.55lf\n", b_e1);
    //
    //    printf("---------------\n");
    //    float x = 0.0f;
    //    float y = 0.1f;
    //    printf("y는 %.15f\n", y);
    //    for (int i = 0; i < 10; i++) {
    //        x = x + y;
    //        printf("x는 %.15f\n", x);
    //    }
    //    if (x == 1.0f)
    //        printf("true\n");
    //    else
    //        printf("false\n");
    
    // float 범위
    //    float x1 = -3.40282346639e38f;
    //    float x2 = -3.40283346639e38f;
    //    printf("x1는 %.20f\n", x1);
    //    printf("x2는 %.20f\n", x2);
    //
    //    float y1 = 3.40282346639e38f;
    //    float y2 = 3.40283346639e38f;
    //    printf("y1는 %.20f\n", y1);
    //    printf("y2는 %.20f\n", y2);
    
    // Sign bit: 0
    // 지수부 bit: 1111 1111
    // 가수부 bit: 000 0000 0000 0000 0000 0000
    float x1 = 3.40282366921e38f;
    printf("x1는 %.20f\n", x1);
    
    // Sign bit: 1
    // 지수부 bit: 1111 1111
    // 가수부 bit: 000 0000 0000 0000 0000 0000
    float x2 = -3.40282366921e38f;
    printf("x2는 %.20f\n", x2);
    
    // Sign bit: 0
    // 지수부 bit: 1111 1111
    // 가수부 bit: 000 0000 0000 0000 0000 0001
    float x3 = 3.40282407486e38f;
    printf("x3는 %.20f\n", x3);
    
    // Sign bit: 1
    // 지수부 bit: 1111 1111
    // 가수부 bit: 000 0000 0000 0000 0000 0001
    float x4 = -3.40282407486e38f;
    printf("x4는 %.20f\n", x4);

    printf("-----------------\n");
    
    // Sign bit: 0
    // 지수부 bit: 0000 0000
    // 가수부 bit: 000 0000 0000 0000 0000 0000
    float y1 = 1.17549435082e-38f;
    printf("y1는 %.20f\n", y1);
    
    // Sign bit: 1
    // 지수부 bit: 0000 0000
    // 가수부 bit: 000 0000 0000 0000 0000 0000
    float y2 = -1.17549435082e-38f;
    printf("y2는 %.20f\n", y2);
    
    return 0;
}
