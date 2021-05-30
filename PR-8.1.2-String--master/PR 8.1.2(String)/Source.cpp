#include <iostream>
#include <string>

using namespace std;


string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('a', pos)) != -1)
	{
		if ((s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c'))
			s.replace(pos, 3, "**");
			pos++;

	}

	return s;
}

int main()
{
	string s;
	cout << "Enter string:" << endl;
	getline(cin, s);

	Change(s);



	cout << "Modified string:" << s << endl;

	return 0;
}