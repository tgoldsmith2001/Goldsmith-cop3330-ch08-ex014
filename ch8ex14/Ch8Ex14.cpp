/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Goldsmith
 */

#include "std_lib_facilities.h"
/*
The const modifier to the parameters means that the parameter cannot be altered within the function.
This essentially means that the variable is "read only". This appears to be useful as it increases
the security of the variable ensuring it remains constant. This would be especially important if a 
variable is simply needed as a reference.
Some people may not do this because it doesn't really affect the results of the program, it simply
adds a higher level of security to the program. 
*/

int test1(int a){
    int b =4;
    a=b;
    return a;
}
/*
The following function does not work as a const cannot be updated
int test2( const int a){
    int b =4;
    a=b;
    return a;
}
*/

int test3(const int a){
    int b = 4;
    b=a;
    return b;
}

int main(){
    //This shows how a normal non const variable can be changed
    cout <<"Normal parameter... Changing a=5 to a=4...Result: " <<test1(5) <<"\n";

    /*The following line throws an error because we are trying to alter a constant parameter which is "read only"
    cout <<"Const parameter... Changing a=5 to a=4...Result " <<test2(5) <<"\n";*/

    //Shows that a const can be used to alter a different variable as long as it stays constant
    cout <<"Const parameter... using input const a=5 as a reference to alter B...Resxult: " <<test3(5) <<"\n";
    }
