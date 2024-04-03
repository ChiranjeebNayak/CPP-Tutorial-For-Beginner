#include<iostream>
using namespace std;
int main(){
     cout<<"Switch Tutorial";
     int x = 1;
     switch(x+2){
        case 1:
            cout<<"My value is 1"<<endl;
            break;
        case 2:
            cout<<"My value is 2"<<endl;
            break;
        // case 3:
        //     cout<<"My value is 3"<<endl;
        //     break;
        case 4:
            cout<<"My value is 4"<<endl;
            break;
        case 5:
            cout<<"My value is 5"<<endl;
            break;
        default:
            cout<<"I am default"<<endl;
            break;
     }
     cout<<"Complete switch tutorial";
}