#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int A)
        {
            iSize = A;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements : \n";
            for(iCnt = 1; iCnt <= iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements from the array are : \n";
            for(iCnt = 1; iCnt <= iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        void DisplayR()
        {
            int iCnt = 0;

            cout<<"Values from the array are : \n";
            for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int CountEven()
        {
            int iCnt = 0, iCount = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter the number of elements that you want to store : \n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.CountEven();
    cout<<"Count of Even Elements are : "<<iRet<<"\n";

    aobj.DisplayR();

    return 0;
}