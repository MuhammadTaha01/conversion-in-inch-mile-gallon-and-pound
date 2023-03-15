#include<iostream>
using namespace std;
int main()
{
    int choice;

    cout<<" (1 for inch) "<<endl;
    cout<<" (2 for gallon) "<<endl;
    cout<<" (3 for mile) "<<endl;
    cout<<" (4 for pound) "<<endl<<endl;
    cout<<"  Enter conversion>> "<<endl;
    cin>>choice;

    if(choice==1)
    {
        cout<<" 1-inch is equal to 2.54 centimeters.";
    }
    else if(choice==2)
    {
        cout<<" 1-gallon is equal to 3.785 liters.";
    }
    else if(choice==3)
    {
        cout<<" 1-mile is equal to 1.609 kilometers.";
    }
    else if(choice==4)
    {
        cout<<" 1-pound is equal to .4536 kilograms.";
    }
    else
        cout<<" Invalid Chracter.";

    return 0;

}
