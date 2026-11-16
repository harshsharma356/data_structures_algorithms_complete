#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter the character: ";
    cin>>c;

    if (c>='a' && c<='z'){
        cout<<"lowercase\n";
    }
    else if (c>='A' && c<='Z'){
        cout<<"uppercase\n";
    }
    else{
        cout<<"not an alphabet\n";
    }
}