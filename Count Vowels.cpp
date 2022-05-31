#include <iostream>

using namespace std;
int main()
{       
	char str[1000];
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>str[i];
	int count=0;
	for(int i=0; i<n ;i++)
	{	if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		count++;
	}
	cout<<count;
	
	return 0;
}