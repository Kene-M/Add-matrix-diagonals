/*

    This program will generate random numbers between 0 to 50, assign them to a 4x4
    matrix, and use functions to calculate the sum of each diagonals in the matrix.


1. Create a 2D matrix that will store random numbers between 0 to 50.
2. for (Access each 2D array row)  {
        for (Access each 2D array column)  {
            Generate a random number between 0 to 50 and store it in the 2D matrix.
        }
    }
3. Display the elements of the matrix in an arranged format.
4. Calculate the sum of each diagonal to the user
    for (Access each 2D array row)  {
        Update the sum of numbers in the major diagonal if the rows and columns are the same.
    }
    for (Access each 2D array row)  {
        Update the sum of numbers in the minor diagonal if the column differs by 3 minus the row number.
    }
5. Calculate the results to the user.

*/


// This program will generate random numbers between 0 to 50, assign them to a 4x4
// matrix, and use functions to calculate the sum of each diagonals in the matrix.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

    // Global constants.
const int MAXROWS = 4;  // The number of rows in the 2D matrix.
const int MAXCOLS = 4;  // The number of columns in the 2D matrix.

int sumMajorDiagonal(int [][MAXCOLS]);  // Function prototype for calculating the sum of numbers in the major diagonal of 2D matrix.
int sumOtherDiagonal(int [][MAXCOLS]);  // Function prototype for calculating the sum of numbers in the minor diagonal of 2D matrix.

    // Main function.
int main()
{
        // Declare variables.
    int numbersArr[MAXROWS][MAXCOLS];  // 2D matrix that stores random numbers between 0 to 50.

        // Seed the random number.
    srand (time(0));

        // Access each 2D array row.
    for (int row = 0; row < MAXROWS; row++)
    {
            // Access each 2D array column.
        for (int col = 0; col < MAXCOLS; col++)
        {
                // Generate a random number between 0 to 50 and store it in the matrix.
            numbersArr[row][col] = rand() % 50;
        }
    }

        // Access each 2D array row.
    for (int row = 0; row < MAXROWS; row++)
    {
            // Access each 2D array column.
        for (int col = 0; col < MAXCOLS; col++)
        {
                // Display the current accessed 2D array element.
            cout << setw(2) << left << numbersArr[row][col] << " ";
        }

            // Go to the next line.
        cout << endl;
    }

        // Go to the next line.
    cout << endl;

        // Call the functions for calculating the sum of numbers in the major and minor diagonals of 2D matrix.
        // Pass the 2D matrix as argument, and display the results to the user.
    cout << "Sum of the elements in the major diagonal is " << sumMajorDiagonal(numbersArr) << endl;
    cout << "Sum of the elements in the other diagonal is " << sumOtherDiagonal(numbersArr) << endl;

    return 0;
}

    // Function for calculating the sum of numbers in the major diagonal of 2D matrix.
int sumMajorDiagonal(int numbersArr[][MAXCOLS])
{
    int majorDSum = 0;  // To hold the sum of numbers in the major diagonal of 2D matrix.

        // Access each 2D array row.
    for (int row = 0; row < MAXROWS; row++)
    {
            // Update the sum of numbers in the major diagonal if the rows and columns are the same.
        majorDSum += numbersArr[row][row];
    }

        // Return the result to the calling function.
    return majorDSum;
}

    // Function for calculating the sum of numbers in the major diagonal of 2D matrix.
int sumOtherDiagonal(int numbersArr[][MAXCOLS])
{
    int minorDSum = 0;  // To hold the sum of numbers in the minor diagonal of 2D matrix.

        // Access each 2D array row.
    for (int row = 0; row < MAXROWS; row++)
    {
            // Update the sum of numbers in the minor diagonal if the column differs by 3 minus the row number.
        minorDSum += numbersArr[row][(MAXROWS - 1) - row];
    }

        // Return the result to the calling function.
    return minorDSum;
}

/*

    RUN 1:

13 35 32 46
31 30 6  23
30 18 35 34
34 7  38 44

Sum of the elements in the major diagonal is 122
Sum of the elements in the other diagonal is 104

    --------------------------------------------------------

    RUN 2:

40 25 14 15
45 16 25 46
30 41 49 9
29 41 34 8

Sum of the elements in the major diagonal is 113
Sum of the elements in the other diagonal is 110

    --------------------------------------------------------

    RUN 3:

28 20 26 33
27 34 26 46
9  34 5  49
4  40 49 34

Sum of the elements in the major diagonal is 101
Sum of the elements in the other diagonal is 97

    --------------------------------------------------------

    RUN 4:

3  7  36 33
36 45 26 5
10 0  4  12
10 7  30 26

Sum of the elements in the major diagonal is 78
Sum of the elements in the other diagonal is 69

*/
