#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // infinite
    // Sign bit: 0
    // 지수부 bit: 111 1111 1111
    // 가수부 bit: 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
    double x1 = 3.40282366921e38f;
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
    
    //// Denormalized ////
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
