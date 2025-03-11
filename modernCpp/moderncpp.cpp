#include <iostream>
#include <array>
#include <vector>



int main() {
  
   std:: array<int, 4> arr = {1, 2, 3, 4}; //el arr da object mn el class array lw 3mltlo access kda arr[0] = 1 w kda hayt3aml m3aha kano array 3ady bs 3mltlo access kda arr.at(0) = 1  hayb2a taba3 el array class 
    
   std:: vector<int> myvector1 ={1,2,3,4,5};


    // std:: cout<<myvector.size()<<std::endl;
    // myvector.Spush_back(6);
    // std:: cout<<myvector.size()<<std::endl;
    // myvector.pop_back();
    // std:: cout<<myvector.size()<<std::endl;
    // myvector.assign(5, 100);
    // std:: cout<<myvector.at(3)<<std::endl;
   

    // for(auto it = myvector.begin(); it != myvector.end(); ++it) {
    //     std:: cout<<*it<<std::endl;
    // }
   




/******************************************************/
/*Using dynamically allocated array size with capacity tracking*/
// std::vector<int> myvector3;
    
// char choice;
// do {
//     int x;
//     std::cout << "Enter a number to add to the vector: ";
//     std::cin >> x;
//     myvector3.push_back(x);  // Dynamically grows the vector

//     std::cout << "Current size: " << myvector3.size() 
//               << ", Capacity: " << myvector3.capacity() << std::endl;

//     std::cout << "Do you want to add another number? (y/n): ";
//     std::cin >> choice;
// } while (choice == 'y');

// // Print elements
// std::cout << "Final vector elements: ";
// for (int num : myvector3) {
//     std::cout << num << " ";
// }
// std::cout << std::endl;
/******************************************************/


/******************************************************/
/*Using dynamically allocated array size without capacity tracking*/
    /*std::vector<int> myvector;
    char choice;

    do {
        int x;
        std::cout << "Enter a number: ";
        std::cin >> x;
        myvector.push_back(x);  // Automatically resizes

        std::cout << "Current size: " << myvector.size() << std::endl;
        std::cout << "Do you want to add another number? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y');

    // Print final vector
    std::cout << "Final vector elements: ";
    for (int num : myvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
*/
  /******************************************************/




    
   /******************************************************/
   /*array swaping*/
   // std:: array<int, 4> arr2 = {5, 6, 7, 8};

    // std:: cout<<"--------BEFORE SWAP---------"<<std::endl;


    // for (auto it=arr.begin(); it!=arr.end(); ++it) {
    //     std:: cout<<*it<<std::endl;
    // }
   
    // arr.swap(arr2);
    // std:: cout<<"--------AFTER SWAP---------"<<std::endl;

    // for (auto it=arr.begin(); it!=arr.end(); ++it) {
    //     std:: cout<<*it<<std::endl;
    // }
/******************************************************/


/******************************************************/

//    for (auto it=arr.crbegin(); it!=arr.crend(); ++it) {
//        std:: cout<<it<<std::endl;

//    } //msh sha8ala

//    for( auto it =arr.begin(); it != arr.end(); ++it) {
//        std:: cout<<it<<std::endl;
//    }


   
// if (arr.empty()) {
//     std:: cout<<"Array is empty"<<std::endl;
// } else {
//     std:: cout<<"Array is not empty"<<std::endl;
// }


//    std :: cout<<*arr.end()<<std::endl;
    // std:: cout<<arr.at(0)<<std::endl;
    // arr.back() = 10;
    // arr.front() = 20;
    // std:: cout<<arr.end()<<std::endl;
    // std:: cout<<arr.begin()<<std::endl;
    // std:: cout<<arr.back()<<std::endl;
    // std:: cout<<arr.front()<<std::endl;
    // std:: cout<<arr.size()<<std::endl;
    // std:: cout<<arr.max_size()<<std::endl;
    // std:: cout<<arr.empty()<<std::endl;
    // std:: cout<<arr.at(4)<<std::endl;
    // std:: cout<<"This will throw an exception";
    // std:: cout<<arr.at(5)<<std::endl;
} 