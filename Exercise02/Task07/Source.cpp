#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void fill_words(ifstream& in, vector<string>& words)
{
	string word;
	while (in >> word)
	{
		words.push_back(word);
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

	vector<string> words;
	fill_words(in, words);
	in.close();
	// just for test
	//for_each(words.begin(), words.end(), print);

	string word = "the";
	//int counter = count(words.begin(), words.end(), word);
	//cout << "word " << word << " occurs " << counter << " times" << endl;

	// using find function
	int counter = 0;
	//vector<string>::iterator pos = find(words.begin(), words.end(), word);
	auto pos = find(words.begin(), words.end(), word);
	while (pos != words.end())
	{
		counter++;
		pos = find(pos + 1, words.end(), word);
	}
	cout << "word " << word << " occurs " << counter << " times" << endl;

	return 0;
}