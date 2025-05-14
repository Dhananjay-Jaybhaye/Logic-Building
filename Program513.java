
class node
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class Queue
{
    public int iCount;
    public node head;

    public Queue()
    {
        head = null;
        iCount = 0;
    }

    public void Enqueue(int No)
    {
        node newn = null;
        node temp = null;

        newn = new node(No);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        iCount++;
    }

    public void Display()
    {
        System.out.println("Elements of the Queue are : ");

        node temp = head;

        while(temp != null)
        {
            System.out.println("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public int Dequeue()
    {
        int no = 0;

        if(head == null)
        {
            System.out.println("Queue is empty");
            return -1;
        }
        else if(head.next == null)
        {
            no = head.data;
            head = null;
            System.gc();
        }
        else
        {
            no = head.data;
            head = head.next;
            System.gc();
        }

        iCount--;
        return no;
    }

}

class Program513
{
    public static void main(String args[])
    {
        Queue qobj = new Queue();
        int iRet = 0;

        qobj.Enqueue(111);
        qobj.Enqueue(101);
        qobj.Enqueue(51);
        qobj.Enqueue(21);
        qobj.Enqueue(11);

        qobj.Display();
        iRet = qobj.Count();
        System.out.println("Number of elements in the Queue are : "+iRet);
        
        iRet = qobj.Dequeue();
        System.out.println("Deleted element is : "+iRet);
        
        iRet = qobj.Dequeue();
        System.out.println("Deleted element is : "+iRet);

        qobj.Display();
        iRet = qobj.Count();
        System.out.println("Number of elements in the Queue are : "+iRet);
    }
}