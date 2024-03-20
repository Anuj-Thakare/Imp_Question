// #include <iostream>
// using namespace std;
// int main(){
//      for(int i=1;i<=5;i++){
//         for(int k=5-i;k>=1;k--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     * 
//    * *
//   * * *
//  * * * *
// * * * * *





// #include <iostream>
// using namespace std;
// int main(){
//   for(int i=5;i>=1;i--){
//         for(int k=5-i;k>=1;k--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// * * * * * 
//  * * * *
//   * * *
//    * *
//     *





// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(j>=n-(i-1) && j<=n+(i-1)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     *    
//    ***   
//   *****  
//  ******* 
// *********




// Without using space
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int k=0;
//         for(int j=1;j<=2*n-1;j++){
//             if(j>=n-(i-1) && j<=n+(i-1) && k==0){
//                 cout<<"*";
//                 k=1;
//             }else{
//                 cout<<" ";
//                 k=0;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//    *   
//   * *  
//  * * * 
// * * * *




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(j>=n-(i-1) && j<=n+(i-1)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=2;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(j>=i && j<=2*n-i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     *    
//    ***   
//   *****  
//  ******* 
// *********
//  ******* 
//   *****
//    ***
//     *




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int k=0;
//         for(int j=1;j<=2*n-1;j++){
//             if(j>=n-(i-1) && j<=n+(i-1) && k==0){
//                 cout<<"*";
//                 k=1;
//             }else{
//                 cout<<" ";
//                 k=0;
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=2;i<=n;i++){
//         int k=0;
//         for(int j=1;j<=2*n-1;j++){
//             if(j>=i && j<=2*n-i && k==0){
//                 cout<<"*";
//                 k=1;
//             }else{
//                 cout<<" ";
//                 k=0;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     *    
//    * *   
//   * * *  
//  * * * * 
// * * * * *
//  * * * * 
//   * * *
//    * *
//     *
