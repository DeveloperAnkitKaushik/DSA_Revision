#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

int main(){
    string str = "today is good day;";
	string temp = "";
	for(int i=0;i<str.length();i++){
		if(str[i] == ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}else{
			temp.push_back(str[i]);
		}
	}
	cout << temp;
}