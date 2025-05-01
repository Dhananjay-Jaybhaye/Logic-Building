import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Elements of the array are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class Program258
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, i = 0;

        System.out.println("Enter the number of elements : "); 
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();
    }
}