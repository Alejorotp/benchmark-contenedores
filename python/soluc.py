import time
import sympy

start_time = time.time()

primes = list(sympy.primerange(1, 104730))[:10000]  # Calcula los primeros 10,000 primos
prime_sum = sum(primes)

execution_time = (time.time() - start_time) * 1000  # Tiempo en ms

print(int(execution_time))  # Solo imprimir el tiempo
with open("output.txt", "w") as f:
    f.write(str(prime_sum))