#include <cstdio>
#include <iostream>
#include<cstring>
#include<iomanip>
#define Null 0
using namespace std;

int main(){

	int n=10;
	const int *ptr;
	ptr=&n;

	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;
	int num=20;
	ptr=&num;
	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;
	cout<<"==============="<<endl;
	int n1=10;
	int *const ptr1= &n1;


	cout<<"Value"<<n1<<endl;
	cout<<"Address :"<<ptr<<endl;
	cout<<"Value :"<<*ptr<<endl;
	cout<<"==============="<<endl;
	int num1=11;
	const int *const p=&num1;

	printf("Num1 : %d\n", num1);
	printf("Num1 : %d\n", *p);




//	*ptr=123;
//	cout<<"Address :"<<ptr<<endl;
//	cout<<"Value :"<<*ptr<<endl;

		return 0;
}
