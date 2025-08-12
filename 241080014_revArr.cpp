#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &array){
int i=0,j=array.size()-1;

while(i<=j){
swap(array[i],array[j]);
i++;
j--;
}
}

int main(){
vector<int> arr={1,2,5,3,5,3,7,8,5};
for(int val:arr){
cout<<val<<" ";
}

cout<<endl;
reverseArray(arr);

for(int val:arr){
cout<<val<<" ";
}

cout<<endl;
return 0;
}

