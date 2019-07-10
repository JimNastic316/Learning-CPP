/******************************************************************************
Author: Jim Underwood
Date:   7/9/2019
Description: This program asks a user to enter a number from 1 through 10, and 
            then displays the Roman numeral verison.    
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    bool isValid{false};
    int num{0};
    while(!isValid)
    {
        cout << "Please enter an integer between 1 and 10 ";
        cin>>num;
        
        if(num<1||num>10)
            cout<<"\nInvalid entry\n";
        else
        {
            cout<<"Valid";
            isValid=true;
        }
        
    }
    switch(num)
    {
        case 1: cout<<"The Roman Numeral for "<< num << " is I";
                break;
        case 2: cout<<"The Roman Numeral for "<< num << " is II";
                break;
        case 3: cout<<"The Roman Numeral for "<< num << " is III";
                break;
        case 4: cout<<"The Roman Numeral for "<< num << " is IV";
                break;
        case 5: cout<<"The Roman Numeral for "<< num << " is V";
                break;
        case 6: cout<<"The Roman Numeral for "<< num << " is VI";
                break;
        case 7: cout<<"The Roman Numeral for "<< num << " is VII";
                break;
        case 8: cout<<"The Roman Numeral for "<< num << " is VIII";
                break;
        case 9: cout<<"The Roman Numeral for "<< num << " is IX";
                break;
        case 10: cout<<"The Roman Numeral for "<< num << " is X";   
                break;
    }
    return 0;
}

