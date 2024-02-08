#include<iostream>
using namespace std;
int main(){
    int x,y,choice,cont=1,result;
    while(cont==1){
    cout<<"Calculator \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Division \n 5. Remainder\n Enter your operation:\n";
    cin>>choice;
    if(choice > 5){
        cout<<"Dear user,\nEnter the choice between 1 - 5.\n";
    }
    else{
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    switch(choice){
        case 1:
        result=x+y;
        break;
        case 2:
        result = x-y;
        break;
        case 3:
        result = x*y;
        break;
        case 4:
        result = x/y;
        break;
        case 5:
        result = x%y;
        break;
    }
    cout<<"Your answer is: "<<result<<endl;
    }
    
    cout<<"Enter 1 to continue and any other key to exit the program\n";
    cin>>cont;
    }
    cout<<"Thankyou for using the calculator made by Happy Yadav. Please use it again soon.\n";

    return 0;
}