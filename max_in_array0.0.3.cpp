#include <iostream>
#include <sstream>
using namespace std ;

bool read_numbers(int array[10])
{
    string string;
    getline( cin, string );
    istringstream stream( string );
    bool success = true;
    for( int i = 0; i < 10; ++i ) {
        if( !( stream >> array[ i ] ) ) {
            success = false;
            break;
        }
    }

    return success;
}

int main() {
    int array1[10];
    int array2[10];
    int max = -2147483647;

    if (read_numbers(array1) && read_numbers(array2)) {
        int j = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i <= j ) {
                    if (array1[i] + array2[j] > max) {
                        max = array1[i] + array2[j];
                    }
                }
            }
        }
        cout << "MAX = " << max;
    } else {
        std::cout << "An error has occurred while reading numbers";
    }
    return 0;
}
