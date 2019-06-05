#include <iostream>

int fibRecursive(int n) {
    return 0;
    // TODO
}

int fibIterative(int n) {
    return 0;
    // TODO
}

int main() {

    // Test recursive
    bool fibRecursiveCorrect = true;
    fibRecursiveCorrect &= fibRecursive(0) == 0;
    fibRecursiveCorrect &= fibRecursive(8) == 21;
    fibRecursiveCorrect &= fibRecursive(15) == 610;
    fibRecursiveCorrect &= fibRecursive(18) == 2584;
    fibRecursiveCorrect &= fibRecursive(20) == 6765;

    // Test iterative
    bool fibIterativeCorrect = true;
    fibIterativeCorrect &= fibIterative(0) == 0;
    fibIterativeCorrect &= fibIterative(8) == 21;
    fibIterativeCorrect &= fibIterative(15) == 610;
    fibIterativeCorrect &= fibIterative(18) == 2584;
    fibIterativeCorrect &= fibIterative(20) == 6765;

    std::cout << "Recursive: " << (fibRecursiveCorrect ? "pass :)" : "fail :(") << std::endl;
    std::cout << "Iterative: " << (fibIterativeCorrect ? "pass :)" : "fail :(") << std::endl;

    system("pause");
}