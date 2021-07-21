#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct ShowParam 
{
	int startLine;
	int endLine;
};

bool start();
string communicate();
vector<string> read(string);
ShowParam getShowParam(const vector<string>& vstr)
{
	ShowParam sp;
	int strCount = vstr.size();
	cout << "You have " << strCount << " lines" << endl;
	cout << "Enter start line ", cin >> sp.startLine;
	cout << "Enter end line ", cin >> sp.endLine;
	if (sp.startLine > strCount || sp.endLine > strCount)
	{
		cout << "Eror" << endl;
		getShowParam(vstr);
	}
	
	return sp;
};
void show(const vector<string>&, const ShowParam&);
void endScreen();

int main()
{
	
	if (start()) 
	{
		auto fileName = communicate();
		auto content = read(fileName);
		auto sp = getShowParam(content);
		show(content, sp);
	}

	endScreen();

    return 0;
}
