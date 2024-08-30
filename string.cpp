#include<iostream>
#include<string.h>
using namespace std;
class t{
    public:
    string s1,s2;
    public:
    void acccept();
    void display();
    int  length(const string& s);
    void copy();
    void cmp();
    void concate();
    void reverse();
}a;
void t::acccept(){
    cin>>s1;
    cin>>s2;
}
void t::display(){
    cout<<s1<<endl;
    cout<<s2;
}
int t::length(const string& s){
    int count=0;
for(int i=0;s[i]!='\0';i++)
{
    count++;
}
return count;
}
void t::copy() {
    int i;
    int len1 = a.length(s1); 
    int len2 = a.length(s2);
    if (len1 < len2) {
        cout << "s1 does not have enough space to hold s2";
        return;
    }

    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0'; 
    cout << s1;
}

void t::cmp(){
    int flag=0;
    int len1=length(s1);
    int len2=length(s2);
if(len1==len2)
{
for(int i=0;i<len1;i++)
{
    if(s1[i]!=s2[i])
    {
        flag=1;
        break;
    }
}
}
else{
    cout<<"not equal";
}
if(flag==0){
      cout<<" equal";
}
else{
    cout<<"not equal";
}
}
void t::concate(){
    int len1=a.length(s1);
    int len2=a.length(s2);
    int i=len1;
    for(int j=0;s2[j]!='\0';j++)
    {
    s1+=s2[j];
     i++;
    }
    cout<<s1;
}
void t::reverse(){
    string s1;
    cin>>s1;
    int l1=a.length(s1);
     string s2=" ";
    int j=0;
    
for(int i=l1-1;i>=0;i--){
    s2+=s1[i];
    j++;
}   
cout<<s2;
}   int main(){
int ch;
string m;
  int b;
do{
    cout<<"1.accept\n2.display\n3.length\n4.compare\n5.concatinate\n6 reverse\n7.copy \n8end";
cout<<"\nenter your choice";
cin>>ch;
switch(ch){
    case 1:
        a.acccept();
    break;
    case 2:
        a.display();
    break;
    case 3:cout<<"enter string ";
    cin>>m;
   b=a.length(m);
    cout<<b;
    break;
    case 4:a.cmp();
    break;
    case 5:a.concate();
    break;
    case 6:a.reverse();
    break;
    case 7:a.copy();
    break;
}
}
while(ch!=0);
return 0;
    }