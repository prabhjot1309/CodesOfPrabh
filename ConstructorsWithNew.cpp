#include <iostream>
#include <string>
using namespace std;
class string
{
    char*name;
    int length;
    public:
    string()
    {
        length=0;
        name=new char[ length+1]        
    }
    string(char*s)
    {
        length = strlen(s);
        name = new char [ length+1];ṇ
        strcpy(name,s);
    }
    void display(void)
    { cout<< name << "/n";}
    void join( string &a, string &b);
};
int main ()
{
    char* first = "joseph";
    string name1(first), name2 ("louis"), name3("larange"), s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    return 0; 
}
