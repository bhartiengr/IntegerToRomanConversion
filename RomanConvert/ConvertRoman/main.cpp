#include <iostream>

using namespace std;

int main()
{
    string roman;
    int integer;
    int originalinteger;
    int romanpiece;

    cout<< "Enter Integer : : ";
    cin>>integer;

    originalinteger = integer;

    if((integer>=4000) || (integer <=0))
    {

        cout<< endl << "Integer not valid as it is either greater than 4000 or a negative number" << endl;

    }
    else{

        if(integer >=1000)
        {

            romanpiece = (integer/1000);

            for(int i=0;i< romanpiece ;i++)
            {
                roman = roman + 'M';
            }

            integer %= 1000;

        }

        if(integer >=100)
        {

            romanpiece = (integer/100);

            if(romanpiece == 9)
            {
               roman = roman + "CM";
            }
            else if (romanpiece >=5)
            {
                roman = roman + 'D';

                 for(int i=0;i< romanpiece-5 ;i++)
                  {
                    roman = roman + 'C';
                  }
            }
            else if(romanpiece == 4)
            {
                roman = roman + "CD";
            }
            else if (romanpiece >=1)
            {
                for(int i=0;i<romanpiece;i++)
                {
                   roman = roman + 'C';

                }
            }

            integer %= 100 ;
        }

        if(integer >=10)
        {
            romanpiece = integer/10;

            if (romanpiece ==9)
            {
                roman += "XC";
            }
            else if(romanpiece >=5)
            {
                roman += 'L';

                for(int i=0;i<romanpiece -5;i++)
                {
                    roman =roman + 'X';
                }
            }

           else if (romanpiece == 4) {

            roman+= "XL";
           }
           else if(romanpiece>=1)
           {
               for (int i=0;i<romanpiece ;i++)
               {

                   roman +='X';
               }
           }
            integer %=10;
        }

        if(integer >=1)
        {
            romanpiece = integer;

            if(romanpiece ==9)
            {
                roman +='IX';
            }
            else if (romanpiece >=5) {
                roman +='V';

                for(int i=0;i<romanpiece -5;i++)
                {

                    roman +='I';
                }
            }
            else if(romanpiece ==4)
            {
                roman +="IV";

            }else if (romanpiece >=1)
            {
                for (int i=0;i<romanpiece ;i++)
               {

                   roman +='I';
               }
            }
        }

        cout<<"Roman Numeral : "<< roman <<endl;
       }

  return 0;
    }



