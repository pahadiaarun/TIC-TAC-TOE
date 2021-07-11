#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

static char a[11][11]={
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {' ', '1', ' ', '|',' ', '2', ' ', '|',' ', '3', ' '},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {'-', '-', '-', '|','-', '-', '-', '|','-', '-', '-'},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {' ', '4', ' ', '|',' ', '5', ' ', '|',' ', '6', ' '},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {'-', '-', '-', '|','-', '-', '-', '|','-', '-', '-'},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {' ', '7', ' ', '|',' ', '8', ' ', '|',' ', '9', ' '},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
    };
char b[11][11]={
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {' ', '1', ' ', '|',' ', '2', ' ', '|',' ', '3', ' '},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {'-', '-', '-', '|','-', '-', '-', '|','-', '-', '-'},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {' ', '4', ' ', '|',' ', '5', ' ', '|',' ', '6', ' '},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {'-', '-', '-', '|','-', '-', '-', '|','-', '-', '-'},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
        {' ', '7', ' ', '|',' ', '8', ' ', '|',' ', '9', ' '},
        {' ', ' ', ' ', '|',' ', ' ', ' ', '|',' ', ' ', ' '},
    };
void matrix(){
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            a[i][j]=b[i][j];
        }
    }
}
void display(){
    cout<<endl;
    cout<<endl;
    cout<<"               TIC TAC TOE"<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0;i<11;i++){
        cout<<"          ";
        for(int j=0;j<11;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}


int main() {
    system("color 4F");
    cout<<endl;
    display();
    int n=10;
    int i=0;
    int t;
    int y=0;
    char b;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    while(n!=0){
        cout<<endl;
        if(i==0){
            cout<<"               PLAYER 1 YOUR SYMBOL IS O & PLAYER 2 YOUR SYMBOL IS X\n"<<endl;
        }
        i++;
        if(i==10){
            if(y==0){
                cout<<"               DRAW MATCH"<<endl;
            }
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"               DO YOU WANT TO PLAY AGAIN?\n               PRESS 1 TO PLAY AGAIN\n               PRESS 0 TO EXIT"<<endl;
            cout<<"               :";
            cin>>t;
            if(t==1){
                i=0;
                system("cls");
                matrix();
                display();
                continue;
            }
            if(t==0){
                break;
            }
        }
        if(i%2==0){
            cout<<"               PLAYER 2 TURN"<<endl;
            b='X';
        }
        else{
            cout<<"               PLAYER 1 TURN"<<endl;
            b='O';
        }
        cout<<"               PRESS 0 IF YOU WANT TO EXIT"<<endl;
        cout<<"               ENTER WHICH POSITION YOU WANT TO CHOOSE:";
        cin>>n;
        switch(n){
            case 1:
                a[1][1]=b;
                break;
            case 2:
                a[1][5]=b;
                break;
            case 3:
                a[1][9]=b;
                break;
            case 4:
                a[5][1]=b;
                break;
            case 5:
                a[5][5]=b;
                break;
            case 6:
                a[5][9]=b;
                break;
            case 7:
                a[9][1]=b;
                break;
            case 8:
                a[9][5]=b;
                break;
            case 9:
                a[9][9]=b;
                break;
            default:
                cout<<"               INVALID INPUT"<<endl;
                break;
        }
        system("cls");
        display();
        if(a[1][1]==a[1][5] && a[1][1]==a[1][9]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[1][1]==a[6][5] && a[1][1]==a[9][9]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[1][1]==a[5][1] && a[1][1]==a[9][1]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[1][5]==a[5][5] && a[1][1]==a[9][5]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[1][9]==a[5][9] && a[1][9]==a[9][9]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[1][9]==a[5][5] && a[1][9]==a[9][1]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[5][1]==a[5][5] && a[5][1]==a[5][9]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
        if(a[9][1]==a[9][5] && a[9][1]==a[9][9]){
           y=1;
           i=9;
           if(a[1][1]=='O'){
                cout<<"               CONGRATULATIONS PLAYER 1 YOU WON"<<endl;
           }
           if(a[1][1]=='X'){
                cout<<"               CONGRATULATIONS PLAYER 2 YOU WON"<<endl;
           }
        }
    }
    return 0;
}
