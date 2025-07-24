
#include <iostream>
using namespace std;   

int main() {         
    cout << "Learning C++ , It's Amazing !" << endl;
    return 0;  
}



//To run code via terminal
//     g++ filename.cpp -o filename.exe
//     .\filename.exe






//  1. What is C++?
// Developed by: Bjarne Stroustrup in the early 1980s.

// Paradigm: Multi-paradigm — supports procedural, object-oriented, and generic programming.

// Use cases: System/software development, game development, real-time simulations, embedded systems, and competitive programming.

// 🏗️ 2. Basic Structure of a C++ Program
// cpp
// Copy
// Edit
// #include <iostream>    // Preprocessor directive
// using namespace std;   // Use the standard namespace

// int main() {           // Main function - program entry point
//     cout << "Hello, World!" << endl;  // Output
//     return 0;          // Return 0 from main
// }
// 🧮 3. Variables and Data Types
// Primitive Types: int, float, double, char, bool

// Modifiers: long, short, signed, unsigned

// Example:

// cpp
// Copy
// Edit
// int age = 25;
// float weight = 65.5;
// char grade = 'A';
// bool isPassed = true;
// ➕ 4. Operators
// Arithmetic: +, -, *, /, %

// Relational: ==, !=, <, >, <=, >=

// Logical: &&, ||, !

// Assignment: =, +=, -=, etc.

// Unary: ++, --

// 🔁 5. Control Structures
// a) Conditional
// cpp
// Copy
// Edit
// if (age > 18) {
//     cout << "Adult";
// } else {
//     cout << "Minor";
// }
// b) Loops
// cpp
// Copy
// Edit
// for (int i = 0; i < 5; i++) {
//     cout << i << " ";
// }

// while (x < 10) {
//     x++;
// }

// do {
//     x--;
// } while (x > 0);
// 🧩 6. Functions
// Syntax:

// cpp
// Copy
// Edit
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     cout << add(3, 4);
// }
// Functions can be passed by value or reference.

// 🗃️ 7. Arrays and Strings
// cpp
// Copy
// Edit
// int nums[5] = {1, 2, 3, 4, 5};
// string name = "Arnav";
// char grade[5] = {'A', 'B', 'C', 'D', 'F'};
// 🧱 8. Object-Oriented Programming (OOP)
// a) Classes and Objects
// cpp
// Copy
// Edit
// class Student {
// public:
//     string name;
//     int age;

//     void introduce() {
//         cout << "Name: " << name << ", Age: " << age;
//     }
// };

// int main() {
//     Student s1;
//     s1.name = "Arnav";
//     s1.age = 20;
//     s1.introduce();
// }
// b) OOP Concepts
// Encapsulation

// Abstraction

// Inheritance

// Polymorphism

// 📚 9. Important Concepts
// Pointers

// Dynamic Memory Allocation (new/delete)

// File Handling (ifstream, ofstream)

// STL (Standard Template Library) – includes:

// Vectors

// Sets

// Maps

// Algorithms

// 🔧 10. Compilation and Execution
// Save file as program.cpp

// Compile using: g++ program.cpp -o program

// Run: ./program (on Linux/macOS) or program.exe (on Windows)

// 🛠️ Tools to Practice
// IDEs: Code::Blocks, Visual Studio, Dev C++

// Online Compilers: Repl.it, GeeksforGeeks, LeetCode, HackerRank

// Would you like me to teach you C++ step-by-step from the basics to advanced? I can create a structured roadmap with practice tasks for each concept.








// You said:
// #include <iostream>    // Preprocessor directive
// using namespace std;   // Use the standard namespace

// int main() {           // Main function - program entry point
//     cout << "Hello, World!" << endl;  // Output
//     return 0;          // Return 0 from main
// }  explain each word use and function in detail


// ChatGPT said:
// Let’s break down your C++ code line by line and word by word to explain what each part does:

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