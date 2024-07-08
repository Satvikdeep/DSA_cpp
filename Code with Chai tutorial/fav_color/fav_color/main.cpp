//
//  main.cpp
//  fav_color
//
//  Created by Satvik Deep on 21/05/24.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
////int main(){
////    string my_color;
////    cout << "Enter you fav colour: \n";
////    getline(cin, my_color);
////    cout << "Hey, "<<my_color << " is my fav too" <<endl;
////
////    return 0;
////}



// void and 0 are different things.
// void is valueless

#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name;
    cout << "Enter your first name : \n";
    getline (cin,first_name);
    cout << "Enter your last name : \n";
    string last_name;
    getline (cin, last_name);
    cout << "Hey your name is "<<first_name <<" " << last_name<< endl;

    
}
