#include<iostream>
using namespace std;

int main()
{
    int choice;
    int a;
    int b;
    cout<<"!!!Welcome To Calculator!!!"<<endl;
    while(1)
    {
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction."<<endl;
        cout<<"3.Multiplication."<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit."<<endl;
        cout<<"Enter the operation you want to perform:"<<endl;

        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the Number to Add:"<<endl;
            cin>>a>>b;
            cout<<"The sum is : "<<a+b<<endl;
            break;

        case 2:
            cout<<"Enter the Number to Subtract:"<<endl;
            cin>>a>>b;
            cout<<"The Difference is : "<<a-b<<endl;
            break;

        case 3:
            cout<<"Enter the Number to Multiply:"<<endl;
            cin>>a>>b;
            cout<<"The Product is : "<<a*b<<endl;
            break;
        
        case 4:
            cout<<"Enter the Number to Divide"<<endl;
            cin>>a>>b;
            if(b==0)
            throw runtime_error("ERROR: Divide by Zero Attempted");
            cout<<"The Difference is : "<<a/b<<endl;
            break;

        case 5:
            exit(0);
        
        default:
            cout<<"Invalid Choice Entered."<<endl;
            break;
        }
    }
    return 0;
}