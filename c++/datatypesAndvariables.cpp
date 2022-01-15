#include <iostream>

using namespace std;

// Note: when using the string datatype make sure to include it because it is not build into the program 

// variable can be stored into any datatypes
// int - any whole number eithe positive or negative or 0
// float - any number that is a decimal either negative or positive or 0 
// string - anything that is within the "" is a string it can be anything
// bool - true or false / 0's and 1's
// char - any single element that is place within a single ''. However cannot put more than a single element within the single ''

// //-single line comment, /**/-muli line comment
// when putting a float into the int the programe will cutout the decimal part
// Note: when defining a variable make sure to name it uniquely so that it doesnt have similar name,
//       cannot have a special charcter. You can name your variable with string, numbers and a _ but
//       cannot start your variable name with a number also make your variables discriptive.

int main(){
    // we can define the variable without intializng it or assign it and we can define a variable withing the same line.
    // we can change the value of the variable, after the previouse value has been executed.
    // int x = 2; //to define a varible 1st define what type of varibale it is in this case it's "int" then name the variable, "x" then assigne it "=" and give a value, "2".
    int x, y;
    x = 6;
    x = 7;
    y = 9;
    cout << x << y; // we can execute 2 variables on the same line.
}