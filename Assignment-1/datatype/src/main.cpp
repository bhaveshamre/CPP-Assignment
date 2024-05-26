#include <iostream>
#include <cstdio>

using namespace std;



int main(){

    char a = 'c';
	int i = 10;
	short s= 10;
	float f = 10.5;
	double d =102.67;

	cout<<"The sizeof(char) is :"<<sizeof(char)<<endl;
	cout<<"The sizeof(short) is :"<<sizeof(short)<<endl;
	cout<<"The sizeof(int) is :"<<sizeof(int)<<endl;
	cout<<"The sizeof(long) is :"<<sizeof(long)<<endl;
	cout<<"The sizeof(long long) is :"<<sizeof(long long)<<endl;
	cout<<"The sizeof(float) is :"<<sizeof(float)<<endl;
	cout<<"The sizeof(double)  is :"<<sizeof(double) <<endl;
	cout<<"The sizeof(long double) is :"<<sizeof(long double)<<endl;
	cout<<"The sizeof(bool) is :"<<sizeof(bool)<<endl;

	cout<<"The sizeof(c) is :"<<sizeof(a)<<endl;
	cout<<"The sizeof(s) is :"<<sizeof(s)<<endl;
	cout<<"The sizeof(i) is :"<<sizeof(i)<<endl;
	cout<<"The sizeof(f) is :"<<sizeof(f)<<endl;
	cout<<"The sizeof(d) is :"<<sizeof(d)<<endl;



	return 0;
}




