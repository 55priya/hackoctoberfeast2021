#include <iostream>
#include <string.h>
#include <iomanip>
#include <Windows.h>    
#include <cstdlib>
#include <conio.h>
using namespace std;

void space(int n)
{
    for (int i = 0; i < n; i++)
        cout << " ";
}

class fizzard
{
    char captcha[8];

public:
    char ele;
    int check = 0;
    void generatecaptcha()
    {

        for (int i = 0; i < 8; i++)
        {
            captcha[i] = 'a' + rand() % 26; // generating random alphabets!
            cout << captcha[i] << " ";
        }
    }

    int getcaptcha()
    {

        for (int i = 0; i < 8; i++)
        {
            cin >> ele;
            if (ele == captcha[i])
                check++;
        }

        if (check != 8)
        {
            space(42);
            cout << "WRONG CAPTCHA! PLEASE ENTER AGAIN!";
            cout << endl;
            return 0;
        }
        cout << endl;
        check = 0;
        return 1;
    }
} asst;

using namespace std;
int main()
{
  
    PlaySound(TEXT("myk11.wma"), NULL, SND_ASYNC);
    srand(time(NULL));
    system("cls");
    space(50);
    cout << "WELCOME TO FIZZARD!" << endl
         << endl;
    space(38);

    cout << "CAPTCHA: ENTER THE BELOW TEXT TO CONTINUE" << endl;
    space(52);

    asst.generatecaptcha();

    cout << endl;
    space(52);

    while (!asst.getcaptcha())
        space(50);

    space(52);
    cout << "Welcome to RPS!\n";
    string choices[] = {"Rock", "Paper", "Scissors"}, str;
    int more, c, count = 0, ch;

    do
    {
        space(51);
        c = rand() % 3;
        str = choices[c];
        cout << "Enter your choice: \n";

        space(45);
        cout << "1. Rock | 2. Paper| 3. Scissors\n"
             << endl;

        space(58);
        cin >> ch;

        if ((ch == 1 && str == "Rock") || (ch == 2 && str == "Paper") || (ch == 3 && str == "Scissors"))
        {
            space(48);
            cout << "Draw! "
                 << "Computer chose " << str << "\n";
        }

        else if (ch == 1 && str == "Paper")
        {
            space(47);
            cout << "Computer chose " << str << " You lost!\n";
            count--;
        }

        else if (ch == 2 && str == "Scissors")
        {
            space(47);
            cout << "Computer chose " << str << " You lost!\n";
            count--;
        }
        else if (ch == 3 && str == "Rock")
        {
            space(47);
            cout << "Computer chose " << str << " You lost!\n";
            count--;
        }

        else
        {
            space(47);
            cout << "Computer chose " << str << " You won! "
                 << "\n"
                 << "\n";
            count++;
        }

        space(50);
        cout << "Want to play more?(1/0)\n\n";
        space(58);
        cin >> more;
    } while (more == 1);

    space(49);

    cout << "Your final score is: " << count;
    return 0;
}

