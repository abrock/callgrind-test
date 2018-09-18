#include <iostream>

using namespace std;

void func1() {
    size_t sum = 0;
//#pragma omp parallel for
    for (size_t ii = 0; ii < 1000000; ++ii) {
        size_t t1 = ii;
        t1 += 1;
        t1 *= 2;
        t1 /= 3;
//#pragma omp critical
        {
            sum += t1;
        }
    }
    std::cout << "The sum is: " << sum << std::endl;
}

void func2() {
    size_t sum = 0;
    for (size_t ii = 0; ii < 10000; ++ii) {
        sum += ii;
    }
    std::cout << "The sum is: " << sum << std::endl;
}

int main()
{
    cout << "Hello World!" << endl;

//#pragma omp parallel sections
    {
//#pragma omp section
    func1();
//#pragma omp section
    func2();
    }
    return 0;
}
