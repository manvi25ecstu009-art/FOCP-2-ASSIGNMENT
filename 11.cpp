#include<iostream>
using namespace std;
int main(){
    int itemNo, amount, price_per_item;
    float discount, finalAmount;
    cout<<"Enter the number of items: ";
    cin>>itemNo;
    cout<<"Enter the price of items: ";
    cin>>price_per_item;
    amount = price_per_item * itemNo;
    cout<<"Amount: "<<amount<<endl;
    if(itemNo>1000){
        cout<<"A discount of 10 percent is given!"<<endl;
        discount = amount * 0.10;
        finalAmount = amount - discount;
        cout<<"The final amount is:"<<finalAmount;
    }
    else{
        cout<<"No discount is given!"<<endl;
        cout<<"The final amount is: "<<amount;
    }
}