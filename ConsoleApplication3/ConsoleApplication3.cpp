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
string communicate();
vector<string> read(string);
ShowParam getShowParam(const vector<string>&);
void show(const vector<string>&, const ShowParam&);
void endScreen() {std::cout << "Thank you for your cooperation guys\n";}

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
