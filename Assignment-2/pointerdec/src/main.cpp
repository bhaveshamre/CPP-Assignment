#include <iostream>
#include <cstdio>
#include<cstring>
#include<iomanip>
using namespace std;

int main( ){

	 int *ptr = new int; //Here memory will be initialized to garbage value
	 //int *ptr = ( int* )::operator new ( sizeof( int ) );
	cout << "Value  : " << *ptr << endl;
	delete ptr;
	//::operator delete( ptr )
}
