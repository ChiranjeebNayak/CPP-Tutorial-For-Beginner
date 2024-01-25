#include<iostream>
using namespace std;

int main(){
    int a =5;
    int b =3;
    if(a<b){
        int sum = a+b;
        cout<<"a is smaller than b; sum = "<<sum<<endl;
    }else{
        int mul =  a*b;
        cout<<"a is greater than b; mul = "<<mul<<endl;
    }
    if(a<b){
        cout<<"a is smaller than b"<<endl;
    }
    if(a + b <= 10){
        cout<<"sum is smaller than 10"<<endl;
    }

    int mark;
    cin>>mark;
    // validation 
    if(mark>=90 && mark<=100){
        cout<<"Briliant student A";
    }
    else if(mark>=80 && mark<=900){
        cout<<"average student B";
    }
    else{
        cout<<"Normal student C";
    }

}