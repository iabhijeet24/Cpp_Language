
#include <iostream>
using namespace std;   

int main() {         
    cout << "Learning C++ , It's Amazing !" << endl;
    return 0;  
}



// To run code via terminal:
//     g++ filename.cpp -o filename.exe     // Compiles the program
//     .\filename.exe                       // Runs the compiled executable (on Windows)







// 
// #include <iostream>    // Preprocessor directive
// using namespace std;   // Use the standard namespace

// int main() {           // Main function - program entry point
//     cout << "Hello, World!" << endl;  // Output
//     return 0;          // Return 0 from main
// }  explain each word use and function in detail



// ✅ 1. #include <iostream>
// #include: This is a preprocessor directive. It tells the compiler to include the contents of a file before actual compilation begins.

// <iostream>: Stands for Input/Output Stream. It is a standard C++ library that allows the program to perform input (cin) and output (cout) operations using streams.

// 🔹 In short: This line enables input/output using cin and cout.

// ✅ 2. using namespace std;
// namespace: In C++, namespaces are used to organize code into logical groups and prevent name collisions.

// std: Short for standard. It’s the namespace where all the standard C++ library functions and objects (like cout, cin, endl) are defined.

// using namespace std;: This tells the compiler to use the standard namespace, so you don’t need to prefix std:: every time.

// 🔹 Without this, you'd have to write: std::cout << "Hello";

// ✅ 3. int main()
// int: This means the function returns an integer value. In this case, it returns 0 to indicate successful execution.

// main(): This is the starting point of every C++ program. The program always begins execution from the main() function.

// 🔹 This is where your program starts running.

// ✅ 4. { ... }
// These are curly braces that define the body of the function.

// All statements inside {} are considered part of the main() function.

// ✅ 5. cout << "Hello, World!" << endl;
// Let’s break this into parts:

// 🔹 cout
// cout stands for console output.

// It's an object used to display output to the screen.

// It is defined in the iostream library and belongs to the std namespace.

// 🔹 <<
// Called the insertion operator.

// It inserts data into the output stream. In this case, it sends "Hello, World!" to cout.

// 🔹 "Hello, World!"
// A string literal.

// This is the actual message that gets printed on the screen.

// 🔹 << endl
// endl stands for end line.

// It ends the current line and moves the cursor to the next line (like pressing Enter).

// It also flushes the output buffer, ensuring all output is displayed immediately.

// 🔹 ;
// This is a semicolon, which marks the end of a statement in C++.

// Every instruction must end with ;.

// ✅ 6. return 0;
// This statement ends the main() function and returns 0 to the operating system.

// Returning 0 is a signal that the program executed successfully.

// If you return a non-zero value, it usually indicates an error.