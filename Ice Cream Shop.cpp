#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n, changeOfFive = 0,changeOfTen = 0, flag = 1;
		cin>>n;
		long int a[n];
		for(int i=0; i<n; i++)
		  cin>>a[i];
		if(a[0] > 5){ // First Element Greater than 5
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0; i<n; i++){
			if(a[i] == 5){ // If Five 
				changeOfFive++;
				continue;
			}
			else if(a[i] == 10){ //If Ten
				changeOfFive--;
				changeOfTen++;
				if(changeOfFive<0){
					flag = 0;
					break;
				}
			}
			else if(a[i] == 15){ //If Fifteen
				if(changeOfTen>0)
				  changeOfTen--;
				else
				  changeOfFive -= 2;  
				if(changeOfFive<0){
					flag = 0;
					break;
				}
			}
		}
		if(flag == 0)
		  cout<<"NO"<<endl;
		else
		  cout<<"YES"<<endl;    
	}
}