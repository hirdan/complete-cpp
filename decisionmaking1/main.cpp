#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    //read 3 numbers
    cin>>num1>>num2>>num3; //chaining or cascading
    /*
    same as doing
    cin>>num1;
    cin>>num2;
    cin>>num3;
    */
    if (num1>num2 and num1>num3){
        cout<<num1<<"is largest"<<endl;
    }
    else if(num2>num1 && num2>num3){
        //same as if(num2>num1 and num2>num3)
        cout<<num2<<"is largest"<<endl;
    }
    else{
        cout<<num3<<"is largest"<<endl;
    }
}
