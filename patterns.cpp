
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i=1; i<=n; i++){ // no of lines
//     int m = 5;
//     for(int j=1; j<=m; j++){ // no of stars in each line
//         cout << "*";
//      }
//      cout << endl;
//     }
//     return 0;
// }


// square pattern of numbers

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){ // outer
//         for(int j=1; j<=n; j++){ // inner
//           cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i=1; i<n; i++){ // outer
//         char ch = 'A'; // Ascii value of 'A' is 65
//         for(int j=0; j<n; j++){ // inner
//           cout << ch << " ";
//           ch = ch + 1; // increment character 
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    for(int i=0; i<n; i++){ // outer
        for(int j=0; j<n; j++){ // inner
          cout << num << " ";
          num ++ ;
        }
        cout << endl;
    }
    cout << "after pattern : " << num << endl;
    return 0;
}
