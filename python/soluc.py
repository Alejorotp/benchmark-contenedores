import numpy as np
import time

def main():
    # Tamaño de las matrices
    N = 1000

    # Generar dos matrices aleatorias de tamaño NxN
    A = np.random.rand(N, N)
    B = np.random.rand(N, N)

    # Iniciar temporizador
    start_time = time.time()

    # Multiplicar las matrices
    result = np.dot(A, B)

    # Finalizar temporizador
    end_time = time.time()

    # Mostrar el tiempo de ejecución
    print(f"Tiempo de ejecución: {end_time - start_time:.4f}s")

if __name__ == "__main__":
    main()
