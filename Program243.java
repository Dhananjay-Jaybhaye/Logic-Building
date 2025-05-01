import java.util.*;

class Digits
{
    public int AdditionDigits(int iNo)
    {
        int iDigit = 0;
        int iAdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iAdd = iAdd + iDigit;
            iNo = iNo / 10;
        }
        return iAdd;
    }
}

class Program243
{
    public static void main(String Args[])
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();
    
        Digits dobj = new Digits();

        iRet = dobj.AdditionDigits(iValue);

        System.out.println("Addition of Digits : "+iRet);
    }
}