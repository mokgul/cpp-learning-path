#include <iostream>

#include "IOStreamIntroduction.h"
#include "VariableAssignment.h"

int main()
{
    VariableAssignment variableAssignment;

    //Assignment
    variableAssignment.Assignment();

    //Initialization
    variableAssignment.Initialization();

    //Initialization Forms
    variableAssignment.InitializationForms();

    //List Initialization
    variableAssignment.ListInitialization();

    //Multiple Initialization
    variableAssignment.MultipleInitialization();

    //Unused Initialized Variables
    variableAssignment.UnusedInitializedVariables();

    IOStreamIntroduction ioStreamIntroduction;

    // std::cout
    ioStreamIntroduction.STDCout();

    // std::cin
    ioStreamIntroduction.STDCin();

    return 0;
}
