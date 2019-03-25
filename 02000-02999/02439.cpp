#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int N;

	cin>>N;

	for(int i=1; i<=N; i++) {
		for(int b=1; b<=N-i;b++)
			cout<<" ";
		for(int s=1; s<=i; s++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}
