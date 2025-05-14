
class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        head = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();
        newn.data = No;
        newn.next = null;

        if(head == null)a
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        iCount++;
    }
}

class Program504
{
    public static void main(String args[])
    {
        SinglyLL sobj = new SinglyLL();
        
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

    }
}