#include<iostream>
#include<queue>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    {
        size++;
        int index=size;
        arr[index]=val;
        int parent=index/2;
        while(index>1)
        {
            if(arr[index]>arr[parent])
            {
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;
            }
        }

    }
    void deletion()
    {
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<=size)
        {
            if((2*i) <= size && arr[i]<arr[2*i])
            {
                swap(arr[i],arr[2*i]);
                i=2*i;
            }
            else if(((2*i)+1) <= size && arr[i]<arr[(2*i)+1])
            {
                swap(arr[i],arr[(2*i)+1]);
                i=(2*i)+1;
            }
            else
            {
                return;
            }

        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }

};

void heapify(int arr[], int n, int i)
{
    int largest=i;
    int left=2*i;
    int right=(2*i)+1;
    if(left<=n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest=right;
    }

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
        
    }
}

void heapsort (int arr[], int n)
{
    int size=n;
    while(size>1)
    {
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);

    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletion();
    h.print();

    cout<<"using priority queue"<<endl;
    priority_queue<int> pq;
    pq.push(5);
    pq.push(3);
    pq.push(1);
    pq.push(4);
    for (int i=0;i<4;i++)
    {
        cout<<pq.top()<<endl;
        pq.pop();    }
}
