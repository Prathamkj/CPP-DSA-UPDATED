Union of Two Linked Lists

// using set
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        set<int> s;

        // Insert all elements from list 1
        while (head1 != nullptr) {
            s.insert(head1->data);
            head1 = head1->next;
        }

        // Insert all elements from list 2
        while (head2 != nullptr) {
            s.insert(head2->data);
            head2 = head2->next;
        }

        // Now create the result linked list from the set
        Node* dummy = new Node(0);
        Node* temp = dummy;

        for (int val : s) {
            temp->next = new Node(val);
            temp = temp->next;
        }

        return dummy->next;
    }
};

// using unordered_map
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        unordered_map<int, int> mp;

        // Traverse first linked list and insert into map
        Node* temp1 = head1;
        while (temp1 != nullptr) {
            mp[temp1->data]++;
            temp1 = temp1->next;
        }

        // Traverse second linked list and insert into map
        Node* temp2 = head2;
        while (temp2 != nullptr) {
            mp[temp2->data]++;
            temp2 = temp2->next;
        }

        // Create dummy node for the result list
        Node* dummy = new Node(0);
        Node* curr = dummy;

        // Since unordered_map does not keep keys sorted, collect keys and sort
        vector<int> keys;
        for (auto it : mp) {
            keys.push_back(it.first);
        }
        sort(keys.begin(), keys.end());

        // Create new nodes with keys
        for (int val : keys) {
            curr->next = new Node(val);
            curr = curr->next;
        }

        return dummy->next;
    }
};
