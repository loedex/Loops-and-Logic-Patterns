#include<iostream>
using namespace std;
class Solution{
	public:
		bool Find(long int& V);
};
bool Solution::Find(long int& V){
	long int Vcopy,digit, rev=0;
	Vcopy=V;
	if(V<0 || ((V%10==0)&&(V!=0))){
		return false;
	}
	do{
		digit=V%10;
		if(rev>INT_MAX ||((rev==INT_MAX)&&(digit>7))){
			return false;
		}
		if(rev<INT_MIN || ((rev==INT_MIN)&&(digit<-8))){
			return false;
		}
		rev=(rev*10)+digit;
		V=V/10;
	
	}
	while(V!=0);
	return (rev==Vcopy);
}
int main(){
	long int num;
	cout<<"Enter Number: ";
	cin>>num;
	Solution obj;
	bool r=obj.Find(num);
	if(!r){
		cout<<"\nFalse";
	}
	else{
		cout<<"\nTrue";
	}
	return 0;
}