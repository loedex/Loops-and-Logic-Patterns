#include<iostream>
using namespace std;
int main(){
	//char ch='A';
	//again:
	int i=1;
	for(/*int i= 1,*/char ch='A'; ch<='Z'; i++){
		for(int j=1; j<=i; j++){
			cout<<ch<<"\t";
			ch++;
		}
		cout<<endl;
	}
	//if(ch<='Z')
	//goto again;
	return 0;
}