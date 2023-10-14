#include <iostream>
using namespace std;

class Node
{
public:
    string task;
    Node *next;
    string status;
    Node(string task)
    {
        this->task = task;
        status = "pending";
        next = NULL;
    }
};

class ToDoList
{
public:
    static int counter;
    Node *head = NULL;

    void AddTask(string task)
    {
        if (head == NULL)
        {
            Node *node = new Node(task);
            head = node;
            counter++;
            cout << "Task Successfully Added" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            Node *node = new Node(task);
            temp->next = node;
            counter++;
            cout << "Task Successfully Added" << endl;
        }
    }

    void ViewTasks()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "To-Do List Empty." << endl;
        }
        int i = 1;
        while (temp != NULL)
        {
            cout << i << ". TASK: " << temp->task << "    Status: " << temp->status << endl;
            temp = temp->next;
            i++;
        }
        cout<<"\n";
    }

    void changeStatus()
    {
        int position;
        Node *temp = head;
        if (head==NULL)
        {
            cout<<"To-Do list empty.";
        }
        else
        {
            cout << "Enter the position of the task you want to mark as COMPLETED:" << endl;
            cin >> position;
            if (position <= 0 || position > counter)
            {
                cout << "Invalid position entered." << endl;
            }
            else
            {
            for (int i = 1; i < position; i++)
            {
                temp = temp->next;
            }
            temp->status = "COMPLETED";
            cout << "Status changed successfully." << endl;
            }
        }
    }

    void removeTask()
    {
        int position;
        Node *temp = head;

        cout << "Enter the position of the task you want to delete:" << endl;
        cin >> position;

        if (position <= 0 || position > counter)
        {
            cout << "Invalid position entered." << endl;
        }
        else if (position == 1)
        {
            head = head->next;
            counter--;
        }
        else
        {
            for (int i = 1; i < position - 1; i++)
            {
                temp = temp->next;
            }
            Node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout<<"Item sucessfully Deleted.";
            counter--;
        }
    }
};

int ToDoList::counter = 0;

int main()
{
    int choice;
    ToDoList t;

while(1)
{
    cout << "!!! WELCOME TO TO-DO LIST!!!" << endl;
    cout << "Choose the following options:" << endl;
    cout << "1. Add the task." << endl;
    cout << "2. View tasks." << endl;
    cout << "3. Change status." << endl;
    cout << "4. Remove the task." << endl;
    cout << "5. Exit." << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string details;
        cout << "Enter the details of the task." << endl;
        cin >> details;
        t.AddTask(details);
        break;
    }

    case 2:
    {
        t.ViewTasks();
        break;
    }

    case 3:
    {
        t.changeStatus();
        break;
    }

    case 4:
    {
        t.removeTask();
        break;
    }

    default:
        cout << "Invalid position entered." << endl;
        break;
    }
}

    return 0;
}
