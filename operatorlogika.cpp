#include <iostream>
#include <string>
using namespace std;

int main() {
    bool output;
    int a, b; // Variables for user input
    string userInput; // String for getline example

    // Print bool values as "true" or "false"
    cout << std::boolalpha;

    // Prompt user to enter two numbers
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Operator "==" (sama dengan)
    output = (a <= b);
    cout << "Output a < b: " << output << endl;

     // Operator "not" (!), membalikkan hasil
     output = !(a == b);
     cout << "Output !(a == b): " << output << endl;
 
     output = !(a == a); // Example static logic
     cout << "Output !(a == a): " << output << endl;
 
     // Operator "and" (&&), hanya true jika kedua kondisi benar
     output = (a < b) && (a > 1);
     cout << "Output (a < b) && (a > 1): " << output << endl;
 
     output = (a < b) && (a < 1);
     cout << "Output (a < b) && (a < 1): " << output << endl;
 
     output = (a > b) && (a > 1);
     cout << "Output (a > b) && (a > 1): " << output << endl;
 
     output = (a < 1) && (a > 3);
     cout << "Output (a < 1) && (a > 3): " << output << endl;
     
 
     // Operator "or" (||), hanya false jika semua kondisi salah
     output = (a < b) || (a > 1);
     cout << "Output (a < b) || (a > 1): " << output << endl;
 
     output = (a < b) || (a < 1);
     cout << "Output (a < b) || (a < 1): " << output << endl;
 
     output = (a > b) || (a > 1);
     cout << "Output (a > b) || (a > 1): " << output << endl;
 
     output = (a < 1) || (a > 3);
     cout << "Output (a < 1) || (a > 3): " << output << endl;
 
     // Using getline to accept a string input
     cin.ignore(); // Clear buffer after using cin
     cout << "Enter a string (getline example): ";
     getline(cin, userInput);
     cout << "You entered: " << userInput << endl;
 

   
    return 0;
}
