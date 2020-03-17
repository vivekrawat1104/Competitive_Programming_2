// 6.
 #include<bits/stdc++.h>
#include<string>
using namespace std;
bool compare(string s1,string s2){
	return s1.length()<s2.length();
}
int main(){
	string a="aba";	int len,i,j,flag=0;
	for(i=0 ; i< 4 ;i++)
	{	for(j=1 ; j<=(len-i) ;j++)
		{	string t=reverse(a.substr(i,j));
			if (a.find(t) )	flag=1;
		}
	}	
	//if(flag==1) cout<<"YES";

}
