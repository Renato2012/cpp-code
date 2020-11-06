#include <iostream>
#include <string>

// Adapted from: https://code.sololearn.com/chF82pr5qc3C/#cpp

using namespace std;

/* simple moving average (SMA) */

int main() {

    // Your numbers
    int numbers[] = { 10, 28, 48, 65, 36, 65, 66, 8, 35, 65, 14 };

    // Size of your array [1]
    // [1] https://stackoverflow.com/questions/52726320/calculate-array-length-via-pointer-arithmetic?noredirect=1&lq=1
    int size = *( &numbers + 1 ) - numbers;
    
    cout << "s " << size << " n "<< *(&numbers + 1) - numbers << endl;
    
    // SMA
    int sma[ size ];
    // moving sum
    int sum = 0;
    // Get and print all data
    for( int i = 0; i < size; i++ ) {
        sum += numbers[ i ];
        sma[ i ] = sum / ( i + 1 );
        cout << "Pos " << i << " number " << numbers[i] << " sum: " << sum << " sma " << sma[ i ] << endl;
    }
    // You have an array (sma) with the simple moving average
    return(0);
}
