//String Functions
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1("Hello");	
	cout<<"length= "<<s1.length()<<endl;
	cout<<"Is Empty= "<<s1.empty()<<endl;	
	s1.append("World");	//s1.pushback('v');	
	cout<<"append= "<<s1<<endl;	
//	cout<<s1<<endl;
//	cout<<"Find= "<<s1.find("ello")<<" "<<strstr(s1,"ello")<<endl;
	s1.erase(2,4);		
	cout<<"Erase= "<<s1<<endl;
	//s1.popback();
	//cout<<"Pop= "<<s1<<endl;
	cout<<atoi("12")<<" "<<atof("12.34")<<endl;
char a[s1.length()+1];	
strcpy(a,s1.c_str);	
//cout<<s1<< " " <<a<<endl;	//strstr(s1,"eor");	

}
