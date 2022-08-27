#include <iostream>
#include<string>
// Define is_palindrome() here:

std::string is_palindrome(std::string text){
int temp=100;
for(int i=0 , j=text.size()-1 ; i<text.size() && j>=0 ; i++, j--){
    if(text[i]==text[j]){
      if(i==(text.size()-1) && j==0 && temp==100){
        return "true";
    }
    }
    else{
      temp=200;
      if(i==(text.size()-1) && j==0 && temp==200){
        return "false";
      }
    }
  }
}
int main() {

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";

}
