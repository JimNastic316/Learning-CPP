/******************************************************************************
Write a C++ program that displays a Letter Pyramid from a user-provided std::string.

Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

It's much easier to understand the Letter Pyramid given examples.

If the user enters the string "ABC", then your program should display:

  A                                                                                                                    
 ABA                                                                                                                   
ABCBA 

If the user enters the string, "12345", then your program should display:

 

    1                                                                                                                  
   121                                                                                                                 
  12321                                                                                                                
 1234321                                                                                                               
123454321

If the user enters 'ABCDEFG', then your program should display:

 

      A                                                                                                                
     ABA                                                                                                               
    ABCBA                                                                                                              
   ABCDCBA                                                                                                             
  ABCDEDCBA                                                                                                            
 ABCDEFEDCBA                                                                                                           
ABCDEFGFEDCBA

If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display:

                         A
                        ABA
                       ABCBA
                      ABCDCBA
                     ABCDEDCBA
                    ABCDEFEDCBA
                   ABCDEFGFEDCBA
                  ABCDEFGHGFEDCBA
                 ABCDEFGHIHGFEDCBA
                ABCDEFGHIJIHGFEDCBA
               ABCDEFGHIJKJIHGFEDCBA
              ABCDEFGHIJKLKJIHGFEDCBA
             ABCDEFGHIJKLMLKJIHGFEDCBA
            ABCDEFGHIJKLMNMLKJIHGFEDCBA
           ABCDEFGHIJKLMNONMLKJIHGFEDCBA
          ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
         ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
        ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
       ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
      ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
     ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
    ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
   ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
  ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA
If the user enters "C++isFun!", then your program should display:

 

        C                                                                                                              
       C+C                                                                                                             
      C+++C                                                                                                            
     C++i++C                                                                                                           
    C++isi++C                                                                                                          
   C++isFsi++C                                                                                                         
  C++isFuFsi++C                                                                                                        
 C++isFunuFsi++C                                                                                                       
C++isFun!nuFsi++C


Think about the problem before you begin and break it down into steps.

This can be a very challenging problem to solve!

Don't forget to paste your code solution when you submit.

Have fun!

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userInput{};
    // Get the input from the user and store it in a std::string variable
    cout<<"Enter a string, and I will build a letter pyramid out of it:\n";
    getline(cin,userInput);
    
    // Loop for each letter in the string entered by the user
    size_t inputLength = userInput.length();
    int row=0;
    for(char c:userInput)
    {
        // Determine how many blank spaces must be displayed before the current row and display them
        int numSpaces = inputLength - row;
        while(numSpaces>0)
        {
            cout<<" ";
            numSpaces--;
        }
        // Determine how many letters must be displayed before the current character and display them
        for(int j=0;j<row;j++)
        {
            cout<<userInput.at(j);
        }
        // Display the current 'center' character
        cout<<c;
        
        // Display the remaining characters in reverse order
        for(int j=row-1; j>=0;j--)
        {
            cout<<userInput.at(j);
        }
        // Complete the row with a new line
        cout<<endl;
        row++;
    }
    
    return 0;
}

