#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter Symbol :";
	cin>>ch;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cout<<ch<<"  ";
		}
		cout<<endl;
	}
	return 0;
}