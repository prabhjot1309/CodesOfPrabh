#include <iostream>
using namespace std;
class code 
{
    int id;
    public:
    code(){}
    code ( int a){ id = a;}
    code (code & x)
    {
        id= x.id;
    }
    void dispaly(void)
    {
        cout<<id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;
    D=A; 
    cout<<"/n id of A:";A.dispaly();
     cout<<"/n id of B:";B.dispaly();
      cout<<"/n id of C:";C.dispaly();
       cout<<"/n id of D:";D.dispaly();
        return 0;
}