// STRING ADDITION
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s="";		cout<<"s1= ";	cin>>s1;  cout<<"s2= ";	cin>>s2;	//=  2514
	int l1=s1.length() , l2=s2.length() ,sum=0,c=0;
	if(l2>l1)	swap(s1,s2);
	int diff=l1-l2;
	l1=s1.length() , l2=s2.length();
	for(int i=l2-1  ; i>=0  ; i--){
		sum= (s2[i]-'0') + (s1[diff+i]-'0') +c;
		 s.push_back(sum%10+'0'); 			//cout<<s<<" ";
		c=sum/10;	
	}	
	sum=0;	
	//cout<<"sum= "<<s<<endl;
			for(int i=diff-1  ; i>=0  ; i--){
				sum= (s1[i]-'0')  +c;
		 		s.push_back(sum%10+'0'); 			//cout<<s<<" ";
			c=sum/10;	
			}	
	
		reverse(s.begin(), s.end());
		cout<<"sum= "<<s<<endl;
}
