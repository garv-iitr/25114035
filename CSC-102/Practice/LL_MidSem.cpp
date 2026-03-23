#include <print>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;     // Data value
    Node* next;   // Pointer to next node

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


Node* convertArr2LL(vector<int> &arr){
    Node* head =new Node(arr[0]) ;
    Node* mover  = head ;
    for(long long unsigned int i = 1 ; i < arr.size() ;i++ ) {
        Node* temp = new Node(arr[i]) ;
        mover->next = temp ;
        mover = temp;
    }
    return head ;
}
int lengthofLL(Node* head) {
    int count = 0;
    Node* temp = head ;
    while(temp) {
        temp = temp->next ;
        count++;
    }
    return count;
}
bool checkIfPresent(Node* head , int val) {
    Node* temp = head ;
    bool valid = false ;
    while(temp) {
        if(temp->data == val) {
            valid = true ;
            break;
        }
        temp = temp->next;
    }
    return valid ;
}

Node* removeHead(Node* head) {
    if(head == NULL) return head; 
    Node* temp = head ;
    head = head->next;
    delete temp ;
    return head;
}
Node* removeTail(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head ;
    while(temp->next->next){
        temp = temp->next ;
    }
    delete temp->next ;
    temp->next = nullptr ;
    return head;
}
Node* removeK(Node* head , int k) {
    if(head == NULL) return head; 
    if(k == 1) {
        return removeHead(head);
    }
    int count = 0 ;
    Node* temp = head ;
    Node* prev = NULL ;
    while(temp) {
        count++ ;
        if(count == k) {
            prev->next = prev->next->next ;
            free(temp);
            break;
        }
        prev = temp ;
        temp = temp->next ;
    }
    return head;
}
Node* removeElement(Node* head , int val) {
    if(head == NULL) return head; 
    if(head->data == val) {
        return removeHead(head);
    }
    Node* temp = head ;
    Node* prev = NULL ;
    while(temp) {
        if(temp->data == val) {
            prev->next = prev->next->next ;
            free(temp);
            break;
        }
        prev = temp ;
        temp = temp->next ;
    }
    return head;
}

Node* insertHead(Node* head , int val) {
    return new Node(val ,head ) ;
}
Node* insertTail(Node* head , int val) {
    if(head == NULL) {
        return new Node(val);
    }    
    Node* temp = head ;
    while(temp->next) {
        temp = temp->next ;
    }
    Node* newNode = new Node(val);
    temp->next = newNode ;
    return head ;
}
Node* insertPosition(Node* head , int el , int k) {
    if(head == NULL) {
        if(k==1) return new Node(el) ;
        else return NULL ;
    }
    else if(k == 1) {
        return new Node(el , head);
    }
    else {
        int count = 0 ;
        Node* temp = head ;
        while(temp) {
            count++ ;
            if(count == k - 1) {
                Node* newNode = new Node(el , temp->next) ;
                temp->next = newNode ;
            }
            temp = temp->next ;
        }
    }
    return head ;
}
Node* insertBeforeValue(Node* head , int el , int val) {
    if(head == NULL) {
        return NULL ;
    }
    else if(head->data == val) {
        return new Node(el , head);
    }
    else {
        Node* temp = head ;
        while(temp->next) {
            if(temp->next->data == val) {
                Node* newNode = new Node(el , temp->next) ;
                temp->next = newNode ;
                break;
            }
            temp = temp->next ;
        }
    }
    return head ;
}

void print(Node* head) {
    Node* temp = head ;
    while(temp) {
        cout<<temp->data ;
        if(temp->next) {
            cout<<" " ;
        }
        temp = temp->next ;
    }
    return ;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr) ;
    head = insertBeforeValue(head , 45 , 7);
    print(head) ;
    
    return 0;
}
