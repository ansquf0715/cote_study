#include <iostream>
#include <string>

using namespace std;

#define MAX 10000001

int main(void) 
{
    //Q 10926
    char _ID[51];
    cin >> _ID;
    cout<< _ID << "??!" <<endl;

    //Q 11654
    char c;
    cin>>c;
    cout<<(int)c<<endl; 

    // Q 1152
    string str;
    int count=1;

    getline(cin, str);

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ') count++;
    }

    if(str[0]==' ') count--; //처음 공백이 올 때
    if(str[str.length()-1] == ' ') count--; //맨 뒤가 공백일 때

    cout<<count;

    return 0;
}