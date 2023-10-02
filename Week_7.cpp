#include <iostream>
    using std::cout;
    using std::endl;

#include <array>
    using std::array;


int main ()
{
    const int ROWS{8};
    const int COLS{8};

    array<  array <int, COLS>,    ROWS> image{      // Defining a array with the int of colos and the int of rows
        {
        {1,1,0,0,0,0,1,1},
        {1,0,1,1,1,1,0,1},
        {0,1,0,1,1,0,1,0},
        {0,1,1,1,1,1,1,0},
        {0,1,0,1,1,0,1,0},
        {0,1,1,0,0,1,1,0},
        {1,0,1,1,1,1,0,1},
        {1,1,0,0,0,0,1,1}
        }
    };

    for( array<int, COLS> ROWS : image)
    {
        // row reperesents one row allowing us to traverse the list
        for(int pixle : ROWS)
        {
            if (pixle == 0)
                cout << "@";
            else
                cout << " ";
        }
        cout<< endl;
    }




}