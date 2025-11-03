/*
Pseudocode
I need to take in user input for 3 integers by creating the ints and using cin and cout to 
get the information from the end user. Next I need to create an integer pointer to dynamic 
memory for each int. I can do this by using new and delete to allocate memory and remove
memory respectively. I also need to display its contents and pointers to the end user with cout
*/


#include <iostream>
// library for end user input and output

using namespace std;
// standard namespace

int main()
{
    // main function
    int a, b, c;
    // integers a b and c

    cout << "Please enter 3 whole numbers \n";
    cin >> a >> b >> c;
    // prompt users for input and record it in respective variables using operator chaining

    int *pA = new int;
    int *pB = new int;
    int *pC = new int;
    // integers dereferenced for points a b and c and new int are created at runtime

    *pA = a;
    *pB = b;
    *pC = c;
    // sets values to adresses

    cout << "\n Variables" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    // print variables to end user

    cout << "\n Pointers" << endl;
    cout << "*pA = " << *pA << endl;
    cout << "*pB = " << *pB << endl;
    cout << "*pC = " << *pC << endl;
    // print pointers to end user

    cout << "\n Memory Adresses" << endl;
    cout << "pA = " << pA << endl;
    cout << "pB = " << pB << endl;
    cout << "pC = " << pC << endl;
    // memory locations

    delete pA;
    delete pB;
    delete pC;
    // delete dynamically allocated memory

    return 0;
    // end program
}


/*
Recources:
https://dev.to/denvercoder1/c-pointers-and-dynamic-memory-allocation-1emi
https://www.youtube.com/watch?v=27QLVnn74Eg
https://www.geeksforgeeks.org/cpp/printing-the-adderss-of-an-object-of-class-in-cpp/?utm_source=chatgpt.com
https://stackoverflow.com/questions/32914298/print-value-and-address-of-pointer-defined-in-function?utm_source=chatgpt.com
https://stackoverflow.com/questions/7425318/multiple-inputs-on-one-line
https://www.youtube.com/watch?v=dKkGJ2epuYE
*/