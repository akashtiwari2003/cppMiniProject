#include <bits/stdc++.h>
#include <windows.h>
#define loop(i, j) for (int i = 0; i < j; ++i)
using namespace std;

vector<int> getArrayInput(){
    int n,i;
    cout << "Enter the number of elements:- ";
    cin >> n;
    vector<int> v(n);
    for(i = 0; i<n; ++i){
        cout << "Element " << i+1 << ":- ";
        cin >> v[i];
    }
    return v;
}

void printSpaces(int n)
{
    loop(i, n)
        cout<< " ";
}

void printBorder(vector<int> v, int index, string box)
{
    loop(i, v.size())
    {
        if (i == index)
        {
            cout << box << endl;
            break;
        }
        printSpaces(floor(log10(v[i]) + 1) + 3);
    }
}

void printArray(vector<int> v, int index)
{
    string box = "+";
    int cntdigits = floor(log10(v[index]) + 1);
    loop(i, cntdigits + 2)
    {
        box += "-";
    }
    box += "+";
    printBorder(v, index, box);
    loop(i, v.size())
    {
        if (i == index)
        {

            cout << "| " << v[i] << " |";
        }
        else
        {
            cout << v[i];
        }
        printSpaces(3);
    }
    cout << endl;
    printBorder(v, index, box);
}

void printMainMenu()
{
    cout << "1 -> Searching\n2 -> Sorting\n3 -> Exit\nEnter your choice :- ";
}

void linearSearch(){
    int i,n,tmp,t,notFound = 0;
    string ip;
    vector<int> v = getArrayInput();
    cout << "Enter the element to search :- ";
    cin >> tmp;
    cout << "Enter the time delay in seconds:- ";
    cin >> t;
    for(i = 0; i<v.size(); ++i){
        Sleep(t*1000);
        printArray(v,i);
        if(v[i] == tmp){
            cout << tmp << " is at index "<< i << endl;
            ++notFound;
            break;
        }
    }
    if(!notFound){
        cout << tmp << "not found in the given list!!" << endl;
    }
    system("PAUSE");
}
int main()
{
    vector<int> v;
    int choice, choice2;
    string name;
    cout << "Please Enter Your Name :- ";
    getline(cin, name);
    cout << "\nWelcome to S&S Simplified!!! " << name << "\n";
        
    while(1){
        printMainMenu();
        cin >> choice;
        if(choice == 1){
        cout << "1 -> Linear Search\n2 -> Binary Search\n";
        cout << "Select one to go ahead :- ";
        cin >> choice2;
        if(choice2 == 1){
            linearSearch();
        }
        }
        else if(choice == 2){
            cout << "1 -> Bubble Sort\n2 -> Insertion Sort\n3 -> Merge sort\n4 -> Quick Sort\n";
            cout << "Select one to go ahead :- ";
            cin >> choice2;
        }
        else if(choice == 3){
            exit(0);
        }
        else
            cout << "Invalid choice!! Try Again\n";
    }

    
    return 0;
}
