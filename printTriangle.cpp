#include<iostream>
using namespace std;

int main(){

for(int i=1;i<=5;i++){
int n=1;
	for(int j=1;j<=i;j++){
		if(n%2==0){
			cout<<1<<" ";
		}else{
			cout<<0<<" ";
		}
		n+=1;
	}
	cout<<endl;
}

return 0;
}
