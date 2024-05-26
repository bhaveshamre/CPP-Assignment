#include <iostream>
#include <cstdio>

using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){

	int N1,N2;
	cout<<"enter 2 no.s"<<endl;
	cin>>N1;
	cin>>N2;
	int sum = N1 + N2;
	cout<<"the sum of "<<N1<<" and "<<N2<<" is "<<sum<<endl;

	cout<<"1 no input :"<<N1<<endl;
	cout<<"2 no input :"<<N2<<endl;

	swap(&N1,&N2);
	cout<<"after swap 1 no input :"<<N1<<endl;
	cout<<"after swap 2 no input :"<<N2<<endl;

	return 0;
}







