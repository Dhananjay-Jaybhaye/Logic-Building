#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x200;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)
    {   return true;   }
    else
    {   return false;    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bit is ON\n";
    }
    else
    {
        cout<<"Bit is OFF\n";
    }
    
    return 0;
}


//                  0010    0000    0000
//                  2       0       0
//                  0x200