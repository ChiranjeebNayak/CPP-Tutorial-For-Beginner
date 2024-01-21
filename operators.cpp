#include<iostream>
using namespace std;
int main(){
    int a =2,b=3;
    int c = a+b;
    cout<<"Sum of a and b = "<<c<<endl;
    // user input 
    int x,y;
    cout<<"enter x and y value  = ";
    cin>>x>>y;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    int z = x+y;
    cout<<"sum of z = "<<z<<endl;
    int s = x-y;
    cout<<"sub of x and y = "<<abs(s)<<endl;
    int m = x%y;
    cout<<"modulo of x and y = "<<m<<endl;
    // post increment x++; it will not increase value instantly 
    cout<<"x value1 = "<<x++<<endl; //x = x+1
    cout<<"x value2 = "<<x<<endl;
    // pre increment ++x ; it will increase by 1 instantly
    cout<<"y value1 = "<<++y<<endl;
    cout<<"y value2 = "<<y<<endl;

    // decremnt decrease by one 
    // predec =  --x and postdec = x--;
    cout<<"post dec x value1 = "<<x--<<endl;
    cout<<"post dec x value2 = "<<x<<endl;
    cout<<"pre dec x value1 = "<<--x<<endl;
    cout<<"pre dec x value2 = "<<x<<endl;

    // asignment operator

    int aa = 3;
    int cc = aa+3; //3+3
    cout<<"c = "<<c<<endl;
    int d = 3;
    d+=3;
    cout<<"d = "<<d<<endl;

    // comparision operator
    cout<<(2>3)<<endl; // false - 0
    cout<<(2<3)<<endl; // true 1


}