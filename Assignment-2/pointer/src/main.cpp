#include <cstdio>
#include <iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
	int *ptr = new int;
	cout<<"Value :"<<*ptr<<endl;
	*ptr=123;
	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;
	int *ptr1 = new int(25);

	cout<<"Value :"<<*ptr1<<endl;
	cout<<"Address :"<<ptr<<endl;
	*ptr1=30;
	cout<<"Value :"<<*ptr1<<endl;
}
