#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <windows.h>
#include <cstring>
using namespace std;
void Color(int color = 10) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void dificulty(int menuNav) {
    switch (menuNav) {
    case 0:
        system("CLS");
        Color(1909);
        cout << "latwy" << endl;
        Color();
        cout << "sredni" << endl;
        cout << "trudny" << endl;
        Sleep(300);
        break;
    case 1:
        system("CLS");
        cout << "latwy" << endl;
        Color(1909);
        cout <<  "sredni" << endl;
        Color();
        cout << "trudny";
        Sleep(300);
        break;
    case 2:
        system("CLS");
        cout << "latwy" << endl;
        cout << "sredni" << endl;
        Color(1909);
        cout <<  "trudny";
        Color();
        Sleep(300);
        break;
    }
}
void box(int hieght, int width, int x, int y, int** arr) {
    for (int j = 0; j < hieght; j++) {
        string topWall = "'''''''";
        string walls = "'     '";
        string altWalls = "#######";
        string theresAMine = "'MMMMM'";
        string youStepedAMine = "'*****'";
        string ZeroMine = "'00000'";
       
        string OneMine = "'11111'";
        string TwoMine = "'22222'";
        string ThreeMine = "'33333'";
        string FourMine = "'44444'";
        string FiveMine = "'55555'";
        string SixMine = "'66666'";
        string SevenMine = "'77777'";
        string EightMine = "'88888'";
        for (int i = 0; i < width; i++) {
            cout << topWall;
        }
        cout << '\n';
        for (int i = 0; i < width; i++) {
            if (x == i && y == j) {
                cout << altWalls;
            }
            else {
                switch (arr[i][j]) {
                case 0:
                    cout << ZeroMine;
                    break;
                case 1:
                    Color(11);
                    cout << OneMine;
                    Color();
                    break;
                case 2:
                    Color(13);
                    cout << TwoMine;
                    Color();
                    break;
                case 3:
                    Color(14);
                    cout << ThreeMine;
                    Color();
                    break;
                case 4:
                    Color(15);

                    cout << FourMine;
                    Color();

                    break;
                case 5:
                    Color(2);
                    cout << FiveMine;
                    Color();
                    break;
                case 6:
                    Color(3);
                    cout << SixMine;
                    Color();
                    break;
                case 7:
                    Color(4);
                    cout << SevenMine;
                    break;
                case 8:
                    Color(12);
                    cout << EightMine;
                    Color();
                    break;
                case 11:
                    cout << youStepedAMine;
                    break;
                case 14:
                    Color(12);
                    cout << theresAMine;
                    Color();

                    break;
                default:
                    cout << walls;
                    break;
                }
            }
        }
        cout << '\n';
        for (int i = 0; i < width; i++) {
            if (x == i && y == j) {
                cout << altWalls;
            }
            else {
                switch (arr[i][j]) {
                case 0:
                    cout << ZeroMine;
                    break;
                case 1:
                    Color(11);
                    cout << OneMine;
                    Color();
                    break;
                case 2:
                    Color(13);
                    cout << TwoMine;
                    Color();
                    break;
                case 3:
                    Color(14);
                    cout << ThreeMine;
                    Color();
                    break;
                case 4:
                    Color(15);

                    cout << FourMine;
                    Color();

                    break;
                case 5:
                    Color(2);
                    cout << FiveMine;
                    Color();
                    break;
                case 6:
                    Color(3);
                    cout << SixMine;
                    Color();
                    break;
                case 7:
                    Color(4);
                    cout << SevenMine;
                    break;
                case 8:
                    Color(12);
                    cout << EightMine;
                    Color();
                    break;
                case 11:
                    cout << youStepedAMine;
                    break;
                case 14:
                    Color(12);
                    cout << theresAMine;
                    Color();

                    break;
                default:
                    cout << walls;
                    break;
                }
            }
        }
        cout << '\n';
        for (int i = 0; i < width; i++) {
            cout << topWall;
        }
        cout << "\n";
    }
}
void displaySettings(int settingPosition) {
    switch (settingPosition) {
    case 0:
        system("CLS");
        SetCursorPos(0, 0);
        Color(95);
        cout <<  "Pelny ekran w oknie" << endl;
        Color();
        cout << "okno " << endl;
        cout << "wyjdz";
        Sleep(300);
        break;
    case 1:
        system("CLS");
        cout << "Pelny ekran w oknie " << endl;
        Color(95);
        cout <<  " Okno" << endl;
        Color();
        cout << "wyjdz";
        Sleep(300);

        break;

    case 2:
        system("CLS");
        cout << "Pelny ekran  w oknie" << endl;
        cout << "Okno" << endl;
        Color(95);
        cout << "wyjdz  tyklo ,ze w kolorze";
        Color();
        Sleep(300);
        break;
    }
}
void displayMenu(int menuPosition) {

    switch (menuPosition) {
    case 0:
        system("CLS");
        Color(95);
        cout <<  "Graj tyklo ,ze w kolorze" << endl;
        Color();
        cout << "ustaiwenia" << endl;
        cout << "instrukcja" << endl;
        cout << "wyjdz";
        Sleep(300);
        break;
    case 1:
        system("CLS");
        cout << "Graj " << endl;
        Color(95);
        cout <<  " ustaiwenia tyklo ,ze w kolorze"<< endl;
        Color();
        cout << "instrukcja" << endl;
        cout << "wyjdz";
        Sleep(300);
        break;
    case 2:
        system("CLS");
        cout << "Graj " << endl;
        cout << "ustaiwenia" << endl;
        Color(95);
        cout << "instrukcja  tyklo ,ze w kolorze" << endl;
        Color();
        cout << "wyjdz" << endl;
        Sleep(300);
        break;
    case 3:
        system("CLS");
        cout << "Graj " << endl;
        cout << "ustaiwenia" << endl;
        cout << "instrukcja" << endl;
        Color(95);
        cout <<  "wyjdz  tyklo ,ze w kolorze";
        Color();
        Sleep(300);
        break;
    }
}
void minegenerator(int minenum, int x, int y, int** tab,int stratingX,int startingY)
{
    int z = y * x;
    int   minecounter = 0;
    srand(time(NULL));
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            int isMine = (rand() % 2) + 1;


            if (isMine == 2) {
                if ((tab[i][j] != 1 && tab[i][j - 1] != 11) && minecounter < minenum) {
                    tab[i][j] = 11;
                    minecounter++;
                }
            }
            else {
                tab[i][j] = 0;

            }

        }
        cout << "\n";
    }
}
void minefieldnumbers(int** minetab, int height, int width) {
    int minecount = 0;
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (minetab[i][j] == 0) {
                for (int g = -1; g <= 1; g++) {
                    for (int h = -1; h <= 1; h++) {
                        if (i + g >= 0 && j + h >= 0 && i + g < width && j + h < height) {
                            if (minetab[i + g][j + h] == 11) {
                                minetab[i][j] += 1;
                            }
                        }
                    }
                }
            }
        }
    }
}
void showManual() {



}
void losingScreen() {
        system("CLS");
        cout << "przegrales"<<endl;
        cout << "aby wrucic do menu nacisnij spacje" << endl;

}

int main()
{

    int minesNum, doesplay, activeMenu, difflev = 0;
    double minesRowNum;
    int val, anybutton;
    doesplay = 1;
    int width = 16, height = 0;
    int manual, sizee, pressedM, pressdetectleft, pressdetectright, pressdetectup, pressdetectdown, pressdetectesc, pressdetectspace, pressdetectenter{}, pressdetectm;
    int difMenu = 1;
    int x, y;
    cout << " ";
    int sth = 0;
    activeMenu = 1;
    int settings = 0;
    int menu = 1;
    cout << "ok";
    displayMenu(menu);
    while (doesplay < 2) {
        activeMenu = 1;
        if (GetKeyState(VK_UP) & 0x8000)
        {
            menu--;
            if (menu >= 0) {
                displayMenu(menu);
            }
        }
        if (GetKeyState(VK_DOWN) & 0x8000)
        {
            menu++;
            if (menu <= 3) {
                displayMenu(menu);
            }

        }
        if (menu > 3) {
            menu = 3;
            displayMenu(menu);
        }
        if (menu < 0) {
            menu = 0;
            displayMenu(menu);
        }
        if (GetKeyState(VK_SPACE) & 0x8000)
        {
            int settingPosition = 0;

            switch (menu) {
            case 0:
                difflev = 0;
                system("CLS");
                dificulty(difflev);

                activeMenu = 0;
                break;
            case 1:
                settings = 1;
                system("CLS");
                displaySettings(settingPosition);
                Sleep(100);
                break;
            case 2:
                manual = 0;
                break;
            case 3:
                return 0;
                break;
            }
        }
        y = 0;
        x = 0;
        int settingPosition = 0;
        while (settings > 0) {
            if (GetKeyState(VK_UP) & 0x8000)
            {
                settingPosition--;
                if (settingPosition >= 0) {
                    displaySettings(settingPosition);
                }
            }
            if (GetKeyState(VK_DOWN) & 0x8000)
            {
                settingPosition++;
                if (settingPosition <= 2) {
                    displaySettings(settingPosition);
                }

            }
            if (settingPosition > 2) {
                settingPosition = 2;
                displaySettings(settingPosition);
            }
            if (settingPosition < 0) {
                settingPosition = 0;
                displaySettings(settingPosition);
            }
            if (GetKeyState(VK_SPACE) & 0x8000) {
                switch (settingPosition) {
                case 0:
                    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
                    break;
                }
                if (settingPosition == 1) {
                    ShowWindow(GetConsoleWindow(), SW_NORMAL);
                    break;
                }
                if (settingPosition == 2) {
                    settings = 0;
                    system("CLS");
                    displayMenu(menu);
                }
            }
        }
        bool diffcultySelection = TRUE;
        while (activeMenu < 1) {
            while (diffcultySelection == TRUE) {
            if (GetKeyState(VK_UP) & 0x8000)
            {
                difflev--;
                dificulty(difflev);
            }
            if (GetKeyState(VK_DOWN) & 0x8000)
            {
                difflev++;
                dificulty(difflev);
            }
            if (difflev > 2) {
                difflev = 2;
            }
            if (difflev < 0) {
                difflev = 0;
            }
            if (GetKeyState(VK_ESCAPE) & 0x8000) {
                activeMenu = 2;
                diffcultySelection = FALSE;
                displayMenu(0);
            }
            if (GetKeyState(VK_SPACE) & 0x8000) {
                diffcultySelection = FALSE;
                if (difflev == 0) {
                    height = 8;
                    width = 8;

                }
                else if (difflev == 1) {
                    height = 9;
                    width = 9;
                }
                else {
                    height = 10;
                    width = 10;
                }
                difMenu = 0;




            }
            }
            int** tabOfPositon = new int* [height];
            for (int i = 0; i < height; i++)
            {
                tabOfPositon[i] = new int[width];
            }
            for(int i=0;i<height;i++){
                for(int j=0;j<width;j++){
                    tabOfPositon[i][j]=13;
                }
            }
            int** tabOfMineAndValue = new int* [height];
            for (int i = 0; i < height; i++)
            {
                tabOfMineAndValue[i] = new int[width];
            }
            system("CLS");
            box(height, width, x, y, tabOfPositon);
            bool lose = FALSE;
            int OpenFields = 0;
            while (difMenu < 1) {
                pressdetectenter = 0;

                sizee = width * height;
                minesNum = ceil(sizee / 4);
                minesRowNum = minesNum / height * width;
                
                if ((sth == 0)) {


                    for (int i = 0; i < width; i++) {
                        for (int j = 0; j < height; j++) {
                            tabOfMineAndValue[i][j] = 0;
                            tabOfPositon[i][j] = 13;
                        }
                    }
                    if ((GetKeyState(0x45) & 0x8000)) {
                        pressdetectenter = 1;

                    }
                    if (pressdetectenter == 1) {

                        pressdetectenter = 0;
                        
                        minegenerator(minesNum, width, height, tabOfMineAndValue, x, y);
                        tabOfMineAndValue[x][y] = 0;
                        minefieldnumbers(tabOfMineAndValue, height, width);
                        tabOfPositon[x][y] = tabOfMineAndValue[x][y];
                        system("CLS");
                        for (int i = -1; i <= 1; i++) {
                            for (int j = -1; j <= 1; j++) {
                                if (x + i >= 0 && x + i <= width && y + j <= height && y + j >= 0) {
                                    if ((x + i < width) && (y + j < height)) {
                                        if (tabOfMineAndValue[x + i][y + j] == 11) {
                                        }
                                        else {
                                            tabOfPositon[x + i][y + j] = tabOfMineAndValue[x + i][y + j];
                                            OpenFields++;
                                        }
                                    }
                                }
                            }
                        }
                        box(height, width, x, y, tabOfPositon);
                        sth = 1;
                    }

                }
                pressdetectleft = 0, pressdetectright = 0, pressdetectup = 0, pressdetectdown = 0, anybutton = 0, pressdetectenter = 0, pressedM = 0;
                if (GetKeyState(VK_LEFT) & 0x8000)
                {
                    pressdetectleft++;
                }
                if (pressdetectleft > 0) {
                    Sleep(200);
                    x--;
                    anybutton++;
                }
                if (GetKeyState(VK_RIGHT) & 0x8000)
                {
                    pressdetectright++;
                }
                if (pressdetectright > 0) {
                    Sleep(200);
                    anybutton++;
                    x++;
                }
                if (GetKeyState(VK_UP) & 0x8000)
                {
                    pressdetectup++;
                }
                if (pressdetectup > 0) {
                    Sleep(200);
                    y--;
                    anybutton++;
                }
                if (GetKeyState(VK_DOWN) & 0x8000)
                {
                    pressdetectdown++;
                }
                if (pressdetectdown > 0) {
                    Sleep(200);
                    y++;
                    anybutton++;
                }
                if (x > width - 1) {
                    x = 0;
                }
                if ( x < 0) {
                   x= width - 1;
                }
                if (y > height - 1 ) {
                    y = 0;
                }
                if (y < 0) {
                    y = height - 1;
                }
                if (GetKeyState(0x45) & 0x8000)
                {
                    pressdetectenter++;
                }
                if (pressdetectenter > 0) {
                    Sleep(200);
                    if (tabOfMineAndValue[x][y] == 11) {
                        lose = TRUE;
                    }
                    if (tabOfMineAndValue[x][y] == 11 || tabOfPositon[x][y]!=13) {
                        tabOfPositon[x][y] = tabOfMineAndValue[x][y];
                     

                    }
                    else {

                        int num = difflev+2 ;
                        int random = (rand() % num) + 1;
                        if (random == 1) {
                            for (int i = -1; i <= 1; i++) {
                                for (int j = -1; j <= 1; j++) {
                                    if (x + i >= 0 && x + i <= width && y + j <= height && y + j >= 0) {
                                        if ((x + i < width) && (y + j < height)) {
                                            if (tabOfMineAndValue[x + i][y + j] == 11) {
                                            }
                                            else {
                                                tabOfPositon[x + i][y + j] = tabOfMineAndValue[x + i][y + j];
                                                OpenFields++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        tabOfPositon[x][y] = tabOfMineAndValue[x][y];
                    }
                    anybutton++;
                }
                
                if (GetKeyState(0x4D) & 0x8000)
                {
                    pressedM++;
                }
                if (pressedM > 0) {
                    Sleep(200);
                    switch (tabOfPositon[x][y]) {
                    case 13:
                        tabOfPositon[x][y] = 14;
                        break;
                    case 14:
                        tabOfPositon[x][y] = 13;
                        break;
                    }
                    anybutton++;
                }
                if (anybutton > 0) {
                    COORD c{};
                    c.X = 0;
                    c.Y = 0;
                   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
                    box(height, width, x, y, tabOfPositon);
                }
                if (GetKeyState(VK_ESCAPE) & 0x8000) {
                    sth = 0;
                    difMenu = 2;
                    activeMenu = 2;
                    displayMenu(0);
                }
                while (lose == TRUE) {
                    losingScreen();
                    if (GetKeyState(VK_ESCAPE) & 0x8000) {
                        sth = 0;
                        difMenu = 2;
                        activeMenu = 2;
                        lose = FALSE;
                        displayMenu(0);
                    }
                }
                anybutton = 0;
              

                if (sizee - minesNum == OpenFields) {
                    system("CLS");
                    bool win = TRUE;
                    while (win == TRUE) {
                        system("CLS");
                        cout << "wygrana wygrana od nocy do rana";
                        if (GetKeyState(VK_ESCAPE) & 0x8000) {
                            sth = 0;
                            difMenu = 2;
                            activeMenu = 2;
                            displayMenu(0);
                        }
                    }
                }
            }
            for (int i = 0; i < height; i++)
            {
                delete [] tabOfPositon[i];
            }
            delete [] tabOfPositon;
            for (int i = 0; i < height; i++)
            {
                delete[] tabOfMineAndValue[i];
            }
            delete[] tabOfMineAndValue;
        }

    }
    return 0;
}
