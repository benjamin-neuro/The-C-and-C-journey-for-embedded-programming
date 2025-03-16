#include <stdio.h>


int main() {
    float f_degree, c_degree;
    f_degree = 0;
    int step = 20;
    int end = 300;

    printf("---------------\n");
    printf("   f   |   c   \n");
    printf("---------------\n");

    while (f_degree <= end) {
        c_degree = (5./9.) * (f_degree-32);
        printf(" %.2f   | %.2f   \n", f_degree, c_degree);
        f_degree = f_degree + step;
    }
    return 0;
}
