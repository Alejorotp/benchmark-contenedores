#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    const int N = 1000;
    std::vector<std::vector<double>> A(N, std::vector<double>(N));
    std::vector<std::vector<double>> B(N, std::vector<double>(N));
    std::vector<std::vector<double>> result(N, std::vector<double>(N, 0.0));

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            A[i][j] = static_cast<double>(std::rand()) / RAND_MAX;
            B[i][j] = static_cast<double>(std::rand()) / RAND_MAX;
        }
    }

    std::clock_t start = std::clock();

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    std::clock_t end = std::clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC;

    std::cout << "Tiempo de ejecución: " << elapsed_time << "s" << std::endl;

    return 0;
}
