#include <iostream>
#include <cstdio>
using namespace std;

int main(){

	int n;

	cout<<"input a no. :"<<endl;
	cin>>n;

	int ans=0;
	for(int i =1;i<=10;i++){
		ans = n*i;
		cout<<n<<" * "<<i<<" = "<<ans<<endl;
	}

}





