//5. Sort Sring By length
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool compare(string s1,string s2){
	return s1.length()<s2.length();
}
int main(){
	string a[]={"RamanClasses","is","Monday"};
	sort(a,a+3,compare);
	for(int i=0; i<3 ; i++)
		cout<<a[i]<<endl;
	///Lexicographic Order	
		sort(a,a+3);	cout<<endl;
	for(int i=0 ; i<3 ;i++)
		cout<<a[i]<<endl;
	//Example
	cout<<"---\n";
	string s="iamnotafool";
		sort(s.begin(),s.end());	//sort(s, s+std::strlen(s));
	cout<<s;

}
