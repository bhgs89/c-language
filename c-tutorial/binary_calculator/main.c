#include <stdio.h>
#include <math.h>

int main(void) {
    // Double type bit 계산기
    int double_bits_calculator = 1;
    
    int double_sign_bit = 1;
    int double_exp_bits[] = {0,0,0, 0,0,0,0, 0,0,0,0};
    int double_real_bits[] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
        
    if (double_bits_calculator == 1) {
        printf("Double Bits Calculator\n");
        printf("sign bit: %d\n", double_sign_bit);
        
        // 지수부 계산
        printf("지수부 bits: ");
        int double_exp_size = sizeof(double_exp_bits) / 4;
        int double_exp_number = 0;
        for (int i = 0; i < double_exp_size; i++) {
            printf("%d", double_exp_bits[i]);
            if (double_exp_bits[i] > 0) {
                double_exp_number += pow(2, i);
            }
        }
        printf("\n");
        
        // 가수부 계산
        printf("가수부 bits: ");
        int double_real_size = sizeof(double_real_bits) / 4;
        double double_real_number = 0.0;
        for (int i = 0; i < double_real_size; i++) {
            printf("%d", double_real_bits[i]);
            if (double_real_bits[i] > 0) {
                double_real_number += pow(2, i);
            }
        }
        printf("\n");
        printf("-------------------\n");
                
        // 부호부 계산
        if (double_sign_bit == 1) {
            printf("sign: -\n");
        } else {
            printf("sign: +\n");
        }
        printf("지수부 값: %d\n", double_exp_number);
        printf("가수부 값: %.52lg\n", double_real_number);
        printf("-------------------\n");

        if (double_exp_number == 0 && double_real_number == 0) {
            printf("실제 값: 0 (Denormalized)\n");
        } else {
            double result_1 = double_real_number + 1.0;
            double result_2 = result_1 * pow(2, double_exp_number);
            if (double_sign_bit == 1) {
                printf("실제 값: -%.52lf\n", result_2);
            } else {
                printf("실제 값: %.52lf\n", result_2);
            }
        }
        printf("\n");
        printf("\n");
    }
    
    // 지수 계산기
    int tmp_calculator = 1;
    int tmp_exp = -127;
    int tmp_base = 2;
    if (tmp_calculator == 1) {
        printf("Double Bits Calculator\n");
        double tmp_result = pow(tmp_base, tmp_exp);
        printf("%d ^ %d = %.52lg\n", tmp_base, tmp_exp, tmp_result);
        printf("\n");
        printf("\n");
    }
    // 2진수 -> 10진수 계산기
//    int binary_positive_bits[] = {1};
//    int binary_negative_bits[] = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
//    int binary_bits_calculator = 0;
//
//    // 지수 표기법 계산기
//    int number_positive[] = {1};
//    int number_negative[] = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
//    int exp = 1023;
//    int number_calculator = 0;

    // number
//    int number_binary_size = sizeof(number_binary_arr) / 4;
//
//    double number = 0.0;
//    for (int i = 0; i < number_binary_size; i++) {
//        if (number_binary_arr[i] > 0) {
//            number += pow(2, i);
//        }
//    }
    
    // point
//    int pointer_binary_size = sizeof(pointer_binary_arr) / 4;
//
//    double pointer = 0.0;
//    for (int i = 1; i <= pointer_binary_size; i++) {
//        if (pointer_binary_arr[i] > 0) {
//            pointer += pow(2, -i);
//        }
//    }
    
    // Result
//    double result1 = number + pointer;
//    double result2 = result1 * pow(2, exp);
//
//    printf("-------------------\n");
//    printf("10진수 지수부: %.52f\n", result1);
//    printf("10진수 값: %.10le\n", result2);
    
    return 0;
}
