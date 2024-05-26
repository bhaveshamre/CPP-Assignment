#include <iostream>
#include <cstdio>

using namespace std;


int main(){

	int N1,N2;

	cout<<"Input the Dividend :"<<endl;
	cin>>N1;
	cout<<"Input the Divisor :"<<endl;
	cin>>N2;
	int q = N1/N2;
	int r = N1%N2;


	cout<<"The Quotient is :"<<q<<endl;
	cout<<"The Remained is :"<<r<<endl;

	return 0;
}
