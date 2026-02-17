//deviation about an average 
//calcalate average first
// then deviation= value - average
#include <stdio.h>
int main() {
    float v[5], avg = 0;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        avg=avg+v[i];
    }

    avg= avg/5;

    for (i = 0; i < 5; i++)
        printf("Deviation = %f\n", v[i] - avg);

    return 0;
}