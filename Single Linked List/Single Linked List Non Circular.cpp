#include <iostream>
#include <stdlib.h>
#include <conio.h>

//For Windows User
//#include <windows.h>

// Name 	: Rizki Andrianto
// Github	: https://github.com/Andriana7

using namespace std;

struct get_data
{
	char NIM [10];
	char Name 	[20];
	char Class [20];
	char Address [20];

};

struct node
{
		get_data data;
		node* next;
};
node* first;
node* last;
node* p;
node* del;
node* q;

void init()
{
	first = NULL;
	last = NULL;
}

void insert (get_data dt)
{
	p = (node*) malloc (sizeof (node));
	p -> data = dt;
	p -> next = NULL;

		if (first == NULL)
			{
				first = p;
				last = p;
			}
		else
			{
				last -> next = p;
				last = p;
			}
}

void del_data()
{
	node save_data;
	if(first == NULL)
		{
			cout << " Blank, Undefined (Press 1 To Create Data) " <<endl;
		}
	else
		{
			save_data.data	= first -> data;
			cout << " Last Your Data Has Been Delete !! "<<endl;
			cout << " ( "<< save_data.data.NIM << " / " << save_data.data.Name << " / " << save_data.data.Class << " / " << save_data.data.Address << " ) " <<endl;

			del = first;
			first = first -> next;
			free (del);
		}
}

void print_data ()
{
	q = first;
	if (first == NULL)
		{
			cout << " Blank, Undefined (Press 1 To Create Data) " <<endl;
		}
	else
		{
			cout << " Scraping Metadata ..." <<endl;
			while(q != NULL)
				{
					cout << " ( " << q -> data.NIM << " / " << q -> data.Name << " / " << q -> data.Class << " / " << q -> data.Address << " )" <<endl;
					cout << "          ||      " <<endl;
					q = q -> next;
				}

			cout << " Null ";
			cout << endl;
		}

}

int main()
{
	char choice;
	node tmp;
	init();

	do{
		fflush (stdin);
		cout << endl <<endl;
        cout << " SINGLE LINKED LIST NON CIRCULAR  " <<endl;
        cout << "--------------------------------------" <<endl  <<endl;
        cout << " Option : 1. Create Data  " <<endl;
        cout << "          2. Delete Data " <<endl;
        cout << "          3. Print " <<endl;
        cout << "          4. Exit Program " <<endl;
        cout << "        -------------------" <<endl <<endl;
        cout << " Choice [ 1 - 4 ] : "; cin >> choice;

		switch (choice)
		{
			case '1':
				cout << " Insert NIM\t\t: " ; cin >> tmp.data.NIM;
				cout << " Insert Name\t\t: " ; cin >> tmp.data.Name;
				cout << " Insert Class\t\t: " ; cin >> tmp.data.Class;
				cout << " Insert Address\t\t: " ; cin >> tmp.data.Address;

				insert (tmp.data);
				getch ();
			break;

			case '2' :
				del_data();
				getch ();
			break;

			case '3' :
				print_data();
				getch ();
			break;

			case '4' :
				exit (0);
			break;

			default :
				cout <<endl;
				cout << " Please choose your option "<<endl;
			break ;
		}

	}while (choice != 4);
		return (0);

}
