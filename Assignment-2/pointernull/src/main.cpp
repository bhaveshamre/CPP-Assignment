#include <cstdio>
#include <iostream>
#include<cstring>
#include<iomanip>
#define Null 0
using namespace std;

int main(){
	int *ptr = Null;
	cout<<"Value :"<<*ptr<<endl;
	*ptr=123;
	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;

//	int *ptr1 = NULL ;
//
//	cout<<"Value :"<<*ptr1<<endl;
//	cout<<"Address :"<<ptr<<endl;
//	*ptr1=30;
//	cout<<"Value :"<<*ptr1<<endl;
	return 0;
}
