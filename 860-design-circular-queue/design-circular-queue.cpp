class MyCircularQueue {
public:
    int f=0;
    int r=-1;
    int *q;
        int size=0;
        int capacity;
    MyCircularQueue(int k) {
        q=new int[k];
        
         capacity=k;

        
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }else{
                r=(r+1)%capacity;
                q[r]=value;
                size++; 
    }
    return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else{
            f=(f+1)%capacity;
            size--;
        }
        return true;
    }
    
    int Front() {
        if(size==0){
            return -1;
        }else{
            return q[f];
        }
        
    }
    
    int Rear() {
        if(size==0){
            return -1;
        }
        else{
            return q[r];
        }
        
    }
    
    bool isEmpty() {
        if(size==0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        return size==capacity;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */