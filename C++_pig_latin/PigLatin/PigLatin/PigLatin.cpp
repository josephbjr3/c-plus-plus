// PigLatin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string leftTrim(string);
string getWord(string &);
string toPigLatin(string);

int _tmain(int argc, _TCHAR* argv[])
{
	string str;        // user entered sentence
	string pigLatin = "";   // translated sentence

	// Get a sentence from the user.
	cout << "Enter a sentence that you want translated into Pig Latin.\n";
	getline(cin, str);

	// Translate each word and create a new string.
	while (str.size() > 0)
	{
		// Get the next word from the string.
		string word = getWord(str);

		// Translate the word to Pig Latin.
		word = toPigLatin(word);

		// Add the word and a space to the pig string.
		pigLatin = pigLatin + word + " ";
	}

	// Display the translated sentence.
	cout << pigLatin << endl;
	getchar();
	return 0;
}


string trim(string str)
{
	while (str[0] == ' ')
	{
		// Erase 1 character at index 0.
		str.erase(0, 1);
	}
	return str;
}

// The popWord function accepts a string argument,
// passed by reference. It removes the first word
// from the string and then returns that word.

string getWord(string &str)
{
	// Trim any spaces from the beginning of the string.
	str = trim(str);

	// Locate the first space, or the end of the string.
	int index = 0;
	while (str[index] != ' ' && index < str.size())
		index++;

	// Copy the substring from the beginning of sentence
	// up to index, and store the copy in word.
	string word = str.substr(0, index);

	// Remove the word from sentence.
	str.erase(0, index);

	// Return the extracted word.
	return word;
}

string toPigLatin(string word)
{
	// Get the first letter of the word.
	char first = word[0];

	// Append the letter to the end of the word.
	word.append(1, first);

	// Append "ay" to the word.
	word.append("ay");

	// Delete the first letter.
	word.erase(0, 1);

	// Return the word.
	return word;
}
