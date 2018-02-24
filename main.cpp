//author: Noah Huff

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;      
  for ( int i = 0; i > -1; i++ ) {
                
     cout<<"\n==GROCERY LIST MANAGER==";
     cout<<"\nEnter your choice: ";
     cout<<"\n (A)dd an item";
     cout<<"\n (Q)uit";
     cout<<"\nYour choice (A/Q): ";
     cin>>input;
     if ( input == 'q' || input == 'Q' ) {
         i = -6;
     }
     if ( input == 'a' || input == 'A' ) {
       cout<<"What is the item?";
       if ( numItems < 5 ) {
          cin>>list[numItems];
          numItems++;
       } else { 
          cout<<"\nYou'll need a bigger list!";                                                                                }
     }
  }   
  return 0;                                                                                                   
}
