#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int MAX = 100;
	string s;
	while(MAX > 0) {
		getline(cin,s);
		if(s=="")
			break;
		cout<<s<<endl;
		MAX--;
	}
	return 0;
}
