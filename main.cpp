#include <iostream>
#include "books.h"
#include <vector>
#include <windows.h>
#include <conio.h>
#include <fstream>
#define KEY_LEFT 75
#define KEY_UP 72
#define KEY_RIGHT 77
#define KEY_DOWN 80
std::vector<books> readBooks();
void gotoxy(int x, int y)
{
    COORD newPosition= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),newPosition);
}
int main()
{
    std::string st;
    std::vector<books> booksList=readBooks();
    int z=0,j=1;
    char p=' ';
    while(1!=0)
    {
        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
        std::cout<<"                  |                                                                                     |\n";
        std::cout<<"                  |                 -----------               ---------               ---------         |\n";
        std::cout<<"                  |               >>|Search by|               |Top 100|               |Sort by|         |\n";
        std::cout<<"                  |                 -----------               ---------               ---------         |\n";
        std::cout<<"                  |                                                                                     |\n";
        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
        std::cout<<"\n\n\n                                                           ";

        while(p!='\n')
            switch(p=getch())
            {
            case KEY_LEFT:
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |                 -----------               ---------               ---------         |\n";
                std::cout<<"                  |               >>|Search by|               |Top 100|               |Sort by|         |\n";
                std::cout<<"                  |                 -----------               ---------               ---------         |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                           ";
                j=1;
                break;
            case KEY_UP:
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |                 -----------               ---------               ---------         |\n";
                std::cout<<"                  |                 |Search by|             >>|Top 100|               |Sort by|         |\n";
                std::cout<<"                  |                 -----------               ---------               ---------         |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                           ";
                j=5;
                break;
            case KEY_RIGHT:
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |                 -----------               ---------               ---------         |\n";
                std::cout<<"                  |                 |Search by|               |Top 100|             >>|Sort by|         |\n";
                std::cout<<"                  |                 -----------               ---------               ---------         |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                           ";
                j=6;
                break;
            case 13:
                p='\n';
                break;
            }
        switch(j)
        {
        case 1:
        {
            p=' ';
            int t=1;
            system("cls");
            std::cout<<"\n\n\n\n\n\n\n\n\n\n";
            std::cout<<"                  ---------------------------------------------------------------------------------------\n";
            std::cout<<"                  |                                       -------                                       |\n";
            std::cout<<"                  |                                       |Title|                                       |\n";
            std::cout<<"                  |                                       -------                                       |\n";
            std::cout<<"                  |              --------                                   ----------                  |\n";
            std::cout<<"                  |            >>|Author|                                   |Language|                  |\n";
            std::cout<<"                  |              --------                                   ----------                  |\n";
            std::cout<<"                  |                                      ---------                                      |\n";
            std::cout<<"                  |                                      |Country|                                      |\n";
            std::cout<<"                  |                                      ---------                                      |\n";
            std::cout<<"                  |                                                                                     |\n";
            std::cout<<"                  ---------------------------------------------------------------------------------------\n";
            std::cout<<"\n\n\n                                                            ";
            while(p!='\n')
                switch(p=getch())
                {
                case KEY_LEFT:
                    system("cls");
                    std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |                                       |Title|                                       |\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |            >>|Author|                                   |Language|                  |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                      |Country|                                      |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                                                                     |\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"\n\n\n                                                            ";
                    t=1;
                    break;
                case KEY_UP:
                    system("cls");
                    std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |                                     >>|Title|                                       |\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |              |Author|                                   |Language|                  |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                      |Country|                                      |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                                                                     |\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"\n\n\n                                                            ";
                    t=2;
                    break;
                case KEY_RIGHT:
                    system("cls");
                    std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |                                       |Title|                                       |\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |              |Author|                                 >>|Language|                  |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                      |Country|                                      |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                                                                     |\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"\n\n\n                                                            ";
                    t=3;
                    break;
                case KEY_DOWN:
                    system("cls");
                    std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |                                       |Title|                                       |\n";
                    std::cout<<"                  |                                       -------                                       |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |              |Author|                                   |Language|                  |\n";
                    std::cout<<"                  |              --------                                   ----------                  |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                    >>|Country|                                      |\n";
                    std::cout<<"                  |                                      ---------                                      |\n";
                    std::cout<<"                  |                                                                                     |\n";
                    std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                    std::cout<<"\n\n\n                                                            ";
                    t=4;
                    break;
                case 13:
                    p='\n';
                    break;
                }
            switch(t)
            {
            case 1:
            {
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |           |Author:|                                              |                  |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                          ";
                gotoxy(39,13);
                std::getline(std::cin,st);
                findBookByAuthor(booksList,st);
                break;
            }
            case 2:
            {
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |           |Title:|                                               |                  |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                          ";
                gotoxy(38,13);
                std::getline(std::cin,st);
                findBookByTitle(booksList,st);
                break;
            }
            case 3:
            {
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |           |Language:|                                            |                  |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                          ";
                gotoxy(41,13);
                std::getline(std::cin,st);
                findBookByLanguage(booksList,st);
                break;
            }
            case 4:
            {
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |           |Country:|                                             |                  |\n";
                std::cout<<"                  |           --------------------------------------------------------                  |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                          ";
                gotoxy(40,13);
                std::getline(std::cin,st);
                findBookByCountry(booksList,st);
                break;
            }
            }
        }
        case 5:
        {
            if(j==5)
            {

                system("cls");
                int z=0;

                for(auto i:booksList)
                    if(z<100)
                    {
                        std::cout<<i;
                        z++;
                    }
                std::cout<<"Press anything to contiune";
                char temp=getch();
                break;
            }
        }
        case 6:
        {
            if(j==6)
            {
                p=' ';
                system("cls");
                std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |              --------                 -------               ----------              |\n";
                std::cout<<"                  |            >>|Author|                 |Title|               |Language|              |\n";
                std::cout<<"                  |              --------                 -------               ----------              |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  |              ---------                -------               ------                  |\n";
                std::cout<<"                  |              |Country|                |Pages|               |Year|                  |\n";
                std::cout<<"                  |              ---------                -------               ------                  |\n";
                std::cout<<"                  |                                                                                     |\n";
                std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                std::cout<<"\n\n\n                                                            ";
                int t=1;
                while(p!='\n')
                {
                    switch(p=getch())
                    {
                    case 49:
                        system("cls");
                        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |            >>|Author|                 |Title|               |Language|              |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |              |Country|                |Pages|               |Year|                  |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"\n\n\n                                                            ";
                        t=1;
                        break;
                    case 50:
                        system("cls");
                        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |              |Author|               >>|Title|               |Language|              |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |              |Country|                |Pages|               |Year|                  |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"\n\n\n                                                            ";
                        t=2;
                        break;
                    case 51:
                        system("cls");
                        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |              |Author|                 |Title|             >>|Language|              |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |              |Country|                |Pages|               |Year|                  |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"\n\n\n                                                            ";
                        t=3;
                        break;
                    case 52:
                        system("cls");
                        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |              |Author|                 |Title|               |Language|              |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |            >>|Country|                |Pages|               |Year|                  |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"\n\n\n                                                            ";
                        t=4;
                        break;
                    case 53:
                        system("cls");
                        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |              |Author|                 |Title|               |Language|              |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |              |Country|              >>|Pages|               |Year|                  |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"\n\n\n                                                            ";
                        t=5;
                        break;
                    case 54:
                        system("cls");
                        std::cout<<"\n\n\n\n\n\n\n\n\n\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |              |Author|                 |Title|               |Language|              |\n";
                        std::cout<<"                  |              --------                 -------               ----------              |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |              |Country|                |Pages|             >>|Year|                  |\n";
                        std::cout<<"                  |              ---------                -------               ------                  |\n";
                        std::cout<<"                  |                                                                                     |\n";
                        std::cout<<"                  ---------------------------------------------------------------------------------------\n";
                        std::cout<<"\n\n\n                                                            ";
                        t=6;
                        break;
                    case 13:
                        p='\n';
                        break;
                    }
                }
                system("cls");
                switch(t)
                {
                case 1:
                    sortByAuthor(booksList);
                    break;
                case 2:
                    sortByTitle(booksList);
                    break;
                case 3:
                    sortByLanguage(booksList);
                    break;
                case 4:
                    sortByCountry(booksList);
                    break;
                case 5:
                    sortByPages(booksList);
                    break;
                case 6:
                    sortByYear(booksList);
                    break;
                }
                t=1;
                char temp=getch();
                break;
            }
        }
        }
        p=' ';
        j=1;
        system("cls");
    }
    return 0;
}
