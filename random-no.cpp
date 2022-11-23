#include <iostream>
#include<ctime>
int main()
{
int guess;
int tries=0;

// srand(time(0));  //makes use of the computer's internal clock to control the choice of the seed.
//                     //  Since time is continually changing, the seed is forever changing. 
//                     // Remember, if the seed number remains the same,
//                     // the sequence of numbers will be repeated for each run of the program.

// int num=(rand()%20)+1;
// //->>>generates number from 0 t0 20 so add 1 to get no's from 1 to 20.

// // int number = a + rand( ) % n;

// // a = the first number in your range
// // n = the number of terms in your range
// // (range computed by  largest value - smallest value + 1)

 
// std::cout<<num;

srand(time(0));

int num=(rand()%100)+1;

do{
    std::cout<<"enter  your guess between (1-100) ";
    std::cin>>guess;
    tries++;

    if(num>guess)
    {
        std::cout<<"guess is too low:";
    }
    else if(num<guess)
    {
        std::cout<<"guess is too high:";
    }
    else{
        std::cout<<"you have entered the correct number in:"<<tries<<"tries";
    }

}
while(num!=guess);

return 0;
}