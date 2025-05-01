import java.util.*;

class Arithematic
{
    public int iValue1;
    public int iValue2;

    Arithematic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;
    } 

    public int Addition()
    {
        int Result = 0;
        Result = iValue1 + iValue2;
        return Result;
    }
}

class Program232
{
    public static void main(String Arg[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        No2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(No1,No2);
        Ans =  aobj.Addition();

        System.out.println("Addition is : "+Ans);
    }
}