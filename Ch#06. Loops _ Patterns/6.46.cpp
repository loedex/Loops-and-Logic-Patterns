#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter Symbol : ";
	cin>>ch;
	for(int i=7; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<ch<<"   ";
		}
		cout<<endl;
	}
	return 0;
}