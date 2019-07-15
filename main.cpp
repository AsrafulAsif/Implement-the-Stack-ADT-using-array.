#include <iostream>
#include "StackType.cpp"

using namespace std;

int main()
{

    StackType<int>myStack;
    StackType<int>myStack1;
    if(myStack.IsEmpty())
    {
        cout<<"Stack is Empty!"<<endl;

    }
    else{
        cout<<"Stack is not Empty!!"<<endl;
    }
    int temp;
    cout<<"Insert 4 items:"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>temp;
        myStack.Push(temp);

    }
    if(myStack.IsEmpty())
    {
        cout<<"The Stack is Empty!!"<<endl;
    }
    else{
        cout<<"The Stack is not empty!!"<<endl;

    }
    if(myStack.IsFull())
    {
        cout<<"Stack is full!!"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }

   cout<<"In reverse order:"<<endl;
     while(!myStack.IsEmpty())
  {
      myStack1.Push(myStack.Top());
       cout<<myStack.Top()<<endl;

      myStack.Pop();
  }


   cout<<"In  order:"<<endl;
   while(!myStack1.IsEmpty())
  {
      myStack.Push(myStack1.Top());
      cout<<myStack1.Top()<<endl;
      myStack1.Pop();



  }
  myStack1.Push(3);

     while(!myStack.IsEmpty())
  {
      myStack1.Push(myStack.Top());

      myStack.Pop();
  }


   cout<<"In  order:"<<endl;
   while(!myStack1.IsEmpty())
  {
      myStack.Push(myStack1.Top());
      cout<<myStack1.Top()<<endl;
      myStack1.Pop();

  }
   if(myStack.IsFull())
    {
        cout<<"Stack is full!!"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }

   myStack.Pop();
   myStack.Pop();
   cout<<"After Pop two items,The top item is:"<<endl;
   cout<<myStack.Top()<<endl;






    return 0;
}
