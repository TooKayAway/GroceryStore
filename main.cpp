//author: Noah Huff

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  char input;
  string add;
  for ( int i = 0; i > -1; i++ ) {
     add = " ";           
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
       cout<<"What is the item?\n";
       cin>>add;
       list.push_back(add);
     }
  }
  cout<<"==ITEMS TO BUY=="<<endl;
  if ( list.size() != 0 ) {

     for ( int i = 0; i < list.size(); i++ ) {

         cout<< i + 1 <<" "<<list[i]<<endl;

     }

  } else {
        cout<<"No items to buy!"<<endl;
  }
  return 0;                                                                                                   
}
