#include <iostream>


bool check_polindrom(string word)
{
	int len = word.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str;
	cout << "Sisestage sõna: ";
	cin >> str;
	if(check_polindrom(str))
	{
		cout << "Sõna on palindroom!";
	}
	else
	{
		cout << "Sõna ei ole palindroom!";
	}
	return 0;
}
