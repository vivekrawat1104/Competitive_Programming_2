/*Q3. Write a program in to count the number of words in the string.
Sample Input :	Raman Classes
Sample Output :	2				*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int  countwords(char *str, int n){				int words=0,i;
	for(i=0 ;i<n; i++){
		if(str[i]==' ' ||  str[i]=='\t' || str[i]=='\n')
			words+=1;
	}
	return words;
}
int main(){
	int n;					//cout<<"n= ";		cin>>n;	
	char str[]="vivek rawat is a\0";		//str=new char[n];	cout<<"string= ";	gets(str);		puts(str);
							//cout<<"string= ";	cin>>str;	cout<<str;
	cout<<str<<countwords(str,n)<<"\n";	
//cout<<int(' ')<<" "<<int(" ");	//int(' ')->32	int(" ")->Error: cast from ‘const char*’ to ‘int’ loses precision[fpermissive]

}
