#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct book{
    string title;
    string author;
    int id;
};
struct member{
    string name;
    string profession;
    int age;
    int id;
};
int main(){

   vector<book> books;
   vector<member> members;
   int bid=1;
   int mid=1;
   int c;
   cout<<"WELCOME TO LIBRARY"<<endl;
   do{
    cout<<"Enter 1 for Adding Book"<<endl<<"Enter 2 for Adding Member"<<endl<<"Enter 3 for Updating Book"<<endl<<"Enter 4 for Updating Member"<<endl<<"Enter 5 for Deleting Book"<<endl<<"Enter 6 for Deleting Member"<<endl<<"Enter 7 for Displaying Books"<<endl<<"Enter 8 for Displaying Members"<<endl<<"Enter 9 to exit"<<endl;
    cin>>c;
    switch(c){
        case 1:{
            string title, author;
            cout<<"Enter Book title:"<<endl;
            cin.ignore();
            getline(cin,title);
            cout<<"Enter Author's name:"<<endl;
            getline(cin,author);
            book newbook;
            newbook.title=title;
            newbook.author=author;
            newbook.id=bid++;
            books.push_back(newbook);
            cout<<"Book added, enter next operation"<<endl;
            break;
        }
        case 2:{
            string name; string profession; int age;
            cout<<"Enter member name"<<endl;
            cin.ignore();
            getline(cin,name);
            cout<<"Enter member profession"<<endl;
            getline(cin,profession);
            cout<<"Enter member age"<<endl;
            cin>>age;
            member newmember;
            newmember.name=name;
            newmember.profession=profession;
            newmember.age=age;
            newmember.id=mid++;
            members.push_back(newmember);
            cout<<"Member added, enter next operation"<<endl;
            break;
        }
        case 3:{
            int id;
            string newtitle, newauthor;
            cout<<"Enter ID of the book"<<endl;
            cin>>id;
            cout<<"Enter new title"<<endl;
            cin.ignore();
            getline(cin,newtitle);
            cout<<"Enter new author"<<endl;
            getline(cin,newauthor);
            for(int i=0;i<books.size();i++){
                if(books[i].id==id){
                    books[i].title=newtitle;
                    books[i].author=newauthor;
                    cout<<"Book updated, enter next operation"<<endl;
                    break;
                }
                else{
                    cout<<"Book doesn't exist, enter next operation"<<endl;
                }
            }
            break;
        }
        case 4:{
            int id, newage;
            string newname, newprofession;
            cout<<"Enter ID of the member"<<endl;
            cin>>id;
            cout<<"Enter new name. If there is no change then enter the same data again"<<endl;
            cin.ignore();
            getline(cin,newname);
            cout<<"Enter new profession. If there is no change then enter the same data again"<<endl;
            getline(cin,newprofession);
            cout<<"Enter new age. If there is no change then enter the same data again"<<endl;
            cin>>newage;
            for(int i=0;i<members.size();i++){
                if(members[i].id==id){
                    members[i].name=newname;
                    members[i].profession=newprofession;
                    members[i].age=newage;
                    cout<<"Member updated, enter next operation"<<endl;
                    break;
                }
                else{
                    cout<<"Member doesn't exist, enter next operation"<<endl;
                }
            }
            break;
        }
        case 5:{
            int id;
            cout<<"Enter ID of book to delete"<<endl;
            cin>>id;
            for(int i=0;i<books.size();i++){
                if(books[i].id==id){
                    books.erase(books.begin()+i);
                    cout<<"Book deleted, enter next operation"<<endl;
                    break;
                }
                else{
                    cout<<"Book doesn't exist, enter next operation"<<endl;
                }
            }
            break;
        }
        case 6:{
            int id;
            cout<<"Enter ID of member to delete"<<endl;
            cin>>id;
            for(int i=0;i<members.size();i++){
                if(members[i].id==id){
                    members.erase(members.begin()+i);
                    cout<<"Member deleted, enter next operation"<<endl;
                    break;
                }
                else{
                    cout<<"Member doesn't exist, enter next operation"<<endl;
                }
            }
            break;

        }
        case 7:{
            cout<<"Books available are:"<<endl;
            for(int i=0;i<books.size();i++){
                cout<<"ID:"<<books[i].id<<"  Title: "<<books[i].title<<"  Author: "<<books[i].author<<endl;
            }
            break;
        }
        case 8:{
            cout<<"Members available are:"<<endl;
            for(int i=0;i<members.size();i++){
                cout<<"ID:"<<members[i].id<<"  Name: "<<members[i].name<<"  Profession: "<<members[i].profession<<"  Age: "<<members[i].age<<endl;
            }
            break;
        }
        case 9:{
            break;
        }
        default:{
            cout<<"Invalid option, enter correct operation."<<endl;
        }

    }
   }while(c!=9);
    return 0;
}

