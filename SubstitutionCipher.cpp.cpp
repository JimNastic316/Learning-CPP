/******************************************************************************
Author:Jim Underwood
Date: 7/17/2019
Description: 
Section 10 challenge from Udemy Class: 
Beginning C++ Programming from Beginner to Beyond

Write a program that asks the user to enter a secret message that will
be a string and then encrypt that message using the substitution cypher and display the
encrypted message.

Then take that encrypted message and decrypt it back to the original message.
Use two strings for your substitution.

You can have one string for the alphabet.
alphabet = abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
key = XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr 
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {" XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"}; 
    string message{};
    
    cout << "Enter the message that you want to be coded:\n";
    getline (cin, message);
    
    string encryptedMessage;
    
    cout<<"\nEncrypting message..."<<endl;
    
    for (char c:message)                    //For every character in message, find the character             
    {
        size_t position = alphabet.find(c);    
        if(position!=string::npos)          // If the position is not equal to no position
        {                                   // it must have been found, so use
          char newChar{key.at(position)};   // the key equivalent, and add it
          encryptedMessage+=newChar;        // to the encryptedMessage
        }
        else
        {
            encryptedMessage+=c;            // If not found in alphabet, just use it.
        }
    }
    
    cout<<"\nEncrypted Message.\n" <<encryptedMessage<<endl;
    
    string decryptedMessage{};
    
    cout<<"\nDecrypting message..."<<endl;
    
    for(char c:encryptedMessage)
    {
       size_t position = key.find(c);    
        if(position!=string::npos)              // If the position is not equal to no position
        {                                       // it must have been found, so use the alphabet
          char newChar{alphabet.at(position)};  // equivalent and add it to the decryptedMessage 
          decryptedMessage+=newChar;            
        }
        else
        {
            decryptedMessage+=c;            // If not found in alphabet, just use it.
        }  
    }
    cout<<"\nDecrypted Message.\n" <<decryptedMessage<<endl;
    
    
    
    return 0;
}


