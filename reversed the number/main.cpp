//
//  main.cpp
//  reversed the number
//
//  Created by Marwan Khalid on 1/6/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int number,remainder,reversedNumber=0;
    while (true) {
        cout<<"Enter the any numbers\t";
        cin>>number;
        if (number == 0) {
            return 0;
            break;
        }
        while (number!=0) {
            remainder = number % 10;
            reversedNumber = (reversedNumber * 10) + remainder;
            number /= 10;
        }
        cout<<"Reversed Number = "<<reversedNumber<<"\n";
        reversedNumber = 0;
    }
    
    
    return 0;
}
