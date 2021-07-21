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
ShowParam getShowParam(const vector<string>&);
void show(const vector<string>&, const ShowParam&);
void endScreen();

vector<string> read(string path)
{
	ifstream iFile;
	iFile.open(path);

	vector<string> arr;

	while (!iFile.eof())
	{
		string tmp;
		getline(iFile, tmp);
		arr.push_back(tmp);
	}


	iFile.close();

	return arr;
}

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
