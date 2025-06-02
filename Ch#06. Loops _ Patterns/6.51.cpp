#include<iostream>
using namespace std;
int main(){
	for(int i=2; i<=6; i++){
		for(int j=1; j<i; j++){
			cout<<i*j<<"  ";
		}
		cout<<endl;
	}
	return 0;
}