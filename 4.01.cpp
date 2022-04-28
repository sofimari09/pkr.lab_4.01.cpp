#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CreateTXT(char* fname)
{
	ofstream fout(fname);
	char ch;
	string s;
	do
	{
		cin.get();
		cin.sync();
		cout << "enter line: "; getline(cin, s);
		fout << s << endl;
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}
void PrintTXT(char* fname)
{
	ifstream fin(fname);
	string s;
	while (getline(fin, s))
	{
		cout << s << endl;
	}
	cout << endl;
}
bool ProcessTXT1(char* fname)
{
	ifstream fin(fname);
	string s;
	
	while (getline(fin, s))
	{
		for (unsigned j = 1; j < s.length(); j++)
		{
			if (s[j - 1] == 'n' && s[j + 1] == 'o')

				return true;
		}
	}
	return false ;
}

int main()
{

	char fname[100];
	cout << "enter file name : "; cin >> fname;
	CreateTXT(fname);
	PrintTXT(fname);
	cout << "n_ o = " << ProcessTXT1(fname) << endl;
	return 0;
}