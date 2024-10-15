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
    int sz = 10000000;
    int *arr2 = (int*) malloc(sz*sizeof(int));
    for (int i = 0; i < sz; i++) {
        arr2[i] = i;
    }
    clock_t start = clock();
    int x = find(arr2, sz, sz-1);
    x++;
    clock_t end = clock();
    double time_in_seconds = (double)(end-start)/ CLOCKS_PER_SEC;
    printf("%.10f\n",time_in_seconds);
     start = clock();
    x = find_b(arr2, sz, sz-1);
    x++;
    end = clock();
    time_in_seconds = (double )(end-start)/ CLOCKS_PER_SEC;
    printf("%.10f\n",time_in_seconds);
}
