#include <iostream>
using namespace std;
#define SIZE 5
struct Element {
    int data;
    int priority;
};
class PriorityQueue {
    Element pq[SIZE];
    int n;
public:
    PriorityQueue() {
        n = 0;
    }
    void enqueue(int data, int priority) {
        if (n == SIZE) {
            cout << "Priority Queue is Full\n";
            return;
        }
        pq[n].data = data;
        pq[n].priority = priority;
        n++;
        cout << data << " inserted with priority "
             << priority << endl;
    }
    void dequeue() {
        if (n == 0) {
            cout << "Priority Queue is Empty\n";
            return;
        }
        int highest = 0;
        for (int i = 1; i < n; i++) {
            if (pq[i].priority > pq[highest].priority) {
                highest = i;
            }
        }

        cout << pq[highest].data
             << " deleted (Priority: "
             << pq[highest].priority << ")\n";
        for (int i = highest; i < n - 1; i++) {
            pq[i] = pq[i + 1];
        }
        n--;
    }
    void display() {
        if (n == 0) {
            cout << "Priority Queue is Empty\n";
            return;
        }
        cout << "Priority Queue:\n";
        for (int i = 0; i < n; i++) {
            cout << "Data: " << pq[i].data
                 << ", Priority: " << pq[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(10, 2);
    pq.enqueue(20, 5);
    pq.enqueue(30, 1);
    pq.enqueue(40, 4);
    pq.enqueue(50, 3);
    pq.display();
    cout << "\nDeleting elements:\n";
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    cout << "\nAfter deletion:\n";
    pq.display();
    return 0;
}
