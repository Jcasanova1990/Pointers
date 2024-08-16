#include <iostream> // Includes the standard input-output stream library
using namespace std; // Allows the use of standard library names without the std:: prefix

int main()
{
    // Declare an integer variable 'a' and initialize it with the value 5
    int a = 5;
    
    // Declare a pointer 'p' that stores the memory address of the variable 'a'
    int *p = &a;

    // Declare a pointer to a pointer 'p2' that stores the memory address of the pointer 'p'
    int **p2 = &p;

    // Output the value of 'a' by dereferencing the pointer 'p'
    cout << *p << endl;   // Prints 5

    // Output the value of 'a' by dereferencing the pointer 'p2' twice
    cout << **p2 << endl; // Prints 5

    return 0; // Return 0 indicates successful execution
}
