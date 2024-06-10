#include <cstdio>
#include <iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
	int num =10;
	int *ptr;
	/* Some unknown memory location is being corrupted
	This should never be done. */
	cout<<"Value :"<<&num<<endl;
	cout<<"Value :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;
	ptr=&num;
	cout<<"Value :"<<*ptr<<endl;
	*ptr=123;
	cout<<"Value :"<<*ptr<<endl;
	return 0;
	}
