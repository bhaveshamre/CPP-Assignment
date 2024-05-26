#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.142

using namespace std;


int main(){

	float r,v,s,h,l,w,s1,s2,s3;
	cout<<"enter length"<<endl;
	cin>>l;
	cout<<"enter width"<<endl;
	cin>>w;
	v = l*w;
	s = 2*(l+w);
	cout<<"The area of rectangle :"<<v<<endl;
	cout<<"The area of rectangle :"<<s<<endl;

	cout<<"enter length"<<endl;
	cin>>s1;
	cout<<"enter width"<<endl;
	cin>>s2;
	cout<<"enter width"<<endl;
	cin>>s3;

	v = (sqrt(3)/4)*s1*s1;
	cout<<"The area of Triangle :"<<v<<endl;




	cout<<"enter radius"<<endl;
	cin>>r;
	cout<<"Input the radius of circle :"<<r<<endl;
	v = 3.14*r*r;
	h = 2*PI*r;
	cout<<"The area of circle :"<<v<<endl;
	cout<<"The circumference of circle :"<<h<<endl;


	return 0;
}




