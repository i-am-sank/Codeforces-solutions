#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[101];
	cin>>s;
	int l=0,u=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		u++;
		else
		l++;
	}
	if(l>=u)
	{
		for(int i=0;i<strlen(s);i++)
		putchar(tolower(s[i]));
	}
	else {
	
		for(int i=0;i<strlen(s);i++)
		putchar(toupper(s[i]));	
	}
}
