import java.util.*;

class Numbers
{
    public int EvenFactors(int iNo)
    {
        int iCnt = 0, iSum = 0;

        if(iNo % 2 != 0)
        {
            return 0;
        }

        for(iCnt = 2; iCnt <= (iNo/2); iCnt = iCnt + 2)
        {
            if(iNo % iCnt == 0)
            {
                    iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

class Program240
{
    public static void main(String Args[])
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();
    
        Numbers nobj = new Numbers();

        iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition of even factors : "+iRet);
    }
}