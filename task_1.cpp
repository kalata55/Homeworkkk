#include <iostream>//input, output stream library(access to cin;cout;rand())
#include <cstdlib>//more useful functions such as srand()
#include <ctime>//access to current time
using namespace std;//introduces the standard section of <iostream> which cin and cout need

int main()// declares the main function, its essential cuz that's where things are executed, without it nothing would happen
{
    int min_l, max_l;

    cout << "Guess My Number Game \n\n Set the minimum positive limit: ";//  consoles out message for the player
    cin>>min_l ;
    cout<<"\n Set the maximum positive limit: ";
    cin>>max_l;

    while(max_l<=0 or min_l<=0 or max_l<min_l)
    {
        cout<<"\n\nINVALID DATA!";
        cout << "\n\nSet the minimum positive limit: ";
        cin>>min_l ;
        cout<<"\nSet the maximum positive limit: ";
        cin>>max_l;
    }

    cout<<"\n\n!!YOU STARTED THE GAME!!\n(press 0 to stop)\n\n";

    srand(time(0)); //seed pseudo random number generator
    int num = rand() % (max_l- min_l + 1) + min_l; // random number between 1 and 100 ?(s=(s*n+i)%m)?


    int guess=0,br=0;//declares a variable guess and initializes it with 0
    while (guess != num)// enters a cycle and it ends when guess is equivalent to num
    {

        cout << "Enter a guess between "<< min_l<< " and "<< max_l<< ": ";// the player starts playing when this message appears
        cin >> guess;// the player initializes guess and tries to guess
        if(guess==0)break;
        br++;
        if (guess > num)// we set an if case which will execute when guess is greater than num
        {
            cout << "Too high!\n\n";// this message appears if we are in the if case
        }
        else if (guess < num)//enters the else case if guess is bigger or equal to num and we set another if in case guess is less than num
        {
            cout << "Too low!\n\n";//displays that message in that case
        }
        else// the else case of the latest if case and that's when we win the game, when we have correctly guessed the number
        {
            cout << "\nCorrect! You got it in with "<< br <<" tries\n\n          "<<"*\\(^o^)/*";//shows up the congratulation message for winning
        }

        if(br==5)
        {
           int cif,circles=0,copyy= num;
           while(copyy/10>0 or copyy%10>0)
           {
               cif=copyy%10;
               switch (cif)
               {
                   case 0:circles++;break;
                   case 6:circles++;break;
                   case 8:circles+=2;break;
                   case 9:circles++;break;
                   default:break;
               }
                copyy/=10;
           }
           cout<<"\nThe number has "<<circles<<" circles\n\n\n";

        }

    }// escapes the cycle

    if(guess==0)cout<<"\nYou have stopped the game";

    return 0;// the main function returns 0
}// end of main
