#include <iostream>
using namespace std;
class list
{
private:
    string tt, pub, auth;
    int cost, sp;
    list *next, *temp;
public:
    void accepts();
    void accepta();
    void acceptl();
    void display();
    void deletef();
    void deletel();
    void deletepos();
} *head = NULL, t;
void list::accepts()
{
    list *newnode;
    newnode = new list;
    newnode->next = NULL;
    cout << "enter the tittle of the book";
    cin >> newnode->tt;
    cout << "netr the publisher of the book";
    cin >> newnode->pub;
    cout << "enetr the author of the book";
    cin >> newnode->auth;
    cout << "enetr the cost of book";
    cin >> newnode->cost;
    cout << "enetr the stock position";
    cin >> newnode->sp;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void list::accepta()
{
    list *newnode;
    newnode = new list;
    newnode->next = NULL;
    temp = head;
    cout << "enter the tittle of the book";
    cin >> newnode->tt;
    cout << "netr the publisher of the book";
    cin >> newnode->pub;
    cout << "enetr the author of the book";
    cin >> newnode->auth;
    cout << "enetr the cost of book";
    cin >> newnode->cost;
    cout << "enetr the stock position";
    cin >> newnode->sp;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        int pos, count = 1;
        cout << "enter the position at which you want to insert the data";
        cin >> pos;
        while (temp != NULL && count < pos - 1)
        {
            temp = temp->next;
            pos++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void list::acceptl()
{
    list *newnode;
    newnode = new list;
    newnode->next = NULL;
    cout << "enter the tittle of the book";
    cin >> newnode->tt;
    cout << "netr the publisher of the book";
    cin >> newnode->pub;
    cout << "enetr the author of the book";
    cin >> newnode->auth;
    cout << "enetr the cost of book";
    cin >> newnode->cost;
    cout << "enetr the stock position";
    cin >> newnode->sp;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
}
void list::deletef()
{
    temp = head;
    if (head == 0)
    {
        cout << "list is empty";
    }
    else
    {
        head = head->next;
        delete temp;
    }
}
void list::display()
{
    temp = head;
    if (temp == 0)
    {
        cout << "no any record is remaining";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->tt << "\t" << temp->pub << "\t" << temp->auth << "\t" << temp->sp << "\t" << temp->cost << "\n";
            temp = temp->next;
        }
    }
}
void list::deletel()
{
    if (head == NULL)
    {
        cout << "list is empty";
    }
    temp = head;
    list *p;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    p = temp->next;
    delete p;
    temp->next = NULL;
}
void list::deletepos()
{
    list *p;
    int flag = 0;
    string tittle;
    cout << "enter the tittle of book  you want to delete the record";
    cin >> tittle;
    temp = head;
    while (temp != NULL)
    {
        if (temp->tt == tittle)
        {
            flag = 1;
            p->next = temp->next;
            temp->next = NULL;
            delete temp;
            cout << "record deleted is " << tittle;
        }
        p = temp;
        temp = temp->next;
    }

    if (flag == 0)
    {
        cout << "record not found";
    }
}
int main()
{
    int ch;
    do
    {
        cout << "1.accept at strt\n2.insert at any\n3.insert at last\n4.display\n5.delete first node\n6delete lat node\n7 delete by position\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            t.accepts();
            break;
        case 2:
            t.accepta();
            break;
        case 3:
            t.acceptl();
            break;
        case 4:
            t.display();
            break;
        case 5:
            t.deletef();
            break;
        case 6:
            t.deletel();
            break;
        case 7:
            t.deletepos();
            break;
        }
    } while (ch != 0);
    return 0;
}
