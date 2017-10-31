#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
typedef struct node node;

void create(node* address)
{
    char choice;
    cout<<"Enter Value:\n";
    cin>>address->data;
    while(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"Please Enter an	Integer !\n";
            cin>>address->data;
        }

    cout<<"Want to Enter More?\n";
    cin>>choice;
    if(choice^'n')
        {
            node* new_node=new node;
            address->next=new_node;
            create(new_node);
        }
    else
        {
            address->next=NULL;
        }
}
int insert_after(node* address,int after,int value) //Will insert at Last if after not found in list<<
{
    node* new_node=new node;
    if(new_node==NULL)
        return 0;
    new_node->data=value;
    while(address->next!=NULL)
        {
            if(address->data==after)
                {
                    new_node->next=address->next;
                    address->next=new_node;
                    return 1;
                }
            address=address->next;
        }
    new_node->next=address->next;
    address->next=new_node;
    return 2;

}
bool insert_beginning(node*& start,int value)
{
    node* new_node=new node;
    if(new_node==NULL)
        return false;

    new_node->data=value;
    new_node->next=start;
    start=new_node;
    return true;

}
bool delete_start(node*& start)
{
    if(start->next!=NULL)
        {

            start=start->next;

            return true;
        }
    else
        {
            cout<<"ERROR ";
        }
}


bool delete_node(node*& start_address,int value)
{
    if(start_address->data==value)
        {
            start_address=start_address->next;
            return true;

        }

    node* starting_address=start_address;
    while(starting_address->next!=NULL)
        {
            if((starting_address->next)->data==value)
                {
                    node* temp=starting_address->next;
                    starting_address->next=starting_address->next->next;
                    delete temp;
                    return true;
                }
            starting_address=starting_address->next;
        }
    cout<<"No data found:\n";
    return false;
}
void print(node* address)
{
    while(address!=NULL)
        {
            cout<<address->data<<'\t';
            address=address->next;
        }
    cout<<'\n';
}
int main(void)
{
    node* start=new node;
    int i;
    while(1)
        {

            cout<<"-----------------------------\n0.Create Starting Node\n1.Insert at beginning\n2.Insert after value\n3.Delete node with value\n4.Delete Starting Node\n5.Print List\n6.Exit\n------------------------------\n";
            cout.flush();
            cin>>i;
            switch(i)
                {
                    case 0:
                        create(start);
                        break;
                    case 1:
                        int value;
                        cin>>value;
                        insert_beginning(start,value);
                        break;
                    case 2:
                        int after;
                        cin>>after;
                        cin>>value;
                        insert_after(start,after,value);
                        break;
                    case 3:
                        cin>>value;
                        delete_node(start,value);
                        break;
                    case 4:
                        delete_start(start);
                        break;
                    case 5:
                        print(start);
                        break;
                    case 6:
                        return 0;


                }
        }

}
