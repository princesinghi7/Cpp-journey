// #include <iostream>
// using namespace std;

// int main() { 
    
//     int n = 4;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }


//     return 0; 
// }



// #include <iostream>
// using namespace std;

// int main() { 
    
//     int n = 4;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i+1; j++) {
//             cout << (i+1) << " ";
//         }
//         cout << endl;
//     }


//     return 0; 
// }


// #include <iostream>
// using namespace std;

// int main() { 
    
//     char n = 26;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i+1; j++) {
//             cout << char('A' + i) << " ";
//         }
//         cout << endl;
//     }


//     return 0; 
// }

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1; j++){
            cout << j << " ";

        }
        cout << endl;
    }
}