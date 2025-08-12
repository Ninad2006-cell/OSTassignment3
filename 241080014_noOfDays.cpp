#include<iostream>
using namespace std;


int main(){

int n;
cout<<"Enter the Month Number: ";
cin>>n;

if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
cout<<"31 Days"<<endl;
}else if(n==2){
cout<<"28 Days"<<endl;
}else{
cout<<"30 Days"<<endl;
}

return 0;
}
