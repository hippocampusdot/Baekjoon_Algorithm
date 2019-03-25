#include<iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    int a, b, c;
    int result;

    cin>>a>>b>>c;

    if((b>=a&&a>=c)||(b<=a&&a<=c))
        result=a;
    else if((a>=b&&b>=c)||(a<=b&&b<=c))
         result=b;
    else
        result=c;

    cout<<result<<'\n';

    return 0;
}
     
