#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int n;
	int sum=0;

	cin>>n;

	for(int i=0; i<=n; i++)
		sum += i;
	
	cout<<sum<<endl;
	return 0;
}
