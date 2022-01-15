#include <iostream> //this is a library. It is so that we can access the code inside the library and use it in the funtion

using namespace std; //The namspace is a collection of code that is use to divide it into a specific area of functionality
                     //The std is used to refrence the library so that we can acces its functions if we donot used std we need to refrence it manual example: from cout to std::cout

//fuctions are a block of code that will perform a particular task 
int main() //this is special function called the entry point in every c++ programming we must create a function that will execute the code immediately in this case its the main(){ }
{
    cout << "lol im very funny" << "gay \n"; //cout is used to output any value that is inserted you can add also add another value that u want to insert by adding a <<
    cout << "lol im very funny" << "gay"; //the endl or \n can be used as line break
    return 0; // when returning a value it must be returng the value of the same data type of function. in this case the function is an integer so the return value must be an interger.
}