#include <cstdio>
#include <iostream>
#include<cstring>
#include<iomanip>
#define Null 0
using namespace std;

int main(){
	cout<<"Value :"<<endl;
	int n=10;
	int *ptr = Null;

	ptr = &n;
	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;
	*ptr=123;
	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;

		return 0;
}
