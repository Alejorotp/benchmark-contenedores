package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	const N = 1000 // Tamaño de la matriz (ajustado para velocidad en Go Playground)

	// Inicializar matrices
	A := make([][]float64, N)
	B := make([][]float64, N)
	result := make([][]float64, N)

	for i := 0; i < N; i++ {
		A[i] = make([]float64, N)
		B[i] = make([]float64, N)
		result[i] = make([]float64, N)
	}

	rand.Seed(time.Now().UnixNano())

	// Llenar matrices A y B con valores aleatorios
	for i := 0; i < N; i++ {
		for j := 0; j < N; j++ {
			A[i][j] = rand.Float64()
			B[i][j] = rand.Float64()
		}
	}

	start := time.Now() // Iniciar medicion de tiempo

	// Multiplicación de matrices
	for i := 0; i < N; i++ {
		for j := 0; j < N; j++ {
			for k := 0; k < N; k++ {
				result[i][j] += A[i][k] * B[k][j]
			}
		}
	}

	elapsed := time.Since(start) // Calcular tiempo transcurrido
	fmt.Printf("Tiempo de ejecución: %s\n segundos", elapsed)
}
