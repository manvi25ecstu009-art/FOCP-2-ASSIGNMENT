#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    cout<<"Enter the third side: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"The sides are valid and can form a triangle!"<<endl;
        if(a==b==c){
            cout<<"It is an EQUILATERAL triangle";
        }
        else if(a==b || b==c || c==a){
            cout<<"It is an ISOSCELES triangle";
        }
        else{
            cout<<"It is a SCALENE triangle";
        }
    }
    else{
        cout<<"The sides are invalid and doesn't form a triangle";
    }
}