#include <iostream>
using namespace std;

string Text, KText;

int main(){

    cout << "geben sie eine beliebig viel Text ein und eine N um zustoppen:" << endl;
    do
        if(Text != "N"){
            cout << "\t";
            getline(cin, Text);
            KText += "\t" + Text + "\n"; 
        }
    while(Text != "N");

    cout << "\nIhr Text Lautet:\n" << KText << endl;
    
    return 0;
}