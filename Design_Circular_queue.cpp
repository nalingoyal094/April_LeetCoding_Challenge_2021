class MyCircularQueue {
    
public:
    int K;
    int array[1005]={-1};
    int size=0,front=-1,rear=-1;
    
    MyCircularQueue(int k) {
        
        K=k;
        
        
    }
    
    bool enQueue(int value) {
        
        if (size==K)
            return false;
        
        if (size==0)
            front=0;
        
        rear++;
        rear=rear%K;
        array[rear]=value;
        size++;
        return true;
        
    }
    
    bool deQueue() {
        
        if (size==0)
        {
           return false;   
        }
        
        if (size==1)
        {
            array[front]=-1;
            front=-1;
            rear=-1;
            size=0;
            return true;
        }
        
        array[front]=-1;
        front++;
        front=front%K;
        size--;
        return true;
        
        
    }
    
    int Front() {
        if (size==0)
            return -1;
        
        return array[front];
        
    }
    
    int Rear() {
        if (size==0)
            return -1;
        return array[rear];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==K;
    }
};
