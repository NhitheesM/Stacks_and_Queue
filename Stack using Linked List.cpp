
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    Node *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void push(int data)
    {
        Node *currentNode = new Node(data);
        ++size;

        if (head == NULL)
        {
            head = currentNode;
        }
        else
        {
            currentNode->next = head;
            head = currentNode;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }

        --size;

        Node* temp = head;

        head = head->next;

        temp->next = NULL;

        free(temp);
        
    }

    int getTop()
    {
        if (head == NULL)
        {
            return -1;
        }

        return head->data;
    }
};