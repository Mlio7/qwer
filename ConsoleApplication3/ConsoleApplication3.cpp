#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ShowParam 
{
	int startLine;
	int endLine;
};

bool start();
string comunicate();
vector<string> read(string);
ShowParam getShowParam(const vector<string>&);
void show(const vector<string>&, const ShowParam&);
void endScreen();

int main()
{
	
	if (start()) 
	{
		auto fileName = comunicate();
		auto content = read(fileName);
		auto sp = getShowParam(content);
		show(content, sp);
	}

	endScreen();

    return 0;
}
