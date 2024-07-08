//
//  main.cpp
//  getting_started_conditional
//
//  Created by Satvik Deep on 27/05/24.
//


//#include <iostream>
//using namespace std;
//
//int main () {
//    int rating = 5;
//
//    if (rating == 5){
//        cout << "5 star rated" << endl;
//    }
//    else if (rating == 3) {
//        cout << "3 star rated";
//    }
//    else{
//        cout << "Not 3 or 5 star rated" << endl;
//    }
//    printf("Your rating feedback is : %s\n", rating >= 4 ? "awesome" : "not that great. But we will work on it");
//    return 0;
//}
//    


//#include <iostream>
//using namespace std;
//
//int main(){
//    float rating;
//    
//    cout << "Enter your rating : " << endl;
//
//    cin >> rating;
//    
//    if (rating == 1) {
//        cout << "Rating = 1" << endl;
//    }
//    else if (rating==2){
//        cout << "Rating = 2" << endl;
//    }
//    else if (rating==3){
//        cout << "Rating = 3" << endl;
//    }
//    else if (rating==4){
//        cout << "Rating = 4" << endl;
//    }
//    else if (rating==5){
//        cout << "Rating = 5" << endl;
//    }
//    else {
//        cout << "Please enter a valid input"  << endl;
//    }
//    
//    return 0;
//}

#include <iostream>
using namespace std;

int main(){
    int rating = 5;
    
    switch(rating){
        case 1:
            printf("Rated as 1 star");
            break;
        case 2:
            printf("Rated as 2 star");
            break;
        case 3:
            printf("Rated as 3 star");
            break;
        case 4:
            printf("Rated as 4 star");
            break;
        case 5:
            printf("Rated as 5 star");
            break;
        default:
            printf("Enter a valid rating");
            break;
    }
    
    return 0;
}
