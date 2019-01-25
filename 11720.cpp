#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int num, num_cp;
	int n;
	int sum=0;

	cin>>n;
	cin>>num;

	for(int i=n-1; i>=0; i--){
		sum += num/pow(10.0, i);
		num -= (int)(num/pow(10, i))*pow(10, i);
	}
	cout<<sum<<endl;

	return 0;
}
