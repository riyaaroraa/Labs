
#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output. */
typedef struct {
    double x;
    double y;
    double z;
} coord_t;

int check_zero(double n) {
    if (n > 0) {
        return 1;
    }
    else{
        return 0;
    }
}

int numPosCoord1(coord_t coord) {
    int counter = 0;
    counter += check_zero(coord.x);
    counter += check_zero(coord.y);
    counter += check_zero(coord.z);
    return counter;
}

int numPosCoord2(coord_t *pcoord) {
    int counter = 0;
    counter += check_zero(pcoord->x);
    counter += check_zero(pcoord->y);
    counter += check_zero(pcoord->z);
    return counter;
}

int valueExists1 (int arr[], int n, int value) {
    for(int i = 0; i < n; i++) {
        if (arr[i]==value) {
            return 1;
        }
        if (i==(n-1)) {
            return 0;
        }
    }
}

int valueExists2 (int *parr, int n, int value) {
    for(int i = 0; i < n; ++i) {
        if (*parr == value) {
            return 1;
        }
        if(i==(n-1)) {
            return 0;
        }
        parr++;
    }
}
