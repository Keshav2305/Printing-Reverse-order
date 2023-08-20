

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int prn1,mod,dig,prn2[100];
    cout<<"Enter prn: ";
    cin>>prn1;
    cout<<"PRN = ";
    while(prn1>0)
    {
        mod=prn1%10;
        cout<<mod<<endl;
        prn1=prn1/10;
    }
    cout<<"How many digits in your prn? : ";
    cin>>dig;
    for(int i=0;i<dig;i++)
    {
        cout<<"Enter the "<<i+1<<" Digit of your prn :";
        cin>>prn2[i];
    }
    cout<<"PRN ="<<endl;
    for(int i=dig-1;i>=0;i--)
    {
        cout<<prn2[i]<<endl;
    }

    return 0;
}
