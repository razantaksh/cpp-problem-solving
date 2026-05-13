
#include <iostream>
using namespace std;

 int ReadPositiveNumber(string message)
 {
	 int number; 
	 
	 do
	 {
		 cout << message << endl;
		 cin >> number;


	 } while (number <= 0);

		 return number;

 }
 int ReverseNumber(int number)
 {
	 int remainder = 0, number2 = 0;

	 while (number > 0)
	 {
		 remainder = number % 10;
		 number = number / 10;
		 number2 = number2 * 10 + remainder;

	 }

	 return number2;


 }
 bool IsPalindrome(int number)
 {
	 return number == ReverseNumber(number)
 }
 

int main()
{
   
	int number = ReadPositiveNumber("Pleas enter a positive number?");

	if (IsPalindrome(number))
	{
		cout << " yes, it is a palindrome number \n";
	}
	else
		cout << "no, it is not a palindrome number\n";

	return 0;


}

