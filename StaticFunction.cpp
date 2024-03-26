#include <iostream>
using namespace std;
 
class Nokia{
private:
    /*
        *declaring variable as staric, so that-
        *it will be accessible to the static functions
    */
    static string phone_name;   
public:
    //static function I
    static void name(){
        cout << "Phone: "<< phone_name;
    }
    
    //static function II
    static void set_name(string name){
        phone_name = name;
    }
};
 
//Initializing private static member
string Nokia::phone_name = "";
 
int main()
{
    //no object jas been created
    //accessing static function directly with class name
    Nokia::set_name("Nokia 2600");
    Nokia::name();
 
    return 0;
}