#include <iostream>
#include <string>
#include <cmath>
#include <chrono>
using namespace std;

//////////some code

int BinToDecConverter(string bin)
{
    int len = bin.length();
    //  cout<< len<<endl;
    
    int dec=0;
    for ( int i =0; i<len; i++)
    {
        // cout<<(int)(bin[i]-48)<<endl;
        dec+= (int)(bin[i]-48) * pow(2,len-i-1);
        // cout<< dec<<endl;
    }
    return dec;
}
void DEF()
{
    int abc;
}
int main ()
{
    string bin;
    bool isValid=0;
    cout<< " Nhap chuoi bin: ";
    cin>> bin;
    for ( int i=0; i< bin.length(); i++){
        if ( (bin[i])!= '1' && (bin[i]!= '0'))
        {
            cout<<bin[i]<<endl;
            isValid =1;
        }
    }
    if (isValid ==1)
    {
        cout<< "Bin string is invalid";
    }
    else{
        cout <<", Dec: "<<BinToDecConverter(bin);

    }
}
