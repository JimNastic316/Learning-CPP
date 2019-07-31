/***************************************************************
* Author: Jim Underwood
* Date: 07/10/2019
* Description - C++ challenge
This challenge is about using a collection or a list of integers 
and allowing the user to select a few
options from the menu.
So here's the menu.
P - user presses P you print the elements of the list.
A - you add a number to the list    
M - Display the mean of the numbers
S - Display the smallest number 
L - Display the largest number
Q - quit
Anything else you should tell them invalid valid choice and so
forth.
****************************************************************/
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

char displayMenu(); //Function prototype

int howManyNumbers(); // Function prototype
    


  
void selectedP(vector<int>, int); // Function prototypes
void selectedA(vector<int> &, int &);
void selectedM(vector<int>, int);
void selectedS(vector<int>, int);
void selectedL(vector<int>, int); 

int main()
{
   
    char selection;
    
    int numItems{};

    numItems = howManyNumbers();
    vector<int> data{};
    for (int i{1}; i<=numItems;i++)
    {
        int dataItem{};
        cout<<"Enter data item "<<i<<": ";
        cin >> dataItem;
        data.push_back(dataItem);
    }
 
    selection=displayMenu();
    cout<<"Selection from menu: "<<selection<<endl;
    
    while(selection!='q'&& selection!='Q')
    {
        if (selection=='P' || selection=='p')
        {
            selectedP(data, numItems);  
        }
        
        if (selection=='A' || selection=='a')
        {
            selectedA(data, numItems);
        }
        
        if (selection=='M' || selection=='m')
        {
            selectedM(data, numItems);
 
        }
        
        if (selection=='S' || selection=='s')
        {    
            selectedS(data, numItems);
        }
        
        if (selection=='L' || selection=='l')
        {    

            selectedL(data, numItems);
        }
        selection=displayMenu();
    }
    return 0;
}

    
/**********************************************
**              displayMenu                  **
** This function displays the menu and gets  **
** validates and returns input from the user.**
**********************************************/ 
char displayMenu()
{
    char menuChoice{'9'};
    bool validInput{false};
        
    do
    {
        cout<<"-----------------------------------------\n"
            <<"P - Print numbers\n"
            <<"A - Add a number\n"
            <<"M - Display mean of the numbers\n"
            <<"S - Display the smallest number\n"
            <<"L - Display the largest number\n"
            <<"Q - Quit\n\n"
            <<"Enter your choice: ";
    
        // Get input from user  
        cin>>menuChoice;
        //cout<<"\n input "<< menuChoice;
        // If user enters invalid input, display 
        // "Unknown selection, please try again" - and the menu options
        // should redisplay again.
        if(menuChoice != 'P'&& menuChoice != 'p'
            &&menuChoice != 'A'&& menuChoice != 'a'
            &&menuChoice !='M'&& menuChoice != 'm'
            &&menuChoice != 'S'&& menuChoice != 's'
            &&menuChoice != 'L'&& menuChoice != 'l'
            &&menuChoice != 'Q'&& menuChoice != 'q')
           {
               cout<<"\nUnknown selection, please try again\n";
          }
      else 
      {
              validInput = true;
          }
       } while(!validInput);    
    return menuChoice;
        
}
    
/*************************************************
**              howManyNumbers                  **
** This function asks the user how many numbers **
** they have to enter, and returns the answer   **
** to main.                                     **
*************************************************/    
int howManyNumbers()
{
        int howManyEntered{};
        cout<<"How many numbers do you have? ";
        cin>> howManyEntered;
        return howManyEntered;       
}    
        
/*************************************************
**                selectedP()
** This function displays the vector of Integers
**************************************************/
void selectedP(vector<int> vectorOfIntegers, int numberOfItems)
{
    cout<<"[ ";
            for (int i{0}; i<numberOfItems;i++)
                cout<<vectorOfIntegers[i]<<" ";
             cout<<"]"<<endl;
}

/**************************************************
**               selectedA()
** This function adds and item to the 
**           vector of integers
**************************************************/
void selectedA(vector<int> &data, int &numItems)
{
    int dataItem{};
    cout<<"Enter data item to add: ";
    cin >> dataItem;
    data.push_back(dataItem);
    cout<<dataItem<<" added"<<endl;
    cout<<"\nNow the numbers are: \n";
    cout<<"[ ";
    for (int i{0}; i<=numItems;i++)
        cout<<data[i]<<" ";
    cout<<"]"<<endl; 
    numItems++;
    cout<<"In selectedA, numItems = "<<numItems<<endl;
}


/********************************************************
**                    selectedM()
** This function calculates and displays the mean 
*********************************************************/
void selectedM(vector<int> data, int numItems)
{
    double total{0.0};
    double mean{0.0};
    for (int i{0}; i<=numItems;i++)
        total += data[i];
    mean = total/(data.size());
    cout<<"\nThe mean of the list = "<<mean<<"."<<endl;    
}


/**********************************************************
**                      selectedS()
** Function displays the smallest number in the vector
***********************************************************/
void selectedS(vector<int> data, int numItems)
{
            
    int smallestNumber=data[0];
    for (int i{0}; i<numItems;i++)
        if(smallestNumber>=data[i])
            {
                smallestNumber=data[i];
            }
    cout<<"The smallest number is: "<<smallestNumber<<"."<<endl;    
}

/***********************************************************
**                     selectedL()
** Function displays the largest number in the vector
***********************************************************/
void selectedL(vector<int> data, int numItems)
{
    int largestNumber=data[0];
    for (int i{0}; i<numItems;i++)
        if(largestNumber<=data[i])
            {
                largestNumber=data[i];
            }
    cout<<"The largest number is: "<<largestNumber<<"."<<endl;    
}










