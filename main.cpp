#include <iostream>

// Calculate some nonsense so we have something to measure
void func1() {
    size_t sum = 0;
    for (size_t ii = 0; ii < 1000000; ++ii) {
        size_t t1 = ii;
        t1 += 1;
        t1 *= 2;
        t1 /= 3;
        sum += t1;
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
    std::cout << "Hello World!" << std::endl;

    func1();
    func2();

    std::cout << "Finished calculating nonsense" << std::endl;
    return 0;
}
