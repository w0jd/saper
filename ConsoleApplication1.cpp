#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <windows.h>
#include <cstring>
#include <fstream>
using namespace std;
void Color(int color = 10) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void dificulty(int menuNav) {
    //w zależności od wartości menuNav inny napis będzie podświetlony
    switch (menuNav) {
    case 0:
        system("CLS");
        Color(95);
        cout << "latwy" << endl;
        Color(10);
        cout << "sredni" << endl;
        cout << "trudny" << endl;
        Sleep(95);
        break;
    case 1:
        system("CLS");
        cout << "latwy" << endl;
        Color(95);
        cout <<  "sredni" << endl;
        Color(10);
        cout << "trudny";
        Sleep(95);
        break;
    case 2:
        system("CLS");
        cout << "latwy" << endl;
        cout << "sredni" << endl;
        Color(95);
        cout <<  "trudny";
        Color(10);
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
                    Color(10);
                    break;
                case 2:
                    Color(13);
                    cout << TwoMine;
                    Color(10);
                    break;
                case 3:
                    Color(14);
                    cout << ThreeMine;
                    Color(10);
                    break;
                case 4:
                    Color(15);
                    cout << FourMine;
                    Color(10);
                    break;
                case 5:
                    Color(2);
                    cout << FiveMine;
                    Color(10);
                    break;
                case 6:
                    Color(3);
                    cout << SixMine;
                    Color(10);
                    break;
                case 7:
                    Color(4);
                    cout << SevenMine;
                    break;
                case 8:
                    Color(12);
                    cout << EightMine;
                    Color(10);
                    break;
                case 11:
                    Color(74);
                    cout << youStepedAMine;
                    Color(10);
                    break;
                case 14:
                    Color(12);
                    cout << theresAMine;
                    Color(10);
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
                    Color(10);
                    break;
                case 2:
                    Color(13);
                    cout << TwoMine;
                    Color(10);
                    break;
                case 3:
                    Color(14);
                    cout << ThreeMine;
                    Color(10);
                    break;
                case 4:
                    Color(15);
                    cout << FourMine;
                    Color(10);
                    break;
                case 5:
                    Color(2);
                    cout << FiveMine;
                    Color(10);
                    break;
                case 6:
                    Color(3);
                    cout << SixMine;
                    Color(10);
                    break;
                case 7:
                    Color(4);
                    cout << SevenMine;
                    break;
                case 8:
                    Color(12);
                    cout << EightMine;
                    Color(10);
                    break;
                case 11:
                    Color(74);
                    cout << youStepedAMine;
                    Color(10);
                    break;
                case 14:
                    Color(12);
                    cout << theresAMine;
                    Color(10);
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
        Color(10);
        cout << "okno " << endl;
        cout << "wyjdz";
        Sleep(300);
        break;
    case 1:
        system("CLS");
        cout << "Pelny ekran w oknie " << endl;
        Color(95);
        cout <<  " Okno" << endl;
        Color(10);
        cout << "wyjdz";
        Sleep(300);

        break;

    case 2:
        system("CLS");
        cout << "Pelny ekran  w oknie" << endl;
        cout << "Okno" << endl;
        Color(95);
        cout << "wyjdz  tyklo ,ze w kolorze";
        Color(10);
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
        Color(10);
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
        Color(10);
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
        Color(10);
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
        Color(10);
        Sleep(300);
        break;
    }
}
void minegenerator(int minenum, int x, int y, int** tab,int stratingX,int startingY)
{
    int z = y * x;
    int minecounter = 0;
    srand(time(NULL));
   // int x1, y1;
    /*
    while(minecounter<=minenum)
    {
        x1 = rand() % x;
        y1 = rand() % y;
        if (x == x1 && y == y1) {
            continue;
        }
        if (tab[x1][y1] == 1)
        {
            continue;
        }
        if (x1 - 2>=0) {
            if ((tab[x1 - 1][y1]) && (tab[x1 - 2][y1]))
            {
                continue;
            }
        }
        tab[x1][y1] = 11;
        minecounter++;
    }*/
    //przechodzi po wysthci komurchach tablicy i dla każdej losuje liczbę z zakresu 1 do 2 w przypadku wyloswowania dwójki wpisuje wartość odopwiadającą minie do komurki
    int minesPerRow = round(minenum / x);
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
    //przechodzi po wszytkich komurkach i sprawdza ile min ją otacza taką liczbę wpisuje do komurki
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
    fstream plik("manual.txt", ios::in);
    string linia;
    if(plik.is_open())
    {
        while (!plik.eof())
        {
            plik >> linia;
            cout << linia;
        }
    }
}
void losingScreen() {
        system("CLS");
        cout << "przegrales"<<endl;
        cout << "aby wrucic do menu nacisnij escape" << endl;


}
int main()
{
    int minesNum, difflev = 0;
    double minesRowNum;
    int val, anybutton{};
    int width = 16, height = 0;
    int  sizee, pressedM{}, pressdetectleft, pressdetectright, pressdetectup, pressdetectdown, pressdetectesc, pressdetectspace, pressdetectenter{}, pressdetectm;
    int difMenu = 1;
    bool manual=FALSE,doesplay=TRUE;
    int x, y;
    cout << "ok ";
    int sth = 0;
    bool activeMenu = FALSE;
    bool settings = FALSE;
    int menu = 1;
    cout << "ok";
    displayMenu(menu);
    while (doesplay == TRUE)
    {
        activeMenu = FALSE;
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
                activeMenu = TRUE;
                break;
            case 1:
                settings = TRUE;
                system("CLS");
                displaySettings(settingPosition);
                Sleep(100);
                break;
            case 2:
                manual = TRUE;
                system("CLS");
                showManual();
                break;
            case 3:
                return 0;
                break;
            }
        }
        y = 0;
        x = 0;
        int settingPosition = 0;
        while (manual==TRUE)
        {
            if (GetKeyState(VK_ESCAPE) & 0x8000) {
                manual = FALSE;
                displayMenu(menu);
            }
        }
        while (settings ==TRUE) {
                //strzałki zwiększają lub zmniejszają watość zminniej od któej zależy co jest wyświetlane oraz po naciśnięciu spacji która opcja zostanie aktywowana
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
                    settings = FALSE;
                    system("CLS");
                    displayMenu(menu);
                }
            }
        }
        bool diffcultySelection = TRUE;
        while (activeMenu == TRUE) {
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
                activeMenu = FALSE;
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
            //generacja tavlicy dwuwymaiarowej kórej wielkość zależy od wybranego poziomu trudości
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
            int minecount = 0;
            while (difMenu < 1) {
                pressdetectenter = 0;
                sizee = width * height;
                minesNum = ceil(sizee / 4);
                minesRowNum = minesNum / height * width;
                if (sth == 0) {
                        // dla pierwszego przebiegu czyści tablice na wartości domyślne
                    for (int i = 0; i < width; i++) {
                        for (int j = 0; j < height; j++) {
                            tabOfMineAndValue[i][j] = 0;
                            tabOfPositon[i][j] = 13;
                            minecount = minesNum;
                        }
                    }
                    //wykrywa czy zostalo naciśnięte e jeśli tak to do do tablicy tabofpositon przypisuje wartości z tablicy w której znjdują się wartości pól
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
                else
                {
                    if (GetKeyState(0x45) & 0x8000)
                    {
                        pressdetectenter++;
                    }
                    if (pressdetectenter > 0) {
                        Sleep(200);
                        if (tabOfMineAndValue[x][y] == 11) {
                           lose = TRUE;
                        }
                        if (tabOfMineAndValue[x][y] == 11 || tabOfPositon[x][y] != 13) {
                            tabOfPositon[x][y] = tabOfMineAndValue[x][y];
                        }
                        else
                        {
                            int num = difflev +2;
                            int random = (rand() % num) + 1; //losuje liczbe z zakresu 1 do poziom trudności(2 do 4)  +2 w przypadku jedynki odsłania pola dookoła danego pola
                            if (random == 1) {
                                for (int i = -1; i <= 1; i++) {
                                    for (int j = -1; j <= 1; j++) {
                                        if (x + i >= 0 && x + i <= width && y + j <= height && y + j >= 0) {
                                            if ((x + i < width) && (y + j < height)) {
                                                if (tabOfMineAndValue[x + i][y + j] == 11) {
                                                        tabOfPositon[x+i][y+j]=13;
                                                }
                                                else if(tabOfMineAndValue[x+i][y+j]==0){
                                                    tabOfPositon[x + i][y + j] = tabOfMineAndValue[x + i][y + j];
                                                    OpenFields++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            tabOfPositon[x][y] = tabOfMineAndValue[x][y];
                             OpenFields++;
                        }
                        anybutton++;
                    }
                }
                //jeśli zostalo naciśnię te m to pole zostanie oznaczone "flagą" jeśli już się znajduje "flaga" zostanie odznaczone
                if (GetKeyState(0x4D) & 0x8000)
                    {
                        pressedM++;
                    }
                if (pressedM > 0) {
                        Sleep(200);
                        switch (tabOfPositon[x][y]) {
                        case 13:
                            tabOfPositon[x][y] = 14;
                            minecount--;
                            break;
                        case 14:
                            tabOfPositon[x][y] = 13;
                            minecount++;
                            break;
                        }
                        anybutton++;
                        pressedM = 0;
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
                if (anybutton > 0)
                    {
                        //w przypadku jakijkolwiek zmiany w pozycji bądż wartości pól wyświetli nowe wartości tabeli
                    COORD c{};
                    c.X = 0;
                    c.Y = 0;
                   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
                    box(height, width, x, y, tabOfPositon);
                    c.X = 80;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
                    cout << "Licznik  min " << endl;
                    c.Y++;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
                    cout <<"pozostlło " << minecount<<" min" << endl;
                }
                if (GetKeyState(VK_ESCAPE) & 0x8000) {
                    sth = 0;
                    difMenu = 2;
                    activeMenu = FALSE;
                //w przypdaku naciśnięcia esc wraca do głownego menu
                    displayMenu(0);
                }
                bool showAllMines = TRUE;
                while (lose == TRUE) {
                        //w przypdaku przegranej wyświetli plansze z odsloniętymmi wszytkimi minami
                    if (showAllMines == TRUE) {
                        losingScreen();
                        for (int i = 0; i < width; i++) {
                            for (int j = 0; j < height; j++) {
                                if (tabOfMineAndValue[i][j] == 11) {
                                    tabOfPositon[i][j] = tabOfMineAndValue[i][j];
                                }
                            }
                        }
                        box(height, width, -1, -1, tabOfPositon);
                        showAllMines = FALSE;
                    }
                    if (GetKeyState(VK_ESCAPE) & 0x8000) {
                        //wraca do głównego menu
                        sth = 0;
                        difMenu = 2;
                        activeMenu = FALSE;
                        lose = FALSE;
                        displayMenu(0);
                }
                }
                anybutton = 0;
                if (sizee - minesNum == OpenFields) {
                    //sprawdza czy zostały odsłonięte wszytkie pola jeśli tak przechodi do ekranu wygranej
                    system("CLS");
                    bool win = TRUE;
                    while (win == TRUE) {
                        system("CLS");
                        cout << "wygrana wygrana od nocy do rana";
                        box(height,width,height+1,width+1,tabOfPositon);
                        if (GetKeyState(VK_ESCAPE) & 0x8000) {
                            sth = 0;
                            difMenu = 2;
                            activeMenu = FALSE;
                            displayMenu(0);
                            win=FALSE;
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
