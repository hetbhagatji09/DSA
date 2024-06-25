#include <vector>
#include <set>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insert(node *&head, int val)
{

    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
node *duplicates(node *head)
{
    set<int> st;
    node *temp = head;
    while (temp != NULL)
    {
        st.insert(temp->data);
        temp = temp->next;
    }
    vector<int> ans(st.begin(), st.end());

    node *temp2 = NULL;
    for (int i = 0; i < ans.size(); i++)
    {
        insert(temp2, ans[i]);
    }
    return temp2;
}
int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 1);
    insert(head, 1);

    display(head);
    cout<<endl<<"after removing duplicate nodes"<<endl;
    node *head2=duplicates(head);
    display(head2);

    return 0;
}