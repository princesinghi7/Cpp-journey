//  #include <iostream>
// using namespace std;
//  int main() { 
//     int count = 1;
//     while (count <= 50){
//         cout << count << endl;
//         count++;
//     }
//     return 0; 
//  }


// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 20;
//     int count = 1;
//     while (count <= n){
//         cout << count << endl;
//         count++;
//     }
//     return 0; 
//  }





// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 5;
//     for(int i=1; i<=n; i++){
//         cout << i << endl;
//     }
//     return 0; 
//  }



// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 500;
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//         if(i == 250){
//             break;
//         }
//     }
//     cout << "sum = " << sum << endl;
//     return 0; 
//  }




// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 500;
//     int sum = 0;
//     int i = 0;
//     while(i <= n ){
//         sum += i;
//         if(i == 250){
//             break;
//         }
//         i++;
//     }
//     cout << "sum = " << sum << endl;
//     return 0; 
//  }




// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 3;
//     int sum = 0;
//     for(int i = 1; i <= n; i++ ){
//         sum += i;
//         if(i %2 != 0)
//         i++;
//     }
//     cout << "sum = " << sum << endl;
//     return 0; 
//  }



// #include <iostream>
// using namespace std;
// int main() { 
//     int n = 3;
//     int sum = 0;
//     int i = 1;
//     while(i <= n){
//         if(i % 2 != 0){
//             sum += i;
//         }  
//         i++;
//     }
//     cout << "sum = " << sum << endl;
//     return 0; 
//  }



// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 10;
//     int sum = 0;
//     for(int i = 0; i <= n; i++ ){
//         sum += i;
//         if(i %2 == 0)
//         i++;
//     }
//     cout << "sum = " << sum << endl;
//     return 0; 
//  }


// #include <iostream>
// using namespace std;
//  int main() { 
//     do {
//         cout << " Hello World" << endl;
//     } while(3 > 5);
//     return 0; 
//  }




// #include <iostream>
// using namespace std;
//  int main() { 
//     int n = 10;
//     int i = 1;
//     do {
//         cout << i << " ";
//         i++;
//     } while(i <= n);
//     cout << endl;
//     return 0; 
//  }


// #include <iostream>
// using namespace std;
// int main(){
//     int n = 7;
//     bool isPrime = true;

//     for(int i = 2; i <= n-1; i++){
//         if (n % i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true){
//         cout << "prime no\n";
//     } else {
//         cout << "not a prime no\n";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n = 77;
//     bool isPrime = true;

//     for(int i = 2; i*i <= n-1; i++){
//         if (n % i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true){
//         cout << "prime no\n";
//     } else {
//         cout << "not a prime no\n";
//     }
//     return 0;
// } 


// #include <iostream>
// using namespace std;
// int main(){

//     int x = 10;
//     for(int i=1; i<=x; i++){
//         cout << "*" << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     for(int i=1; i<=n; i++){ // no of lines
//     int m = 10;
//     for(int j=1; j<=m; j++){ // no of stars in each line
//         cout << "*";
//      }
//      cout << endl;
//     }
//     return 0;
// }