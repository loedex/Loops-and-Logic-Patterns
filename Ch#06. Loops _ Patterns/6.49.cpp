#include<iostream>
using namespace std;
 int main(){
 	char ch;
 	cout<<"Enter Symbol :";
 	cin>>ch;
 	for(int i=5; i>=1; i--){
 		for(int s=1; s<=5-i; s++){
 			cout<<" ";
		 }
		 for(int j=1; j<=i; j++){
		 	cout<<ch;
		 }
		 cout<<endl;
	 }
	 return 0;
 }