use std::time::Instant;

// Generador aleatorio simple basado en el tiempo
fn simple_random(seed: &mut u64) -> f64 {
    *seed = seed.wrapping_mul(6364136223846793005).wrapping_add(1);
    (*seed % 1000) as f64
}

fn main() {
    const N: usize = 1000; // Tamaño de la matriz ajustado para Programiz
    let mut seed = 123456789; // Semilla para el generador aleatorio

    // Inicializar matrices
    let mut a = vec![vec![0.0; N]; N];
    let mut b = vec![vec![0.0; N]; N];
    let mut result = vec![vec![0.0; N]; N];

    // Llenar matrices A y B con valores aleatorios
    for i in 0..N {
        for j in 0..N {
            a[i][j] = simple_random(&mut seed);
            b[i][j] = simple_random(&mut seed);
        }
    }

    // Medir tiempo de inicio
    let start = Instant::now();

    // Multiplicación de matrices
    for i in 0..N {
        for j in 0..N {
            for k in 0..N {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Medir tiempo de finalización
    let duration = start.elapsed();
    println!("Tiempo de ejecución: {:?} segundos", duration);
}
