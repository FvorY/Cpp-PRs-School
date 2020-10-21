#include <iostream>
#include <conio.h>
#include <iomanip>

//For Windows User
//#include <windows.h>

// Name 	: Rizki Andrianto
// Github	: https://github.com/Andriana7

using namespace std;

struct node
{
    char NIM[10], Name[99], Class[99], Address[99];

    struct node* next;
}mahasiswa,*newdata, *firstdata=NULL, *lastdata=NULL, *deldata, *scrapdata;

void create_data()
{
    newdata=(node*)malloc(sizeof(struct node));
    cout << " Insert NIM\t\t: " ; cin >> newdata->NIM;
    cout << " Insert Name\t\t: " ; cin >> newdata->Name;
    cout << " Insert Class\t\t: " ; cin >> newdata->Class;
    cout << " Insert Address\t\t: " ; cin >> newdata->Address;
    newdata->next=NULL;
}

void create()
{
    create_data();
    if (firstdata==NULL)
        {
            firstdata=newdata;
        }
        else
            {
                lastdata->next=newdata;
            }
        lastdata=newdata;
        lastdata->next=NULL;

}

void del()
{
    if (firstdata==NULL)
        cout << " Blank, Undefined (Press 1 To Create Data) " <<endl;
        else
        {
            deldata=firstdata;
            firstdata=firstdata->next;
            free(deldata);
            cout << " Last Your Data Has Been Delete !! " <<endl;
        }
}

void print()
{
    if ( firstdata==NULL )
        cout << " Blank, Undefined (Press 1 To Create Data) " <<endl;
        else
            {
                scrapdata=firstdata;
                cout.flags(ios::left);
                cout << setw (15) << " NIM           Name                   Class                  Address " <<endl;
                cout << "" <<endl;
                while ( scrapdata!=NULL )
                    {
                        cout<<setiosflags(ios::left)<<setw(15) << scrapdata->NIM;
                        cout<<setiosflags(ios::left)<<setw(23) << scrapdata->Name;
                        cout<<setiosflags(ios::left)<<setw(23) << scrapdata->Class ;
                        cout<<setiosflags(ios::left)<<setw(23) << scrapdata->Address<< endl;

                        scrapdata=scrapdata->next;
                    }
            }
        getch();
}

int main()
{
    char choice;

    do{
        system ("cls");
        cout << endl <<endl;
        cout << " SINGLE LINKED LIST CIRCULAR  " <<endl;
        cout << "--------------------------------------" <<endl  <<endl;
        cout << " Option : 1. Create Data  " <<endl;
        cout << "          2. Delete Data " <<endl;
        cout << "          3. Print " <<endl;
        cout << "          4. Exit Program " <<endl;
        cout << "        -------------------" <<endl <<endl;
        cout << " Choice [ 1 - 4 ] : "; cin >> choice;

        switch (choice)
            {
                case '1' :
                    cout <<endl;
                    cout << " Input Your Data " <<endl;
                    create();
                    getch ();
                break;

                case '2' :
                    cout <<endl;
                    cout << " Last Your Data Has Been Delete " <<endl;
                    del();
                    getch ();
                break;

                case '3' :
                    cout <<endl;
                    cout << " Print " <<endl <<endl;;
                    print();
                    getch ();
                break;

                case '4' :
                    cout <<endl;
                    cout << " Exit Program ...  " <<endl;
                    exit (0);
                    getch ();
                break;

                default :
                    cout <<endl;
                    cout << " Please choose your option " <<endl;
                    getch();
                break;
            }


    }while ( choice != 5 );
    return(0);
}
