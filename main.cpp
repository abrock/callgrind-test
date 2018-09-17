#include <iostream>

using namespace std;

void func1() {
    size_t sum = 0;
    for (size_t ii = 0; ii < 1e6; ++ii) {
        sum += ii;
    }
    std::cout << "The sum is: " << sum << std::endl;
}

void func2() {
    size_t sum = 0;
    for (size_t ii = 0; ii < 1e4; ++ii) {
        sum += ii;
    }
    std::cout << "The sum is: " << sum << std::endl;
}

int main()
{
    cout << "Hello World!" << endl;
    func1();
    func2();
    return 0;
}
