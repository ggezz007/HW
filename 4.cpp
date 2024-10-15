#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int h = 0;
enum Position{
    A,
    B,
    C,
    D,
    E
};
struct AEROFLOT {
    int city;
    unsigned short int number_of_flight;
    char type[15];
};
int find(int* arr, int sz, int value) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
int find_b(int* arr, int sz, int value) {
    arr = (int*)realloc(arr, (sz+1)*sizeof(int));
    arr[sz] = value;
    int i;
    for (i = 0; arr[i]!=value; i++) {
    }
    if (i == sz) {
        return -1;
    }
    return i;
}
int main() {
    unsigned char ch1 = '0';
    unsigned char ch2 = '1';
    unsigned char ch3 = '2';
    unsigned char ch4 = '3';
    unsigned int value = ch1;
    value <<= 8;
    value |= ch2;
    value <<= 8;
    value |= ch3;
    value <<= 8;
    value |= ch4;
    printf("%d", value);
}
