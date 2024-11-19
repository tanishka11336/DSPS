#include <iostream>
#include <string.h>
using namespace std;
class t
{
public:
    string s1, s2;
public:
    void acccept();
    void display();
    int length(string s);
    void copy();
    void cmp();
    void concate();
    void reverse();
    void count();
    void pallindrome();
} a;
void t::acccept()
{
    cin >> s1;
    cin >> s2;
}
void t::display()
{
    cout << s1 << endl;
    cout << s2;
}
int t::length( string s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void t::copy()
{
    int i;
    int len1 = a.length(s1);
    int len2 = a.length(s2);
    if (len1 < len2)
    {
        cout << "s1 does not have enough space to hold s2";
        return;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    cout << s1;
}
void t::cmp()
{
    int flag = 0;
    int len1 = length(s1);
    int len2 = length(s2);
        for (int i = 0; i < len1; i++)
        {
            if (s1[i]!=s2[i])
            {
                flag = 1;
                break;
            }
        }
    if (flag == 0)
    {
        cout << "equal";
    }
    else if(flag==1){
 cout<<"not equal";
}
}
void t::concate()
{
    int len1 = a.length(s1);
    int len2 = a.length(s2);
    int i = len1 - 1;
    for (int j = 0; s2[j] != '\0'; j++)
    {
        s1 += s2[j];
        i++;
    }
    cout << s1;
}
void t::reverse()
{
    int i;
    string temp = s1;
    int len = a.length(temp);
    char reversed[len];
    int j = 0;
    for ( i = len - 1; i >= 0; i--)
    {
        reversed[j] = temp[i];
        j++;
    }
    reversed[j]='\0';
    cout << reversed << endl;
}
void t::count()
{
    int len = length(s1);
    bool visited[len] = {false}; 
    bool isUnique[len] = {true};
    for (int i = 0; i < len; i++)
    {
        if (visited[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (s1[i] == s1[j])
            {
                visited[j] = true;
                count++;
            }
        }

        if (count > 1)
        {
            isUnique[i] = false;
        }

        
        cout << "element " << s1[i] << " occurs " << count << " times\n";
    }


    cout << "Non-repeating characters: ";
    for (int i = 0; i < len; i++)
    {
        if (isUnique[i])
        {
            cout << s1[i];
        }
    }
    cout << endl;
}
//checking the string is pallindrome or not using user defined reverse function
// void t::pallindrome(){
//  int i;
//     string temp = s1;
//     int len = a.length(temp);
//     char reversed[len];
//     int j = 0;
//     for ( i = len - 1; i >= 0; i--)
//     {
//         reversed[j] = temp[i];
//         j++;
//     }
//     reversed[j]='\0';
//     if(reversed==temp)
//     {
//         cout<<"string is pallindrome";
//     }
//     else{
//         cout<<"not pallindrome";
//     }
// }
//checking the string is pallindrome or not using stack as an adt
void t::pallindrome(){
    string x;
cin>>x;
    int flag=0;
    int len=a.length(x);
char stack[len];
int top=-1;
for(int i=len-1;i>=0;i--){
    stack[++top]=x[i];
}
for(int i=0;i<len;i++)
{
if(x[i]==stack[i]){
    flag=1;
}
}
if(flag==0)
{
    cout<<"not pallindrome";
}
else if(flag==1)
{
    cout<<"pallindrome";
}
}
int main()
{
    int ch;
    string m;
    int b;
    do
    {
        cout << "1.accept\n2.display\n3.length\n4.compare\n5.concatinate\n6 reverse\n7.copy \n8count of occurance\n9.check if string is pallindrome or not.10.end";
        cout << "\nenter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            a.acccept();
            break;
        case 2:
            a.display();
            break;
        case 3:
            cout << "enter string ";
            cin >> m;
            b = a.length(m);
            cout << b;
            break;
        case 4:
            a.cmp();
            break;
        case 5:
            a.concate();
            break;
        case 6:
            a.reverse();
            break;
        case 7:
            a.copy();
            break;
        case 8:
            a.count();
            break;
        case 9:a.pallindrome();
        break;
        }
    } while (ch != 0);
    return 0;
}
