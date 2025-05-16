#include<iostream>
using namespace std;
int main(){
	string p;
	cout<<"enter any string";
	cin>>p;
	int x = p.length();
	if (x==10)
	{
		cout<<p[6];
	}
	
	return 0;
}