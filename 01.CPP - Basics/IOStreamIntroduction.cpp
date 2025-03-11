//
// Created by mokgul on 3/11/25.
//

#include <iostream>
#include "IOStreamIntroduction.h"


IOStreamIntroduction::IOStreamIntroduction()
{

}

void IOStreamIntroduction::STDCout()
{
    std::cout << "Hellow World!" << std::endl;
    std::cout << 4 << std::endl;

    int x { 5 };
    std::cout << x << std::endl;

    std::cout << "Hello" << " world!" << std::endl;
    std::cout << "x is equal to: " << x << std::endl;

    std::cout << "Hi!" << std::endl;
    std::cout << "My name is Alex." << std::endl;

    // endl is inefficient cause it flushed the buffer on every print
    // buffer is a temporary storage where data sent from the program to the output is stored
    // and the output is able to take "chunks" at specific rate hence increasing performance
    // when the buffer is flushed every time the output isn't able to utilize the buffer properly
    // This is why we use \n cause it prints a new line without flushing the buffer

    std::cout << "x is equal to: " << x << '\n';    // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                    // double-quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";        // between double quotes in existing text (conventional)
}

void IOStreamIntroduction::STDCin()
{
    std::cout << "Enter a number: ";

    int x {};
    std::cin >> x;

    std::cout << "You entered: " << x << '\n';

    std::cout << "Enter two numbers separated by a space: ";

    int x1{};
    int x2{};
    std::cin >> x1 >> x2;

    std::cout << "You entered: " << x1 << " and " << x2 << '\n';

    std::cout << "Enter two numbers: ";
    int x3{};
    std::cin >> x3;

    int x4{};
    std::cin >> x4;

    std::cout << "You entered " << x3 << " and " << x4 << '\n';

    std::cout << "Enter three numbers: ";
    int a{};
    std::cin >> a;

    int b{};
    std::cin >> b;

    int c{};
    std::cin >> c;

    std::cout << "You entered " << a << ", " << b << " and " << c << ".\n";
}

