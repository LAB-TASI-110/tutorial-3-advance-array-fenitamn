#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double values[n]; 
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i]; 
    }

    double average = sum / n;
    int count_above_average = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++;
        }
    }

    printf("%.0f\n", sum); 
    printf("%.2f\n", average); 
    printf("%d\n", count_above_average);

    return 0;
}