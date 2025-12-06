class Transcation {

public: 
    int data;
    Transcation* next;
    Transcation* prev;

    // now a connstuctor

    Transcation(int data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
        // Initially Assign to the Null Value
    }
    
    void insertAtNode(Transcation* &head){
        // To create a new node
        // Assigningg temp to head
        Transcation* temp = head;
        Transcation* newTrans = new Transcation(data);
    }


}