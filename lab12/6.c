#include <stdio.h>

struct distance {
    int m;
    int cm;
};

// Function to calculate sum and difference
void calculate(struct distance d1, struct distance d2, struct distance *d_sum, struct distance *d_diff) {
    // Sum
    d_sum->m = d1.m + d2.m;
    d_sum->cm = d1.cm + d2.cm;
    if (d_sum->cm >= 100) {
        d_sum->m += d_sum->cm / 100;
        d_sum->cm = d_sum->cm % 100;
    }

    // Difference (assuming d1 >= d2)
    d_diff->m = d1.m - d2.m;
    d_diff->cm = d1.cm - d2.cm;
    if (d_diff->cm < 0) {
        d_diff->m -= 1;
        d_diff->cm += 100;
    }
}

int main() {
    struct distance d1 = {1, 22};
    struct distance d2 = {1, 3};
    struct distance d_sum, d_diff;

    calculate(d1, d2, &d_sum, &d_diff);

    printf("Sum = %d m %d cm\n", d_sum.m, d_sum.cm);
    printf("Difference = %d m %d cm\n", d_diff.m, d_diff.cm);

    return 0;
}
