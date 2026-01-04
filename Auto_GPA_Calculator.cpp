

# include <iostream>

using namespace std;

void calculateGPA();
void calculateCGPA();

int main()
{
    system("Cls");      // clear screen
    int input;

    cout << " *************************** *****************" << endl;
    cout << " ***************** GPA Calculator **************" << endl;
    cout << " *************************** *****************" << endl;
    cout << " \n *************************** *****************" << endl;
    cout << " Menu : " << endl;
    cout << " 1. Calculate GPA  \n";
    cout << " 2. Calculate CGPA  \n";
    cout << " 3. Exit Application \n";
    
    cout << " *************************** *****************" << endl;
    
    sub:

    cout << " Enter your choice : " ;
    cin >> input;

    switch(input)
    {
        case 1:
            calculateCGPA();
            break;
        case 2:
            calculateCGPA();
            break;
        
        case 3 :
            exit(EXIT_SUCCESS);
            break;

        default:
            cout << " You have entered wrong input "<< endl;
            goto sub;
            break;
    }

}

void calculateGPA()
{
    int q;
    system("cls");
    cout << " ************ GPA Calculator ************* ";
    cout << " How many subjects points do you want to calculate : \n";
    cin >> q;

    float credit[q];
    float point[q];

    cout << endl;

    for( int i =0; i< q; i++)
    {
        cout << " Enter the credit for subjects " << i + 1 << endl;
        cin >> credit[i];
        cout << endl;

        cout << " Enter the points of subject " << i + 1 << endl;
        cin >> point[i];
        cout << " ********** ********** *********** ********* \n";

    }

    float sum = 0;
    float total;

    for( int j =0; j< q; j++)
    {
        total = credit[j] * point[j];
        sum = sum + total;

    }

    float totalcredit = 0;
    for ( int k = 0; k < q; k++)
    {
        totalcredit = totalcredit + credit[k];
    }
    cout << " ********* ******* Result ******* ******** \n\n";
    cout << " Total points : " << sum << endl;
    cout << " Total credits : " << totalcredit << endl;

    cout << " ****** Your GPA ***** \n";
    cout << " GPA : " << sum / totalcredit << endl;
    cout << " ***************** *********************** \n";
    
    sub:
    int inmenu;
    cout << "\n\n 1. Calculate GPA Again " << endl;
    cout << " 2. Go to main menu " << endl;
    cout << "3. Exit this app " << endl;
    cout << " Enter Your input : " << endl;
    cin >> inmenu;

    switch(inmenu)
    {
        case 1:
            calculateGPA();
            break;
        case 2 :
            main();
            break;
        case 3:
            exit(EXIT_SUCCESS);
            break;

    }

}


void calculateCGPA()
{
    int p;
    system("cls");
    cout << " ************ CGPA Calculator ************* \n";
    cout << " How many semester results do you want to enter: \n";
    cin >> p;

    float semester[p];
    int i;

    cout << endl;

    for( int i =0; i< p; i++)
    {
        cout << " Enter the semester " << i + 1 << endl;
        cin >> semester[i];
        cout << "\n" << endl;

    }
    float semestertotal = 0;
    for( int j =0; j< p; j++)
    {
        semestertotal = semestertotal + semester[j];

    }


    
    cout << " ********* ******* Result ******* ******** \n\n";
    cout << " Your CGPA is : " << semestertotal / p << endl;
    
    cout << " ***************** *********************** \n";
    
    sub:
    int inmenu;
    cout << "\n\n 1. Calculate CGPA Again " << endl;
    cout << " 2. Go to main menu " << endl;
    cout << "3. Exit this app " << endl;
    cout << " Enter Your input : " << endl;
    cin >> inmenu;

    switch(inmenu)
    {
        case 1:
            calculateCGPA();
            break;
        case 2 :
            main();
            break;
        case 3:
            exit(EXIT_SUCCESS);
            break;

    }

}





