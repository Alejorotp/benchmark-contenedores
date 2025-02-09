#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    auto start = high_resolution_clock::now();

    vector<int> primes;
    int num = 2;
    while (primes.size() < 10000) {
        if (is_prime(num)) primes.push_back(num);
        num++;
    }

    long long sum = 0;
    for (int p : primes) sum += p;

    auto end = high_resolution_clock::now();
    cout << duration_cast<milliseconds>(end - start).count() << endl;

    return 0;
}
