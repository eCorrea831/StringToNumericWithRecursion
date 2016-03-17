//
//  main.c
//  17 - D
//
//  Created by Erica Correa on 2/3/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

int stringLength (char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

float power (long double base, long long exponent) {
    
    float answer = 1;
    
    for (long long i = 1; i <= exponent; i++) {
        answer = answer * base;
    }
    return answer;
}

int int_conversion (char string[]) {
    
    int len = stringLength(string);
    int x = 0;
    int sign = 0;
    int offset = 0;
    
    if(string[0] == '-') {
        sign = -1;
        offset = 1;
    }
    
    for (int i = offset; i < len; i++) {
        x = x * 10 + (string[i] - '0');
    }
    
    if (sign == -1) {
        x = -x;
    }
    
    return x;
}

long long_conversion (char string[]) {
    
    int len = stringLength(string);
    long x = 0;
    int sign = 0;
    int offset = 0;
    
    if(string[0] == '-') {
        sign = -1;
        offset = 1;
    }
    
    for (int i = offset; i < len; i++) {
        x = x * 10 + (string[i] - '0');
    }
    
    if (sign == -1) {
        x = -x;
    }
    
    return x;
}

long long long_long_conversion (char string[]) {
    
    int len = stringLength(string);
    long long x = 0;
    int sign = 0;
    int offset = 0;
    
    if (string[0] == '-') {
        sign = -1;
        offset = 1;
    }
    
    for (int i = offset; i < len; i++) {
        x = x * 10 + (string[i] - '0');
    }
    
    if (sign == -1) {
        x = -x;
    }
    
    return x;
}

float float_conversion (char string[]) {
    
    int len = stringLength(string);
    float base_part = 0;
    float decimal_part = 0;
    int decimal = 0;
    float float_num;
    int sign = 0;
    int offset = 0;
    
    if (string[0] == '-') {
        sign = -1;
        offset = 1;
    }
    
    for (int i = offset; i < len; i++) {
        if (string[i] == '.') {
            decimal = i;
            break;
        }
        else {
            base_part = base_part * 10 + (string[i] - '0');
        }
    }
    
    for (int j = decimal + 1; j < len; j++) {
        decimal_part = decimal_part * 10 + (string[j] - '0');
    }
    
    int x = len - decimal - 1;
    
    
    decimal_part = decimal_part * (power(.1, x));
    
    float_num = base_part + decimal_part;
    
    if (sign == -1) {
        float_num = -float_num;
    }
    
    return float_num;
}

double double_conversion (char string[]) {
    
    int len = stringLength(string);
    double base_part = 0;
    double decimal_part = 0;
    int decimal = 0;
    double double_num;
    int sign = 0;
    int offset = 0;
    
    if (string[0] == '-') {
        sign = -1;
        offset = 1;
    }
    
    for (int i = offset; i < len; i++) {
        if (string[i] == '.') {
            decimal = i;
            break;
        }
        else {
            base_part = base_part * 10 + (string[i] - '0');
        }
    }
    
    for (int j = decimal + 1; j < len; j++) {
        decimal_part = decimal_part * 10 + (string[j] - '0');
    }
    
    int x = len - decimal - 1;
    
    decimal_part = decimal_part * (power(.1, x));
    
    double_num = base_part + decimal_part;
    
    if (sign == -1) {
        double_num = -double_num;
    }
    
    return double_num;
}

long double long_double_conversion (char string[]) {
    
    int len = stringLength(string);
    long double base_part = 0;
    long double decimal_part = 0;
    int decimal = 0;
    long double long_double_num;
    int sign = 0;
    int offset = 0;
    
    if (string[0] == '-') {
        sign = -1;
        offset = 1;
    }
    
    for (int i = offset; i < len; i++) {
        if (string[i] == '.') {
            decimal = i;
            break;
        }
        else {
            base_part = base_part * 10 + (string[i] - '0');
        }
    }
    
    for (int j = decimal + 1; j < len; j++) {
        decimal_part = decimal_part * 10 + (string[j] - '0');
    }
    
    int x = len - decimal - 1;
    
    decimal_part = decimal_part * (power(.1, x));
    
    long_double_num = base_part + decimal_part;
    
    if (sign == -1) {
        long_double_num = -long_double_num;
    }
    
    return long_double_num;
}

int long_long_len(long long num) {
    
    if (num >= 10000000000) return 11;
    if (num >= 1000000000) return 10;
    if (num >= 100000000) return 9;
    if (num >= 10000000) return 8;
    if (num >= 1000000) return 7;
    if (num >= 100000) return 6;
    if (num >= 10000) return 5;
    if (num >= 1000) return 4;
    if (num >= 100) return 3;
    if (num >= 10) return 2;
    if (num >= 1) return 1;
    if (num == 0) return 0;
    if (num >= -10) return 2;
    if (num >= -100) return 3;
    if (num >= -1000) return 4;
    if (num >= -10000) return 5;
    if (num >= -100000) return 6;
    if (num >= -1000000) return 7;
    if (num >= -10000000) return 8;
    if (num >= -100000000) return 9;
    if (num >= -1000000000) return 10;
    if (num >= -10000000000) return 11;
    if (num >= -100000000000) return 12;
    
    return 0;
}

int type;

int decimal_check (char [], int);

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    
    char number_string[] = "3.2";
    
    int index = 0;
    
    decimal_check(number_string, index);
    
    if (type == 1) {
        if (long_double_conversion(number_string) > DBL_MAX || long_double_conversion(number_string) < (DBL_MAX * -1)) {
            printf("Sorry, that number is either way too big or way too small. Try again.\n");
            return 1;
        }
        else if (double_conversion(number_string) > FLT_MAX || double_conversion(number_string) < (FLT_MAX * -1)) {
            double result = double_conversion(number_string);
            printf("The string is a double and has been converted: %lf\n", result + 1);
        }
        else {
            float result = float_conversion(number_string);
            printf("The string is a float and has been converted: %f\n", result);
        }
    }
    
    else {
        if (stringLength(number_string) > long_long_len(long_long_conversion(number_string))) {
            printf("Sorry, that number is either way too big or way too small. Try again.\n");
        }
        else if (long_long_conversion(number_string) > LONG_MAX || long_long_conversion(number_string) <= LONG_MIN) {
            printf("Sorry, that number is either way too big or way too small. Try again.\n");
        }
        else if (long_conversion(number_string) > INT_MAX || long_conversion(number_string) < INT_MIN) {
            long result = long_conversion(number_string);
            printf("The string is a long and has been converted: %ld\n", result);
        }
        else {
            int result = int_conversion(number_string);
            printf("The string is an integer and has been converted: %d\n", result);
        }
    }
    
    return 0;
}

int decimal_check (char number_string[], int index) {

    if (index < stringLength(number_string)) {
        if (number_string[index] == '.') {
            type = 1;
        }
        else {
            decimal_check(number_string, index + 1);
        }
    }
    return 0;
}