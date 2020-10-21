#include <iostream>

//For Windows User
//#include <windows.h>

// Name 	: Rizki Andrianto
// Github	: https://github.com/Andriana7

using namespace std;

int main()
{
    bool v=true;
    char option;
    int i,j;
    while(v){
        cout<<"===============================================\n";
        cout<<"Welcome to My Program Please Choose Your Option\n";
        cout<<"===============================================\n";
        cout<<"1. Array 1 Dimension\n";
        cout<<"2. Array 2 Dimension\n";
        cout<<"3. Out From Program\n";
        cout<<"Answer : ";
        cin>>option;
        if(option=='1'){
            bool v1=true,v2=true;
            while(v1){
                system("cls");
                int totalData;
                cout<<"Input Total Data : ";
                cin>>totalData;
                int Array1[totalData];
                cout<<"\nInput Yout Data ! \n\n";
                for(i=0;i<totalData;i++){
                    cout<<"Input Data - "<<i+1<<" : ";
                    cin>>Array1[i];
                }
                cout<<"\n\n";
                for(i=0;i<totalData;i++){
                    cout<<"Data - "<<i+1<<" : "<<Array1[i]<<endl;
                }
                while(v2){
                    cout<<"\n\nReset? (y/n) : ";
                    char ans;
                    cin>>ans;
                    if(ans=='y'||ans=='Y'){
                        continue;
                    }else if(ans=='n'||ans=='N'){
                        v1=false;
                        system("cls");
                        v2=false;
                    }else{
                        cout<<"Invalid Answer!!\n";
                        system("pause");
                        system("cls");
                    }
                }
            }
        }else if(option=='2'){
            bool v1=true,v2=true;
            while(v1){
                system("cls");
                int totalData1,totalData2;
                cout<<"Input Total Data 1 (Array [x] []) : ";
                cin>>totalData1;
                cout<<"Input Total Data 2 (Array [] [x]) : ";
                cin>>totalData2;
                int Array1[totalData1][totalData2];
                cout<<"\nInput Your Data! \n\n";
                for(i=0;i<totalData1;i++){
                    for(j=0;j<totalData2;j++){
                        cout<<"Input Data - ["<<i+1<<"]["<<j+1<<"] : ";
                        cin>>Array1[i][j];
                    }
                }
                cout<<"\n\n";
                for(i=0;i<totalData1;i++){
                    for(j=0;j<totalData2;j++){
                        cout<<"Data - "<<i+1<<" "<<j+1<<" : "<<Array1[i][j]<<endl;
                    }
                    cout<<endl;
                }
                while(v2){
                    cout<<"\n\nReset? (y/n) : ";
                    char ans;
                    cin>>ans;
                    if(ans=='y'||ans=='Y'){
                        continue;
                    }else if(ans=='n'||ans=='N'){
                        v1=false;
                        v2=false;
                        system("cls");
                    }else{
                        cout<<"Invalid Answer!!\n";
                        system("pause");
                        system("cls");
                    }
                }
            }
        }else if(option=='3'){
            cout<<"Thank You For Using This Program :)";
            v=false;
        }else {
            cout<<"Invalid Answer!!\n";
            system("pause");
            system("cls");
        }
    }
}
