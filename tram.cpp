#include<iostream>
using namespace std;
int main(){


int n, a, b, first=0, temp=0;

cin>>n;

while(n--){
	cin>>a>>b;
	first = first - a;
	first = first + b;

	if(first>temp){
		temp = first;
	}
}




cout<<temp;
}
