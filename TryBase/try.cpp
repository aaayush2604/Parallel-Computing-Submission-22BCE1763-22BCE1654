#include <omp.h>
#include <iostream>
int main()
{
    double start = omp_get_wtime();
#pragma omp parallel for
    for (int i = 0; i < 1000000; i++)
        ; // Simulated workload
    double end = omp_get_wtime();
    printf("Elapsed time: %f seconds\n", end - start);
    return 0;
}