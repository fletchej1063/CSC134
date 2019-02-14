#include <iostream>

// RESTARTS WHEN INPUT ANYTHING AT END
using namespace std;
int open;
string direction;


void Win()
{
    cout <<"You walk out free to do what you want. Did you like the game? YEP or NO"<< endl;
    cin >> direction;
    if (direction == "YEP")

    {
        cout << "YAY";
    } else if (direction == "NO")
    {
        cout << "Too bad :(";
    }
}
void Lose()
{
    cout << "The security officers caught you. Do you Want to retry? YES or NO"<< endl;
    cin >> direction;
    if (direction == "YES")
    {
        ;
    } else if (direction == "NO")
    {
        ;
    }
}
void Computer()
{
    cout << "You are by a computer. Do you USE computer or BREAK computer?"<< endl;
    cin >> direction;
    if (direction == "USE")
    {
        cout <<"You used the computer." <<endl;
        open = 1;
        ;
    }
    else if (direction == "BREAK")
    {

        Lose();
    }

}

void UBrDoor()
{
    cout <<"You go out the door. Do you go LEFT or RIGHT."<< endl;
    cin >> direction;
    if (direction == "LEFT")
    {
        Win();
    } else if (direction == "RIGHT")
    {
        Win();
    }
}

void BrDoor()
{
    cout << "You break down the door and see the security officers outside. Do you RUN from them or SURRENDER?"<< endl;
    cin >> direction;
    if (direction == "RUN")
    {
        Lose();
    } else if (direction == "SURRENDER")
    {
        Lose();
    }
}


void Door()
{
    cout <<"You are by the door. Do you OPEN door or BREAKDOWN door or go BACK to office?"<< endl ;
    cin >>direction;
    if (direction == "OPEN")
    {
        if (open == 1)
        {
            UBrDoor();
        } else if (open == 0)
        {
            cout << "The door is locked." << endl;
            Door();
        }
    } else if (direction == "BREAKDOWN")
    {
        BrDoor();
    } else if (direction == "BACK")
    {
       ;
    }
}
void Office ()
{
    if (open == 1)
    {
        cout <<"You heard a sound by the door" << endl;

    }
    cout << "You are in an office. Do you go to the COMPUTER or the DOOR." << endl;
    cin >> direction;

    if (direction == "COMPUTER")
    {
        Computer();
    }
    else if (direction == "DOOR")
    {
        Door();
    }
    if (direction == "BACK")
    {
        Office();
    }

    if (direction == "USE")
    {
        Office();
    }
}






int main()
{

    open = 0;

    Office ();
    while (direction == "YES")
    {
        open = 0;

        Office ();
    }

    return 0;
}
