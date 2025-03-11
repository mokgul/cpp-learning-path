//
// Created by mokgul on 3/11/25.
//
#include <iostream>
#include "VariableAssignment.h"

VariableAssignment::VariableAssignment()
{

}

void VariableAssignment::Assignment()
{
    int width;
    width = 5;

    std::cout << width;

    width = 7;
    std::cout << width;
    std::cout << std::endl;
}

void VariableAssignment::Initialization()
{
    int width { 5 };
    std::cout << width;
    std::cout << std::endl;
}

void VariableAssignment::InitializationForms()
{
    int a;          // default-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5;      // copy-initialization (initial value after equals sign)
    int c ( 6 );    // direct-initialization (initial value in parentheses)

    // Modern initialization forms (preferred):
    int d { 7 };    // direct-list-initialization (initial value in braces)
    int e {};       // value-initialization (empty braces) / zero-initialization to value 0

    std::cout << std::endl;
}

void VariableAssignment::ListInitialization()
{
    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler
    // to convert 4.5 o a value an int can hold.
    // This is called a narrowing conversion, since the fractional part is lost.

    //int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

    //w1 = 4.5;       // okay: copy-assignment allows narrows conversion of 4.5 to 4 WARNING!

    int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    int w3 ( 4.5 ); // compiles: w3 direct-initialized to value 4

}

void VariableAssignment::MultipleInitialization()
{
    // Initializing variables on the same row is not wrong but is not a good practice.
    // It could lead to reduced readability and potential confusion, especially when using
    // different initialization styles. It also makes it harder to track changes, debug issues,
    // and maintain consistency in larger codebases.

    int a = 5, b = 6;       // copy-initialization
    int c ( 7 ), d ( 8 );   // direct-initialization
    int e { 9 }, f ( 10 );  // direct-list-initialization
    int i {}, j {};         // value-initialization

    //int a, b = 5;           // wrong: a is not initialized to 5!
    int x = 5, y = 5;       // correct: x and y are initialized to 5
}

void VariableAssignment::UnusedInitializedVariables()
{
    int x { 5 };    // variable x defined

    // but not used anywhere
    // depending on "treat warnings as errors" setting this might lead to compilation error
    // there are several options to deal with that
    // 1. If really unused, removing it won't affect the code
    // 2. Use the variable somewhere

    std::cout << x;
    std::cout << std::endl;

    // 3. [[maybe_unused]] attribute
    // Consider we have a set of math/physics values that we use in many different programs

    // double pi { 3.14159 };
    // double gravity { 9.81 };
    // double phi { 1.61803 };

    // std::cout << pi;    // pi is used
    // std::cout << phi;   // phi is used

    // The compiler might complain about gravity being unused

    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used
}

