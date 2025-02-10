console.time("Tiempo de ejecución");

// Tamaño de la matriz
const N = 1000;

// Generar dos matrices aleatorias de tamaño NxN
const A = Array.from({ length: N }, () => Array.from({ length: N }, () => Math.random()));
const B = Array.from({ length: N }, () => Array.from({ length: N }, () => Math.random()));

// Multiplicar las matrices
const result = Array.from({ length: N }, () => Array(N).fill(0));

for (let i = 0; i < N; i++) {
    for (let j = 0; j < N; j++) {
        for (let k = 0; k < N; k++) {
            result[i][j] += A[i][k] * B[k][j];
        }
    }
}

console.timeEnd("Tiempo de ejecución");