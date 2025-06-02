/*Write a program that displays the product components of a number without repeating them. For Example : if the user enters 24, it 
displays 24*1 , 8*3 , and 4*6.*/
#include<iostream>
using namespace std;
int main(){
	int num,g=0;
	cout<<"Enter Number :";
	cin>>num;
	for(int i=num; i>=g; i--){
		for(int j=0; j<=i;j++){
			if(i*j==num){
				cout<<endl<<i<<" * "<<j;
				g=j+1;
			}
		}
	}
	return 0;
}