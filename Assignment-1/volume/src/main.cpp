#include <iostream>
#include <cstdio>

using namespace std;


int main(){

	float r,v,s,h;
	cout<<"enter radius"<<endl;
	cin>>r;
	v = (4/3)*3.14*r*r*r;
	cout<<"The volume of sphere :"<<v<<endl;
	cout<<"enter side"<<endl;
	cin>>s;
	v = s*s*s;
	cout<<"The volume of cube :"<<v<<endl;

	cout<<"enter radius"<<endl;
	cin>>r;
	cout<<"enter height"<<endl;
	cin>>h;
	v = 3.14*r*r*h;
	cout<<"The volume of cylinder :"<<v<<endl;


	return 0;
}




