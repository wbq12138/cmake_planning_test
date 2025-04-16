#include <iostream>
#include "process.h"
using std::cout, std::endl;

int main()
{
cout << "planing start"<< endl;
Process pro;
pro.planProcess(); // Call the planProcess method from the Process class
cout << "planing end"<< endl; 
    return 0;
}