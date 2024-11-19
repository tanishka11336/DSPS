#include<iostream>
using namespace std;

class lsearch{
    int a[100], key, n, found=0;
public:
    void accept();
    int search();
    int scount();
    void FLsearch();
};

void lsearch::accept(){
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int lsearch::search() {
    cout << "Enter a key: ";
    cin >> key;
    found = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            found = 1;
            cout << "Key found at index: " << i << endl;
            return i;
        }
    }
    if(found == 0){
        cout << "Key not found" << endl;
        return -1;
    }    
}

int lsearch::scount(){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            count++;
        }
    }
    cout << "Key count: " << count << endl;
    return count;
}

void lsearch::FLsearch(){
    int firstocc = -1, lastocc = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            if(firstocc == -1){
                firstocc = i;
            }
            lastocc = i;
        }
    }
    if(firstocc != -1){
        cout << "First occurrence of key: " << firstocc << endl;
        cout << "Last occurrence of key: " << lastocc << endl;
    } else {
        cout << "Key not found" << endl;
    }
}

int main() {
    lsearch l;
    l.accept();  
     int choice;
   do{
   
        cout<<"menu of code";
        cout << "Choose an operation: \n1. Search Key\n2. Count Key Occurrences\n3. Find First and Last Occurrences\n4. Exit\n";
        cin>>choice;
        switch (choice) {
            case 1:
                l.search();
                break;
            case 2:
                l.scount();
                break;
            case 3:
                l.FLsearch();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
    while(choice!=4);
    return 0;
}
