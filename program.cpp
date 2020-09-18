#include<iostream>
using namespace std;

 struct laptop {
 char name[20];
 int price;
 float screen_size;
 int Ram;
 int time;
 void input_data(){
 cout<<"input the specification of laptop \n";
 cout<<"input laptop name:";
 cin>>name;
 cout<<"input price :";
 cin>>price;
 cout<<"input screen size :";
 cin>>screen_size;
 cout<<"input Ram Size :";
 cin>>Ram;
 cout<<"input warrenty:";
 cin>>time;

 }

 void display_data(){

  cout<<"\n laptop name: "<<name<<endl;
  cout<<"input price :"<<price<<" $"<<endl;
  cout<<"screen size :"<<screen_size<<" inch"<<endl;
  cout<<"Ram-size: "<<Ram<<" GB"<<endl;
  cout<<"warrenty time: "<<time<<" yrs\n \n";


 }

 };

int main(){
 struct laptop l1,l2,l3,l4;

 l1.input_data();
 l2.input_data();
 l3.input_data();
 l4.input_data();
 l1.display_data();
 l2.display_data();
 l3.display_data();
 l4.display_data();

 return 0;


 }
