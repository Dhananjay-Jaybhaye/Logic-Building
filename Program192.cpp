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

        ~Array()
        {
            delete []Arr;
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : \n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();

    aobj.Display();

    return 0;
}