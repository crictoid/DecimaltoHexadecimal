// Mark Bulmer - CSC 234 - 4-28-2022 
// Decimal to Hexadecimal Converter

#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Enter a decimal number: ";
  int decimal;
  int input;
  cin >> decimal;
  input = decimal;
	
  string decimalToHex = "";
    
  while (decimal != 0)
  {
    int value = decimal % 16; 
      
    char number = (value <= 9 && value >= 0) ? (value + '0') : (value - 10 + 'A');
      
    decimalToHex = number + decimalToHex;
    decimal = decimal / 16;
  }
    
  cout << input << " is hex number " << decimalToHex << endl;

  return 0;
}