#include<iostream>
using namespace std;
int n;
class pizaa{
    private:
    int r=-1,f=-1,q,totalcost,time=0,order=0;
    string name,add;
    public:
    void takeorder();
    void serveorder();
    void display();
    void search();
    void update();
}a[100];
void pizaa::takeorder(){
    if(r==-1 && f==-1){
        r=0,f=0;
        cout<<"congratulations you are our first customer so you get 10 percent discount";
        cout<<"enter the your name";
        cin>>a[r].name;
        cout<<"enter your address";
        cin>>a[r].add;
        cout<<"enter how many pizaa you want?";
        cin>>a[r].q;
        a[r].totalcost=(a[r].q*100)*0.9;
        a[r].time=10;
        cout<<"time require for your order is"<<a[r].time;//displayinhg the total time for order
        cout<<"are you ready to wate for "<<a[r].time<<"enter 1 for yes and 0 for no";//asking user where they are waiting for that particular time
        cin>>a[r].order;
        if(a[r].order==0){//if user is not going to wait for their order then that order is cancelled 
            cout<<"your order"<<a[f].name<<"\t"<<a[f].add<<"\t"<<a[f].q<<"is cancelled succesfully";
        }
    }
    else if(r==f-1||(r==n-1 && f==0)){
           cout<<"orders are full now";
    }
    else{
        r=(r+1)%10;//incrementing the circular queue
        cout<<"enter the your name";
        cin>>a[r].name;
        cout<<"enter your address";
        cin>>a[r].add;
        cout<<"enter how many pizaa you want?";
        cin>>a[r].q;
        a[r].totalcost=a[r].q*100;
        a[r].time=a[r-1].time+a[r].q*10;
        cout<<"time require for your order is"<<a[r].time;
        cout<<"are you ready to wate for "<<a[r].time<<"enter 1 for yes and 0 for no";
        cin>>a[r].order;
        if(a[r].order==0){
            cout<<"your order"<<a[r].name<<"\t"<<a[r].add<<"\t"<<a[r].q<<"is cancelled succesfully";
        }
    else if(r==f-1||(r==n-1 && f==0)){
           cout<<"orders are full now";
    }
    }
}
void pizaa::serveorder(){
    if(r==-1 && f==-1){
     cout<<"no order remain to serve";
    }
    else if(r==f){
       cout<<"order served is "<<a[f].name<<"\t"<<a[f].add<<"\t"<<a[f].q<<"\t"<<a[f].totalcost<<"\t"<<a[f].time<<"\n";
       r=-1,f=-1;
    }
    else{
        cout<<"order served is "<<a[f].name<<"\t"<<a[f].add<<"\t"<<a[f].q<<"\t"<<a[f].totalcost<<"\t"<<a[f].time<<"\n";
        f=(f+1)%n;
    }
}
void pizaa::display() {
    if (r == -1 && f == -1) {  // No orders to display
        cout << "No order is remaining in the shop.\n";
    } else {
        int i = f;
        cout << "Name\tAddress\tQuantity\tTotal Cost\tTime\n";
        
        while (i != r) {
            if (a[i].order != 0) {  //use this condition to dipslay non cancelled amount 
                cout << a[i].name << "\t" << a[i].add << "\t" << a[i].q << "\t\t" 
                     << a[i].totalcost << "\t\t" << a[i].time << "\n";
            }
            i = (i + 1) % n;
        }

        // Display the last order at position r
        if (a[r].order != 0) {  // Check if the last order is not canceled or not 
            cout << a[r].name << "\t" << a[r].add << "\t" << a[r].q << "\t\t" 
                 << a[r].totalcost << "\t\t" << a[r].time << "\n";
        }
    }
}void pizaa::update(){
    string customername,customeradd;
    int flag=0;
    cout<<"enetr the name and address of the customer whose order is to be update";
    cin>>customername>>customeradd;
    for(int i=0;i<n;i++){
        if(a[r].name==customername && a[r].add==customeradd){
            flag=1;
           cout<<"enter the your name";
        cin>>a[r].name;
        cout<<"enter your address";
        cin>>a[r].add;
        cout<<"enter how many pizaa you want?";
        cin>>a[r].q;
        }
    }
    if(flag==0){
        cout<<"the name you have entered is not in our records";
    }
}
void pizaa::search(){
       string customername,customeradd;
    int flag=0;
    cout<<"enter the name and addresss of the customer whhich you want to search";
    cin>>customername>>customeradd;
     for(int i=0;i<n;i++){
        if(a[r].name==customername && a[r].add==customeradd){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"the name you have entered is present  in our records";
        cout<<"the total time for your order is "<<a[r].time;
        cout<<"\nyour total costis"<<a[r].totalcost;
    }
    else if(flag==0){
        cout<<"the name and addresss is not present in our record";
    }
}

int main(){
    int ch,i;
    cout << "enter total no. of orders:";
    cin >> n;
    do
    {
        cout << "\n1.Accept Order\n2.Serve Order\n3.Display Order\n4.update\n5.search\n";
        cout << "\nEnter Ur Choice:\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            a[0].takeorder();
            break;
        case 2:
            a[0].serveorder();
            break;
        case 3:
            a[0].display();
            break;
        case 4:a[0].update();
        break;
        case 5:a[0].search();
        break;
        }
    }
    while (ch != 0);
    return 0;
}
