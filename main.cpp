#include <iostream>
#include "sumMaxAndMinIndex.h"
#include <fstream>
#include "expressions.h"
int main() {
    int size = 5;
    int a1[] ={1, 2, 3, 4, 6, 2};

    try {
        std::cout << sumMaxAndMinIndex(a1, size) << std::endl;
    } catch (const std::string e)
    {
        std::cerr << e << std::endl;
    }
    int n = 0;
    try {
        std::cin >> n;
        if (!std::cin) {
            throw INVALID_INPUT;
        }
        if (n < 0) {
            throw INVALID_INPUT;
        }
        int* a2 = new int[n];
        for (int i = 0; i < n; ++i) {
            a2[i] = rand() % 100;
            std::cout << a2[i] << ' ';
        }
        std::cout << std::endl;
        std::cout << sumMaxAndMinIndex(a2, n) << std::endl;
    } catch (const std::string e)
    {
        std::cerr << e << std::endl;
    }
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    try{
        int length = 0;
        for (int k = 0; k < 3; ++k) {
            in >> length;
            if (!in) {
                throw INVALID_INPUT;
            }
            if (length < 0) {
                throw INVALID_INPUT;
            }
            int *a3 = new int[length];
            for (int i = 0; i < length; ++i) {
                in >> a3[i];
                if (!in) {
                    throw INVALID_INPUT;
                }
            }
            out << sumMaxAndMinIndex(a3, length) << std::endl;
        }
    } catch (const std::string e)
    {
        std::cerr << e << std::endl;
    }
    return 0;
}