// ************** Libray management using Singly linked list *************//

# include <iostream>
// # include <conio.h>

using namespace std;


class Library
{
    private:
    struct Node
    {
        int id;
        string name, author, publisher;
        Node *next_add; // pointer pointing to new node in LL
    };

    public:
    Node *head = NULL;
    void menu();
    void insert_record();

};



void library::menu()
{
    p:
    system("Class");

    int choice;

    cout << "\n\n \n \t\t ********** ******** ********* ******** ********** ********** \n\n\n";
    cout << "\n\n \n \t\t ******** Library Management System **********  \n\n\n";
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
    cout << "\n\n \n \t\t 1. Insert record  \n\n\n";
    cout << "\n\n \n \t\t 2. Delete record  \n\n\n";
    cout << "\n\n \n \t\t 3. Search record  \n\n\n";
    cout << "\n\n \n \t\t 4. Update record  \n\n\n";
    cout << "\n\n \n \t\t 5. Show all records \n\n\n";
    cout << "\n\n \n \t\t 6. Exit \n\n\n";
    cout << "\n\n \n \t\t Enter your choice :  \t\t\n";

    cin >> choice;
    switch(choice)
    {
        case 1:  // insert record function
            insert_record();
            break;

        case 2: // delete record function
            head = NULL;
            //load_data();
            //del_record();
            break();


        case 3: // Search record function
            head = NULL;
            //load_data();
            search_record();
            break;

        case 4:   // update record function
            head = NULL;
            //load_data();
            update_rcord();
            break;



        case 5 :  // show all data
            sort();
            head = NULL;
            //load_data();
            //show_record();
            break;
        
        case 6:
            exit(0);

        default:
            cout << "\n\n Invalid input .. enter again ..";     

    }
    //getch();
    goto p;

}
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";


void library:insert_record()
{
    system("class");
    cout << "\n\n \n \t\t ******** Library Management System **********  \n\n\n";
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
    
    Node *new_node = new Node;
    
    cout << "\n\n Book id : ";
    cin >> new_node -> id;

    cout << "\n\n Book Name :";
    cin >> new_node -> title;

    cout << "\n\n Author name : ";
    cin >> new_node -> author;

    cout << "\n\n Publisher name : ";
    cin >> new_node -> Publisher;

    new_node -> next_add = NULL;

    // first node 
    if( head == NULL)
    {
        head = new_node;
    }
    else
    {
        node *ptr = head;
        while( ptr -> next_add != NULL)
        {
            ptr = ptr -> next_add;

        }
        ptr = new_node;


    }

    cout << "\n\n \n \t\t New book inserted successfully  \n\n\n";

    
}

void library:search_record()
{
    int t_id, found = 0;

    system("class");
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
    cout << "\n\n \n \t\t ******** Library Management System **********  \n\n\n";
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";

    if( head ==  NULL)
    {
        cout << "\n \n Book id : ";

    }
    else
    {
        cout << "\n \n Book id : ";
        cin >> t_id;

        Node *ptr = head;
        while( ptr != NULL)
        {
            if(t_id == ptr -> id)
            {
                
                cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
                cout << "\n\n \n \t\t ******** Library Management System **********  \n\n\n";
                cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
                cout << " "
                cout << "\n\n Book id : " << ptr -> id;;
                cout << "\n\n Book Name  : " << ptr -> title;
                cout << "\n\n Author name : " << ptr -> author; 
                cout << "\n\n Publisher name : " << ptr -> publisher;
                
                found++;
            }
            // point to new node
            ptr  = ptr -> next_add;

        }

        if( found == 0)
        {
            // book not fiund 
            cout << "\n\n Book id is invalid  .. ";
        }

    }
    

}

void library : update()
{
    int t_id, found = 0;

    system("class");
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
    cout << "\n\n \n \t\t ******** Library Management System **********  \n\n\n";
    cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";

    if( head ==  NULL)
    {
        cout << "\n \n Linked list is empty  ";

    }
    else
    {
        cout << "\n \n Book id : ";
        cin >> t_id;

        Node *ptr = head;
        while( ptr != NULL)
        {
            if(t_id == ptr -> id)
            {
                
                cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
                cout << "\n\n \n \t\t ******** Library Management System **********  \n\n\n";
                cout << "\n\n \n \t\t ******** ********* ******** **********  \n\n\n";
                cout << " "
                cout << "\n\n Book id : " << ptr -> id;;
                cout << "\n\n Book Name  : " << ptr -> title;
                cout << "\n\n Author name : " << ptr -> author; 
                cout << "\n\n Publisher name : " << ptr -> publisher;
                
                found++;
            }
        

}


main()
{
    library obj;
    obj.menu();
}








}