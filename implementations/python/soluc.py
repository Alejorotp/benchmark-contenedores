import time
from sympy import primerange

def sum_primes(n):
    return sum(primerange(1, n))

start = time.time()
result = sum_primes(104730)  # 10,000th prime is ~104730
end = time.time()

with open("output.txt", "w") as f:
    f.write(str(result))

print(int((end - start) * 1000))  # Tiempo en milisegundos
