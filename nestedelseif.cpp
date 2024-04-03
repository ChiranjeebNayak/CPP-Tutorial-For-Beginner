#include<iostream>
using namespace std;
int main(){
     int mark =180;
     if(mark>=90 && mark<=100){ //90-100
        cout<<"A"<<endl;
     }
     else if(mark>=80 && mark<90){
        cout<<"B"<<endl;
     }
     else if(mark>=70 && mark<80){
        cout<<"C"<<endl;
     }
     else if(mark>=0 && mark<70){
        cout<<"D"<<endl;
     }
     else{
        cout<<"None of if condition true so we are in else condtion";
     }
}