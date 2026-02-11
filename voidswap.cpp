#include<iostream>
using namespace std;
void swap(int &a, int &b){
    cout<<"A and B before swap in function"<<a<<b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"A and B after swap in function"<<a<<b;
}
main(){
    int x,y;
    cout<<"provide 2 integers"<<endl;
    cin>>x>>y;
    cout<<"X and Y in main before function call "<<x<<y<<endl;
    swap(x,y);
    cout<<"X and Y in main after function call "<<x<<y<<endl;
    return 0;
}