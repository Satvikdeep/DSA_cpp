#include <iostream>
using namespace std;

int card_game(int a, int b, int c, int d){
    int x = 0;
    if (a > c){
        x = x+1;
        if (a>d){
            x = x+1;
        }
        if (b>c){

        }
    }

    else if (a>d){
        x=x+1;
        if (b>c){
            x = x+1;
        }
    }

    else if (a>d){
        x=x+1;
        if (b>c){
            x = x+1;
        }
    }

    else if (a>d){
        x=x+1;
        if (b>c){
            x = x+1;
        }
    }

    return x;
}

int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int a,b,c,d;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;

        cout << card_game(a, b, c, d) << endl;

    }
}



P

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << card_game(a, b, c, d) << endl;
    }

    return 0;
}