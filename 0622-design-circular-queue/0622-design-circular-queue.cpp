class MyCircularQueue {
public:
        int front;
        int rear;
        int size;
        vector<int>q;
    MyCircularQueue(int k) {
        q.resize(k+1);
        size = k+1;
        front = k;
        rear = k;
        }
    
    bool enQueue(int value) {
        if((rear+1)%size ==front)
        return false;
            rear = (rear+1)%size;
            q[rear] = value;
            return true;
    }
    
    bool deQueue() {
        if(front==rear)
        return false;
        else{
            front=(front+1)%size;
            return true;
        }
        return true;
        
    }
    
    int Front() {
      if (front == rear)
            return -1; 
        return q[(front + 1) % size];
    }
    
    int Rear() {
          if(front ==rear)
        return -1;
        else
        return q[(rear)%size];
        
    }
    
    bool isEmpty() {
        if(front==rear)
        return true;
        else
        return false;
    }
    bool isFull() {
    if ((rear + 1) % size == front)
        return true;
    else
        return false;
}
};

/**i
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 **/