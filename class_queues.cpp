#include <bits/stdc++.h>
using namespace std;

class queuee {
    private :
        int front,rear,arr[100];
    public :
        queuee() {
            front=rear=-1;
        }
        bool isempty() {
            return front==-1;
        }
        bool isfull() {
            return rear==99;
        }
        int enq(int x) {
            if (isfull()) return -1;
            if (front==-1) front=0;
            arr[++rear]=x;
            return 0;
        }
        int deq() {
            if (isempty()) {
                return -1;
            }
            int dq_val=arr[front];
            (front==rear)?(front=rear=-1):front++;
            return dq_val;
        }
        int peek() {
            return (isempty()?-1:arr[front]);
        }
        void display() {
            if (isempty()) cout << "Queue is empty";
            else {
                for (int i=front;i<=rear;i++) {
                    cout << arr[i] <<" ";
                }
            }
            cout << endl;
        }
};
int main() {
    queuee q;
    int ch;
    while (1) {
        cout << "1 - Empty\n2 - Full\n3 - Enqueue\n4 - Dequeue\n5 - Display\n6 - Exit\n->";
        cin >> ch;
        switch(ch) {
            case 1 :
                if (q.isempty()) {
                    cout << "Queue is empty" << endl;
                }
                else cout << "Queue contains elements" << endl;
                break;
            case 2:
                if (q.isfull()) {
                    cout << "Queue is full" << endl;
                }
                else cout << "Queue is not full" << endl;
                break;
            case 3: {
                int x;
                cout << "Enter element : ";
                cin >> x;
                if (q.enq(x)==-1) {
                    cout << "Overflow\n";
                }
                else {
                    cout << "Enqueue successful\n";
                }
                break;
            }
            case 4: {
                int val=q.deq();
                if (val==-1) {
                    cout << "Underflow\n";
                }
                else {
                    cout << "Dequeued element is : "<< val<<endl;
                }
                break;
            }
            case 5:
                q.display();
                break;
            case 6:
                exit(0);
            default:
                cout << "Enter valid choice\n";
        }
    }
}