#include <iostream>
#include <conio.h>

//For Windows User
//#include <windows.h>

// Name 	: Rizki Andrianto / 143219051

using namespace std;

struct get_data {
    char NIM [10];
	char Name [20];
	char Class [20];
	char Address [20];
    get_data *next, *prev;
};
get_data *first=NULL,*last=NULL,*H,*N,*del_data;

void inputT_data(){
    N = new get_data;
    N->next = NULL;
    N->prev = NULL;
    cout << " Insert NIM\t\t: ";
    cin >> N->NIM;
    cout << " Insert Name\t\t: ";
    cin >> N->Name;
    cout << " Insert Class\t\t: ";
    cin >> N->Class;
    cout << " Insert Address\t\t: ";
    cin >> N->Address;
    if (first == NULL){
        first = last = N;
    }
    else {
        N->next = first;
        first->prev = N;
        first = N;
    }
    system ("cls");
}

void inputb_data(){
    N = new get_data;
    N->next = NULL;
    N->prev = NULL;
    cout << " Insert NIM\t\t: ";
    cin >> N->NIM;
    cout << " Insert Name\t\t: ";
    cin >> N->Name;
    cout << " Insert Class\t\t: ";
    cin >> N->Class;
    cout << " Insert Address\t\t: ";
    cin >> N->Address;
    if (first == NULL){
        first = last = N;
    }
    else {
        last->next = N;
        N->prev = last;
        last = N;
    }
    system ("cls");
}

void del_dataT_data(){
    if(first->next == NULL){
        first=last=NULL;
        cout << " Blank, Undefined (Press 1 To Create Data) ";
    }else{
        del_data = first;
        first = first->next;
        first->prev = NULL;
        delete del_data;
    }
}

void print_data (){
    H=first;
    while (H != NULL){
        cout << " Scraping Metadata ..." <<endl;
        cout << "\n" <<endl;
        cout << "--------------------------------------" <<endl;
        cout << "NIM\t\t: "<<H->NIM<<endl;
        cout << "Name\t\t: "<<H->Name<<endl;
        cout << "Class\t\t: "<<H->Class<<endl;
        cout << "Address\t\t: "<<H->Address<<endl;
        cout << "--------------------------------------" <<endl;
        cout << "\n" <<endl;
        H = H->next;
    }
}

int main()
{
    int choice;
    do {
        cout << endl <<endl;
        cout << " MULTI LINKED LIST " <<endl;
        cout << "-----------------------------------------------------------" <<endl  <<endl;
        cout << " Option : 1. Create Data (Top) " <<endl;
        cout << "          2. Create Data (Bottom) " <<endl;
        cout << "          3. Delete Data (Top Data Only) " <<endl;
        cout << "          4. Print " <<endl;
        cout << "          5. Exit Program " <<endl;
        cout << "        ---------------------------------------------------" <<endl <<endl;
        cout << " Choice [ 1 - 5 ] : "; cin >> choice;
        cout << "\n\n" <<endl;
        switch (choice){
        case 1 :
            inputT_data();
            break;
        case 2 :
            inputb_data();
            break;
        case 3 :
            del_dataT_data();
            break;
        case 4 :
            if (N == NULL){
                    cout << " Blank, Undefined (Press 1 To Create Data) ";
            }
            else {
                print_data();
            }
            break;
        case '5' :
				exit (0);
			break;
        default :
            cout << " Please choose your option, Press 5 again to exit ";
            break;
        }
    }while(choice != 5);
    getch();
}
