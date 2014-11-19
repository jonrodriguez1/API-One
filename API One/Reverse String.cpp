// API Challenge #1

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string words;
	string newPhrase;
	cout << "Type in a string to reverse: ";
	std::getline(cin, words);
	for (int i = 0; i < words.length(); i++)
	{
		newPhrase = words;
		newPhrase[i] = newPhrase[words.length() -1 - i];
		cout << newPhrase[i];
	}
	cout << endl;
	return 0;
}