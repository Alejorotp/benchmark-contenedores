import numpy as np
import time

def main():
    N = 1000

    A = np.random.rand(N, N)
    B = np.random.rand(N, N)

    start_time = time.time()

    result = np.dot(A, B)

    end_time = time.time()

    print(f"Tiempo de ejecución: {end_time - start_time:.4f}s")

if __name__ == "__main__":
    main()
