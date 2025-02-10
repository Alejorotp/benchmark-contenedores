import kotlin.system.measureTimeMillis
import kotlin.random.Random

fun main() {
    val N = 1000 // Tamaño de la matriz ajustado para velocidad en Playground

    // Inicializar matrices
    val A = Array(N) { DoubleArray(N) }
    val B = Array(N) { DoubleArray(N) }
    val result = Array(N) { DoubleArray(N) }

    // Llenar matrices A y B con valores aleatorios
    for (i in 0 until N) {
        for (j in 0 until N) {
            A[i][j] = Random.nextDouble(0.0, 1000.0)
            B[i][j] = Random.nextDouble(0.0, 1000.0)
        }
    }

    // Medir tiempo de ejecución
    val executionTime = measureTimeMillis {
        for (i in 0 until N) {
            for (j in 0 until N) {
                for (k in 0 until N) {
                    result[i][j] += A[i][k] * B[k][j]
                }
            }
        }
    }

    println("Tiempo de ejecución: ${executionTime}ms")
}
