#include<iostream>
using namespace std;
int main(){
int i,j,seat,row;
row=5;
seat=10;
for(i=1;i<=row;i++){
    cout<<"Row "<<i<<":";
    for(j=1;j<=seat;j++){
    cout<<"Seat "<<j<<" ";    
    } 
    cout<<endl;
}
return 0;
}






