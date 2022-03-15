#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int count_words(ifstream& in)
{
	int counter = 0;
	string word;
	while (in >> word)
	{
		counter++;
	}
	return counter;
}

void fill_words(ifstream& in, array<string, 250>& words)
{
	int counter = 0;
	string word;
	while (in >> word)
	{
		words[counter++] = word;
	}
}

void print(string& s)
{
	cout << s << endl;
}
int main()
{
	ifstream in("Arrays.txt");
	if (!in)
	{
		cout << "unable to open file" << endl;
		return 1;
	}

	//int nr = count_words(in);
	//cout << nr << endl;
	array<string, 250> words;
	fill_words(in, words);
	in.close();
	// just for test
	//for_each(words.begin(), words.end(), print);

	string word = "the";
	int counter = count(words.begin(), words.end(), word);
	cout << "word " << word << " occurs " << counter << " times" << endl;
	
	return 0;
}