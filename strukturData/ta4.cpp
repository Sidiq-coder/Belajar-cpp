#include<iostream>
#include<string> 
using namespace std;

struct node
{
    int integerData;
    char charData;
    float floatData;
    string stringData;  
    bool boolData;      
    node *next;
}*start, *newptr, *save, *ptr;

node *create_new_node(int, char, float, string, bool);
void insert_at_beg(node *);
void display(node *);
void delete_node();

int main()
{
    start = NULL;
    int intData, altbool;
    char charData, altchar;
    float floatData;
    string strData;
    bool boolData;
    char ch='y';

    while(ch=='y' || ch=='Y'){
        cout<<"Masukkan nama: ";
        cin >> strData;
        cout<<"Masukan No Absen: ";
        cin>>intData;

        cout<<"Masukkan jenis kelamin (P/L): ";
        cin>>altchar;

        if (altchar == 'P' || altchar == 'p' || altchar == 'L' || altchar == 'l' ){
            charData = altchar;
        } else{
            charData = '-';
        }
        

        cout<<"Masukkan nilai IP: ";
        cin>>floatData;

        cout<<"Mahasiswa aktif/tidak (1 untuk aktif, 0 untuk non-aktif): ";
        cin>>altbool;
        if (altbool == 1 || altbool == 0){
            boolData = altbool;
        } else{
            boolData = 0;
        }
          

        cout<<"Membuat node baru..." << endl;

        newptr = create_new_node(intData, charData, floatData, strData, boolData);
        if(newptr != NULL)
        {
            cout<<"Berhasil membuat node baru..." << endl;
        }
        else
        {
            cout<<"Maaf, tidak dapat membuat node baru";
            return 0;
        }

        cout<<"Memasukkan node pada bagian awal list..." << endl;
        insert_at_beg(newptr);
        cout<<"Node berhasil dimasukkan di bagian awal list..." << endl;
        cout<<"List: ";
        display(start);
        cout<<"Mau membuat node baru? (y/n) ";
        cin>>ch;
    }

    do 
    { 
        cout<<"List:"; 
        display(start); 
        cout<<"Mau menghapus node pertama? (y/n) "; 
        cin>>ch; 
        if(ch=='y' || ch=='Y');{ 
            delete_node(); 
        } 
    } while(ch=='y' || ch=='Y');

    return 0;
}


node *create_new_node(int intData, char charData, float floatData, string strData, bool boolData)
{
    ptr = new node;
    ptr->integerData = intData;
    ptr->charData = charData;
    ptr->floatData = floatData;
    ptr->stringData = strData;
    ptr->boolData = boolData;  
    ptr->next = NULL;
    return ptr;
}


void insert_at_beg(node *np)
{
    if(start == NULL)
    {
        start = np;
    }
    else
    {
        save = start;
        start = np;
        np->next = save;
    }
}


void display(node *np)
{
    while(np != NULL)
    {
        cout << "Integer: " << np->integerData << endl;
        cout << "Char: " << np->charData << endl;
        cout << "Float: " << np->floatData << endl;
        cout << "String: " << np->stringData << endl;
        cout << "Bool: " << (np->boolData ? "aktif" : "non-aktif") << " -> " << endl;  
        np = np->next;
    }
    cout << "!!\n";
}

void delete_node(){
    if(start == NULL) { 
        cout<<"Underflow...!!" << endl; 
    } else { 
        ptr = start; 
        start = start->next; 
    } 
}