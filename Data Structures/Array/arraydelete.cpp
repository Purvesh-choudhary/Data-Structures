#include<iostream>
using namespace std;

int ar['x']={1,2,3,4,5,6,7,8,9,10};
int x=10;
void Display()
{
  for(int i=0; i<x; i++)
    cout<<ar[i]<<" ";
}

void Delete(int Loc)
{
  int temp = ar[Loc];
  for(int i=Loc; i<x; i++)
    ar[i] = ar[i+1];
  x--;
  cout<<"Item Deleted - "<<temp<<endl;
}
int  main ()
{
  int loc;
  char c;
   Display();
  do{
    cout<<"\nEnter location of element for delete - ";
    cin>>loc;
    Delete(loc);
    cout<<"New Array - ";
    Display();
    cout<<"\nWanna Continue ? y/n - ";
    cin>>c;
  }while(c != 'n');
  cout<<"Proogram ended !";
}