#include<iostream>
using namespace std;
int main(){
	int sum;
	for(int i=1;i<=5;i++){
       cout<<endl<<"1";
       sum=1;
	   for(int j=2; j<=i; j++){
	    	sum+=j;
		    cout<<" + "<<j;
    }
    cout<<" = "<<sum;
  }
  return 0;
}