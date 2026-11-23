#include <iostream>
#include <string>
using namespace std;

#define MAX 5
class stack
{
    private:
        string books[MAX];
        int top;

    public:    
    stack()
    {
        top=-1;
    }
    //Return book (push)
    void push(string book)
    {
        if(top==MAX-1)
        {
            cout<<"Stack is full.\n";
            return;
        }
        top++;
        books[top]=book;
        cout<<book<<"returned successfully.\n";        
}

//Arrange book(pop)
void pop()

{
    if(top==-1)
    {
        cout<<"Stack is empty.\n";
        return;
    }
    cout<<books[top]<<"arranged o the shelf.\n";
    top--;
}

//top book (peek)
void peek()
{
    if(top==-1)
    {
        cout<<"no books in the stack.\n";
        return;
    }
        cout<<"Top book:"<<books[top]<<endl;
}

//display stack
void display()
{
    if(top==-1)
    {
        cout<<"Stack is empty.\n";
        return;
    }
    cout<<"\nbooks in stack (top to bottom):\n";
    for(int i=top;i>=0;i--)
    {
        cout<<books[i]<<endl;
    }
}
};

int main()
{
    stack s;
    int choice;
    string book;
    
    do
    {
        cout<<"\n=====library stack menu =====\n";
        cout<<"1. Return book (push)\n";
        cout<<"2. Arrange book (pop)\n";
        cout<<"3. Top book (peek)\n";
        cout<<"4. Display stack\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter book name:";
                getline(cin,book);
                s.push(book);
                break;

            case 2:
                s.pop();
                break;    

            case 3:
                s.peek();
                break;
                
            case 4:
                s.display();
                break;
                
            case 5:    
                cout<<"Exiti\n";
                break;

                defult:
                cout<<"Invalid choice!\n";
    }
}    while (choice !=5);
    return 0;
}