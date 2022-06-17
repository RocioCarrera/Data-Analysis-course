#include <iostream>


using namespace std;

class BB

{

public:


    void BusquedaBinaria(int array[], int key, int n)

    {

        int low = 1;

        int high = n;

        int mid;


    do

    {

        mid = (low + high) / 2;

        if (key < array[mid])

        {

            high = mid - 1;

        }

   	else if (key > array[mid])

        {

            low = mid + 1;

        }

	}

	while (key != array[mid] && low <= high);


        if (key == array[mid])

        {

            cout<<"elemento encontrado";

        }

        else

        {

            cout<<"elemento no encontrado";

        }

    }

};
