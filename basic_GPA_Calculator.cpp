

# include <iostream>

using namespace std;

int main()
{
    float marks;

    cout << " Enter your marks : ";

    cin >> marks;
    if( marks < 50)
    {
        cout << " Your grade is : F \n";

    }
    else if ( 50 < marks  && marks <= 70 )
    {
        cout << " Your grade is : E \n";

    }
    else if ( 70 < marks  && marks <= 80 )
    {
        cout << " Your grade is : D \n";

    }
    else if ( 80 < marks  && marks <= 85 )
    {
        cout << " Your grade is : C \n";

    }
    else if ( 85 < marks  && marks <= 90 )
    {
        cout << " Your grade is : A \n";

    }
    else if ( 90 < marks  && marks <= 100 )
    {
        cout << " Your grade is : A+ \n";

    }


    return 0;
}