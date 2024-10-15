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
struct Student{
    int name, surname, group, birthday;
    int ball[5];
};
int main() {
    Student arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d%d%d%d", &arr[i].name, &arr[i].surname, &arr[i].group, &arr[i].birthday);
        int flag = 1;
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i].ball[j]);
            if (arr[i].ball[j]!=5) {
                flag = 0;
            }
        }
        if (flag) {
            printf("%d%d", arr[i].name, arr[i].surname);
        }
    }
    for (int i = 0; i < 5; i++) {
        int cnt = 0;
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                continue;
            }
            if (arr[i].birthday == arr[j].birthday) {
                cnt++;
            }
        }
        if (cnt) {
            printf("%d\n", arr[i].surname);
        }
    }
}
