/*********************************************************
Overloading Stream insertion and extraction operators p745
This program demonstrates the Length class's overloaded
prefix ++, post fix ++, and stream operators
*********************************************************/
#include <iostream> 
#include "Length1.h" 
using namespace std;

int main()    
{
    Length first(0), second(1,9), c(0);
    cout << "Demonstrating prefixx ++ operator and output operator.\n";
    for (int count =0; count < 4; count++)
    {
        first = ++second;
        cout << "First: " << first << ", Second: "<<second<<".\n";
        cout << "First < Second is; " << (first<second);
    }


    cout << "Demonstrating postfix ++ operator and output operator.\n";
    for (int count =0; count < 4; count++)
    {
        first = second++;
        cout << "First; " << first << ", Second: "<<second<<".\n";
        cout << "First < Second is; " << (first<second);
    }    
    
    cout <<"\nDemonstrating input and output operators.\n";
    cin >> c;
    cout <<"You entered " << c<<"."<<endl;


    
    return 0;
}
