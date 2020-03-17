//6. Remove Vowels
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;	getline(cin,s);	char t;	//cout<<s.find('a');//cout<<s.length()<<endl;
	for(int i=0 ; i<s.length() ; i++){	 t=s[i];
		if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
		{	s.erase(i,1);		i--;	}
	}
	cout<<s;
}
