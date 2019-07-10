/* Udemy sect 8 challenge, boolean operators
*******************************************************************************/
#include <iostream>

int main()
{
    /*Write a program that asks the user for a (integer) number of cents, 
    and outputs how many of each type of coin would represent that amount 
    with the fewest total number of coins.  When you run your program, 
    it should match the following format:
        Please enter an amount in cents.
        87
        Your change will be:
        Dollar: 0
        Quarter: 3
        Dime: 1
        Nickel: 0
        Penny: 2
    */
    int cents{0};
    int dollar, quarter, dime, nickel, penny;
    std::cout<<"Please enter an integer number of cents : ";
    std::cin>>cents;
    
    dollar = cents/100;
    cents %=100;
    
    quarter = cents/25;
    cents %=25;
    
    dime = cents/10;
    cents %= 10;
    
    nickel = cents/5;
    penny = cents%5;
    
    std::cout << "You can provide this change as follows:"<<std::endl;
    std::cout<<"dollars     : "<<dollar<<std::endl;
    std::cout<<"quarters    : "<<quarter<<std::endl;
    std::cout<<"dimes       : "<<dime<<std::endl;
    std::cout<<"nickels     : "<<nickel<<std::endl;
    std::cout<<"pennies     : "<<penny<<std::endl;
    
    return 0;
}
