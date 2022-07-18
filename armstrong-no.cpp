#include<iostream>
using namespace std;
int main()
{
    int num,temp,rem,sum=0;

    cout<<endl<<"Enter any no : ";
    cin>>num;
    temp=num;

    while(temp>0)
    {
        rem = temp % 10;
        sum = sum + (rem*rem*rem);
        temp = temp / 10;
    }
    if(sum==num)
    {
        cout<<"\n"<<num<<" is an Armstrong no.";
    }
    else
    {
        cout<<"\n"<<num<<"is not an Armstrong no.";
    }

    return 0;
}