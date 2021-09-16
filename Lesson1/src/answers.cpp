#include "answers.h"

int sumTwoNum(const int& a, const int& b) {
    return a + b;
}

void squarePrint(const int& width) {
    std::string toPrint;
    for (int i = 0; i < width; i++) {
        toPrint += "*";
    }
    for (int i = 0; i < width; i++) {
        std::cout << toPrint << std::endl;
    }
}

void trianglePrint(const int& width) {
    std::string toPrint;
    for (int i = 0; i < width; i ++) {
        toPrint += "*";
        std::cout << toPrint << std::endl;
    }
}

int factorial(const int& factorial) {
    int finalFactorial = 1;
    for (int i = 1; i <= factorial; i++) {
        finalFactorial *= i;
    }
    return finalFactorial;
}

int fibonacci(const int& fib) {
    if (fib == 2 || fib == 1) {
        return 1;
    }
    return fibonacci(fib - 1) + fibonacci(fib - 2);
}

int getSum(const int purchases[], const int& size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += purchases[i];
    }
}

