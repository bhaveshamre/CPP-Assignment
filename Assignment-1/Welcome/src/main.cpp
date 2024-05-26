#include <iostream>
#include <cstdio>
#define MILES 0.621371

using namespace std;

int main(){
	int k;

	cout<<"Input the distance in kilometer :"<<endl;
	cin>>k;
	int m = k*MILES;
	cout<<"The "<<k<<" Km./hr. means "<<m<<" Miles/hr."<<endl;


	return 0;
}

