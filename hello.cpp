// Allows for read or write to the standard input/output streams.
#include <iostream> 
// Allows the compiler to use symbol names defined in the std namespace.
using namespace std; 

// main class that is used to execute your code.
int main() {
    //cout is the standard output stream used to print to the screen.
    cout << "Hello World"; 
    /* 
        The method is declared as "int main" and thus should
        return an integer value. Generally, 0 indicates that
        the program ran successfully.
    */
    return 0;
}

/* 
    Compile with g++ filename -o compiledname
    
    Ex. g++ basics.cpp -o basics
    
    If the "-o" option is left out the generated 
    file will default to "a"
*/