#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
struct st {
    int month, year;
};
typedef Position* Position_x;
void swap(st* a, st * b) {
    st t = *a;
    *a = *b;
    *b = t;
}
int main() {
    st arr[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d%d", &arr[i].month, &arr[i].year);
    }
    if (arr[0].year > arr[1].year) {
        swap(&arr[0], &arr[1]);
    } else if (arr[0].year == arr[1].year && arr[0].month > arr[1].month) {
        swap(&arr[0], &arr[1]);
    }
    if ((arr[0].year < arr[2].year && arr[2].year < arr[1].year)) {
        printf("YES");
    } else if (arr[0].year == arr[2].year && arr[0].month <= arr[2].month){
        printf("YES");
    } else if (arr[1].year == arr[2].year && arr[1].month <= arr[2].month) {
        printf("YES");
    } else {
        printf("NO");
    }
}
