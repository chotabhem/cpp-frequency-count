#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vc vector<char> 

int main(){
	string s;
	cout<<"Enter the paragraph"<<endl;
	getline(cin,s);
	unordered_map<char,int>mapo;
	for(auto it: s){
		if(it==' ')
		continue;
		mapo[it]++;
	}
	for(auto it: mapo){
		cout<<it.first<<" appeared "<<it.second<<" times"<<endl;
	}

	return 0;
}
