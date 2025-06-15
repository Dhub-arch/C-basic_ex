#include <iostream>
#include <string>
#include <conio.h> 

using namespace std;

int main() {
  string pass ="";
  char ch;
  cout << "Enter pass\n";
  ch = _getch();
  while(ch != 13){//character 13 is Enter
     pass.push_back(ch);
     cout << '*';
     ch = _getch();
 }
 if(pass == "dinesh"){
   cout << "\nAccess granted :P\n";
  
 }else{
   cout << "\nAccess aborted...\n";|
 }
  
}