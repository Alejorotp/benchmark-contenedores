#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    const int N = 1000; // Tamaño de la matriz (ajustado para que sea más rápido en OnlineGDB)
    std::vector<std::vector<double>> A(N, std::vector<double>(N));
    std::vector<std::vector<double>> B(N, std::vector<double>(N));
    std::vector<std::vector<double>> result(N, std::vector<double>(N, 0.0));

    // Inicializar la semilla para números aleatorios
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Llenar las matrices A y B con números aleatorios
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            A[i][j] = static_cast<double>(std::rand()) / RAND_MAX;
            B[i][j] = static_cast<double>(std::rand()) / RAND_MAX;
        }
    }

    // Medir el tiempo de inicio
    std::clock_t start = std::clock();

    // Multiplicación de matrices
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Medir el tiempo de fin
    std::clock_t end = std::clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC;

    std::cout << "Tiempo de ejecución: " << elapsed_time << " segundos" << std::endl;

    return 0;
}
