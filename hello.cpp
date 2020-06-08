/* 
    Compile with g++ filename -o compiledname.
    
    Ex. g++ hello.cpp -o hello
    
    If the "-o" option is left out the generated 
    file will default to "a".

    To run the executable, use "./a" .
*/

// Allows for read or write to the standard input/output streams.
#include <iostream> 
/* 
    Allows the compiler to use symbol names defined in the std namespace.
    
    using namespace std; 

    EDIT: This line of code is bad practice as you could have potential
    conflicts in your global namespace should function names and their
    parameters match from different libraries.
*/

/* 
    Allows the omittance of std:: when using cout, but 
    without bringing in the entire std namespace.
*/
using std::cout;

// main class that is used to execute your code.

/*
    Prints out Hello World
    @return: int
*/
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