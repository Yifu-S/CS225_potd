#include "Swiftcipher.h"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
using namespace std;

/* Swift Cipher: Frequency of words in a file corresponds to its location in the decrypted sentence */
string decipherer(string filename) {
	char strIn[256];
	string output = "";
	ifstream input(filename);
	map<string, unsigned> wordSet;
	while (!input.eof())
	{
		input.getline (strIn, 200);
		if (wordSet.find(strIn) == wordSet.end())	wordSet[strIn] = 1;
		else	wordSet[strIn]++;
	}
	for (unsigned i = 1; i <= wordSet.size(); i++)
	{
		for (auto &pair : wordSet)
		{
			if (pair.second == i)	output += pair.first;
		}
		if (i != wordSet.size())	output += " ";
	}
	return output;
}
