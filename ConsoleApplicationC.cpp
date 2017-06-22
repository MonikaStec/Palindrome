

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>;

class Palindrome
{

public:
	static bool isPalindrome(const std::string& word)
	{
		if (word.size() == 0) return false;
		std::string temp = word;
		std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		std::vector <char> a;
		std::copy(temp.begin(), temp.end(), back_inserter(a));
		std::vector <char> b;
		for (int i = a.size() - 1; i >= 0; --i) {
			b.push_back(a[i]);
		
		}
		int j = 0;
		bool result = false;
		
		while (a[j] == b[j] && j < a.size()/2) {
			
				j++;
				if (j == a.size() / 2)result = true;
		}

		
		return result;
	}
};


int main()
{
	std::cout << Palindrome::isPalindrome("Deleveled")<<std::endl;
	system("PAUSE");
}
