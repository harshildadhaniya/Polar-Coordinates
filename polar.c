#include <stdio.h>
#include <math.h>

void polar_coord(float r, float Th) {
    float x, y;
    x = r * cosf(Th * (M_PI/180));
    y = r * sinf(Th * (M_PI/180));

    printf("x = %f \ny = %f \n", x, y);
}

int main() {
    float R;
    float THETA;
    printf("Please enter distance [in meters]: ");
    scanf("%f", &R);
    printf("Please enter angle [in degrees]: ");
    scanf("%f", &THETA);
    polar_coord(R, THETA);
    return 0;
}