#include <stdio.h>

int main(void) {
    float x1 = -3.40282346639e38f;
    float x2 = x1 - 0.00001e38f;
    printf("x1는 %.20f\n", x1);
    printf("x2는 %.20f\n", x2);
        
    float y1 = 3.40282346639e38f;
    float y2 = y1 + 0.00001e38f;
    printf("y1는 %.20f\n", y1);
    printf("y2는 %.20f\n", y2);

    return 0;
}
