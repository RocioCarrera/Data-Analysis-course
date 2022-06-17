#include <iostream>

using namespace std;

class BS

{

    public:

        void BusquedaSecuencial(int array[], int x, int i, int n)

        {   int found = 0;

            for (i = 0; i < n ; i++)

            {

                if (array[i] == x )

                {

                    found = 1;

                    break;

                }

            }

            if (found == 1)

            {

                cout<<"El elemento buscado esta en el indice "<<i+1;

            }

            else

            {

                cout<<"El elemento buscado no esta en el arreglo";

            }

        }

};