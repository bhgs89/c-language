#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    double x1 = -1.797693134e308;
//    double x2 = x1 - 0.00001e308;
//    printf("x1는 %.20lg\n", x1);
//    printf("x2는 %.20lf\n", x2);
//
//    double y1 = 1.797693134e308;
//    double y2 = x1 - 0.00001e308;
//    printf("y1는 %.20lg\n", y1);
//    printf("y2는 %.20lf\n", y2);
//
//    double a = 1 / pow(2, 52);
//    printf("a는 %.52lg\n", a);
    
    double x = 0.0;
    double y = 0.1;
    printf("y는 %.52lf\n", y);

    for (int i = 0; i < 10; i++) {
        x = x + y;
        printf("x는 %.52lf\n", x);
    }

    if (x == 1.0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}
