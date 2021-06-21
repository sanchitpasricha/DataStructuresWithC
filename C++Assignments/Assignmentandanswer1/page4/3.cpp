#include <bits/stdc++.h>
#include<string.h>
using namespace std;

void chkpalindrome(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main()
{
	string str,init_str;
	cout<<"Enter a string :: ";
	cin>>str;
	init_str = str;
	chkpalindrome(str);
	if(init_str==str){
	    cout<<"It is a palindrome";
	}else{
	    cout<<"It is not a palindrome string";
	}
	
	return 0;
}
