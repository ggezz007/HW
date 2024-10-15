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
int main() {
    AEROFLOT arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i].city);
        scanf("%hu", &arr[i].number_of_flight);
        scanf("%s", arr[i].type);
    }
    char type[15];
    scanf("%s", type);
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(type, arr[i].type)==0) {
            printf("%d %hd\n", arr[i].city, arr[i].number_of_flight);
            cnt++;
        }
    }
    if (!cnt) {
        printf("0 flights");
    }
}
