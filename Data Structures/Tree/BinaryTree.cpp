#include<iostream>
using namespace std;
#define max 20
char tree[max];

void root(char info){
    if(tree[0]=='\0'){
        tree[0] = info;
    }else{
        cout<<"\nRoot Node is already created !\n";
    }
    cout<<"Root  Node Address of "<<info<<" : 0"<<endl;
}

void setleft(char info, int parent){
    if(tree[parent]=='\0'){
        cout<<"\nCan't set node at "<<(parent * 2)+1<<" ,Parent node doesn't exist !\n";    }
    else{
        tree[(parent * 2) + 1] = info;
    }
    cout<<"left  Node Address of "<<tree[(parent * 2) + 1]<<" : "<<(parent * 2) + 1<<endl;
}

void setright(char info, int parent){
    if(tree[parent]=='\0'){
        cout<<"\nCan't set node at "<<(parent * 2)+2<<" ,Parent node doesn't exist !\n";
    }
    else{
        tree[(parent * 2) + 2] = info;
    }
    cout<<"Right Node Address of "<<tree[(parent * 2) + 2]<<" : "<<(parent * 2) + 2<<endl;
}

void search(char info){
    for(int i=0; i<max; i++){
        if(tree[i]==info){
            cout<<tree[i]<<" Founded at location- "<<i+1<<endl;
            return;
        }
    }
    cout<<info<<" Does not Exist !\n";   
}

void deleteNode(int parent){
    cout<<tree[parent]<<" Node Deleted :( \n";   
    cout<<tree[(parent * 2) + 1]<<" Deleted :( \n";   
    cout<<tree[(parent * 2) + 2]<<" Deleted :( \n";
    
    tree[parent] = '\0';   
    tree[(parent * 2) + 1] = '\0';
    tree[(parent * 2) + 2] = '\0';
}

void display(){
    for(int i=0; i<max; i++){
        if(tree[i]!='\0'){
            cout<<tree[i]<<" ";
        }else{
            cout<<"- ";
        }
    }
    cout<<endl;
}

int main(){
    cout<<"\nTree\n";
    root('A');
    setleft('B',0);
    setright('C',0);
    setleft('D',1);
    setright('E',1);
    setleft('X',3);
    setright('Y',3); 
    setright('F',2);
    
    display();
    //search('B');
    //search('4');

    deleteNode(1);
    display();
    return 0;
}