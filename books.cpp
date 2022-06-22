#include "books.h"
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
books::books(std::string author,std::string country,std::string language,std::string link,int pages,std::string title,int year)
{
    this->author=author;
    this->country=country;
    this->language=language;
    this->link=link;
    this->pages=pages;
    this->title=title;
    this->year=year;
}
std::ostream& operator << (std::ostream& st, const books &x)
{
    std::cout<<"Author: "<<x.author<<'\n';
    std::cout<<"Country: "<<x.country<<'\n';
    std::cout<<"Language: "<<x.language<<'\n';
    std::cout<<"Link: "<<x.link<<'\n';
    std::cout<<"Pages: "<<x.pages<<'\n';
    std::cout<<"Title: "<<x.title<<'\n';
    std::cout<<"Year: "<<x.year<<'\n';
    std::cout<<'\n';

    return st;
}
std::vector<books> readBooks()
{
    std::vector<books> booksList;
    std::ifstream file("books.txt");
    std::string autor;
    std::string country;
    std::string language;
    std::string link;
    std::string spages;
    int pages;
    std::string title;
    std::string syear;
    int year;
    while (std::getline(file, autor))
    {
        std::getline(file, country);
        std::getline(file, language);
        std::getline(file, link);
        std::getline(file, spages);
        pages = stoi(spages);
        std::getline(file, title);
        std::getline(file, syear);
        year = stoi(syear);

        books book(autor, country, language, link, pages, title, year);
        booksList.push_back(book);
    }

    return booksList;
}

std::vector<std::string> split(std::string text)
{

    std::string space_delimiter = " ";
    std::vector<std::string> findWords{};

    std::size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != std::string::npos)
    {
        std::string temp = text.substr(0, pos);
        std::transform(temp.begin(), temp.end(), temp.begin(),[](char c)
        {
            return std::tolower(c);
        });
        if(temp.length() >= 3)
            findWords.push_back(temp);
        text.erase(0, pos + space_delimiter.length());
    }
    std::transform(text.begin(), text.end(), text.begin(),[](char c)
    {
        return std::tolower(c);
    });
    if(text.length() >= 3)
        findWords.push_back(text);
    return findWords;
}
void findBookByAuthor(std::vector<books>& booksList, std::string findThis)
{
    system("cls");
    int matchFound = 0;
    for(auto i : booksList)
    {
        std::transform(findThis.begin(), findThis.end(), findThis.begin(),[](char c)
        {
            return std::tolower(c);
        });
        std::string aut = i.author;
        std::transform(aut.begin(), aut.end(), aut.begin(),[](char c)
        {
            return std::tolower(c);
        });
        if(aut == findThis)
        {
            std::cout<<i;
            matchFound++;
        }
    }
    if(matchFound == 0)
    {
        std::vector<std::string> findWords = split(findThis);
        for(auto i : booksList)
        {
            std::vector<std::string> authorWords = split(i.author);
            for(auto j : findWords)
            {
                    for(auto x : authorWords)
                    {
                        if(j == x)
                        {
                            std::cout<<i;
                            matchFound++;
                            break;
                        }
                    }

            }
        }
    }
    if(matchFound==0)
        std::cout<<"Book not found\n\n";
    std::cout<<"Press anything to contiune";
    char temp=getch();

}
void findBookByTitle(std::vector<books>& booksList, std::string findThis)
{
    system("cls");
    int matchFound = 0;
    for(auto i : booksList)
    {
        std::transform(findThis.begin(), findThis.end(), findThis.begin(),[](char c)
        {
            return std::tolower(c);
        });
        std::string tit = i.title;
        std::transform(tit.begin(), tit.end(), tit.begin(),[](char c)
        {
            return std::tolower(c);
        });
        if(tit == findThis)
        {
            std::cout<<i;
            matchFound++;
        }
    }
    if(matchFound == 0)
    {
        std::vector<std::string> findWords = split(findThis);
        for(auto i : booksList)
        {
            std::vector<std::string> titleWords = split(i.title);
            for(auto j : findWords)
            {
                    for(auto x : titleWords)
                    {
                        if(j == x)
                        {
                            std::cout<<i;
                            matchFound++;
                            break;
                        }
                    }

            }
        }
    }
    if(matchFound==0)
        std::cout<<"Book not found\n\n";
    std::cout<<"Press anything to contiune";
    char temp=getch();

}
void findBookByLanguage(std::vector<books>& booksList, std::string findThis)
{
    system("cls");
    int matchFound = 0;
    for(auto i : booksList)
    {
        std::transform(findThis.begin(), findThis.end(), findThis.begin(),[](char c)
        {
            return std::tolower(c);
        });
        std::string lan = i.language;
        std::transform(lan.begin(), lan.end(), lan.begin(),[](char c)
        {
            return std::tolower(c);
        });
        if(lan == findThis)
        {
            std::cout<<i;
            matchFound++;
        }
    }
    if(matchFound == 0)
    {
        std::vector<std::string> findWords = split(findThis);
        for(auto i : booksList)
        {
            std::vector<std::string> languageWords = split(i.language);
            for(auto j : findWords)
            {
                    for(auto x : languageWords)
                    {
                        if(j == x)
                        {
                            std::cout<<i;
                            matchFound++;
                            break;
                        }
                    }

            }
        }
    }
    if(matchFound==0)
        std::cout<<"Book not found\n\n";
    std::cout<<"Press anything to contiune";
    char temp=getch();

}
void findBookByCountry(std::vector<books>& booksList, std::string findThis)
{
    system("cls");
    int matchFound = 0;
    for(auto i : booksList)
    {
        std::transform(findThis.begin(), findThis.end(), findThis.begin(),[](char c)
        {
            return std::tolower(c);
        });
        std::string cou = i.country;
        std::transform(cou.begin(), cou.end(), cou.begin(),[](char c)
        {
            return std::tolower(c);
        });
        if(cou == findThis)
        {
            std::cout<<i;
            matchFound++;
        }
    }
    if(matchFound == 0)
    {
        std::vector<std::string> findWords = split(findThis);
        for(auto i : booksList)
        {
            std::vector<std::string> countryWords = split(i.country);
            for(auto j : findWords)
            {
                    for(auto x : countryWords)
                    {
                        if(j == x)
                        {
                            std::cout<<i;
                            matchFound++;
                            break;
                        }
                    }

            }
        }
    }
    if(matchFound==0)
        std::cout<<"Book not found\n\n";
    std::cout<<"Press anything to contiune";
    char temp=getch();

}
bool cmpAuthor(const books &a,const books &b)
{
    return a.author < b.author;
}
void sortByAuthor(std::vector<books>& booksList)
{
    std::vector<books> toSort;
    for(auto i : booksList) toSort.push_back(i);
    std::sort(toSort.begin(), toSort.end(), cmpAuthor);
    for(auto i : toSort) std::cout<<i<<"\n";
    std::cout<<"Press anything to contiune";
}

bool cmpTitle(const books &a,const books &b)
{
    return a.title < b.title;
}

void sortByTitle(std::vector<books>& booksList)
{
    std::vector<books> toSort;
    for(auto i : booksList) toSort.push_back(i);
    std::sort(toSort.begin(), toSort.end(), cmpTitle);
    for(auto i : toSort) std::cout<<i<<"\n";
    std::cout<<"Press anything to contiune";
}

bool cmpLanguage(const books &a,const books &b)
{
    return a.language < b.language;
}

void sortByLanguage(std::vector<books>& booksList)
{
    std::vector<books> toSort;
    for(auto i : booksList) toSort.push_back(i);
    std::sort(toSort.begin(), toSort.end(), cmpLanguage);
    for(auto i : toSort) std::cout<<i<<"\n";
    std::cout<<"Press anything to contiune";
}

bool cmpCountry(const books &a,const books &b)
{
    return a.country < b.country;
}

void sortByCountry(std::vector<books>& booksList)
{
    std::vector<books> toSort;
    for(auto i : booksList) toSort.push_back(i);
    std::sort(toSort.begin(), toSort.end(), cmpCountry);
    for(auto i : toSort) std::cout<<i<<"\n";
    std::cout<<"Press anything to contiune";
}

bool cmpPages(const books &a,const books &b)
{
    return a.pages < b.pages;
}

void sortByPages(std::vector<books>& booksList)
{
    std::vector<books> toSort;
    for(auto i : booksList) toSort.push_back(i);
    std::sort(toSort.begin(), toSort.end(), cmpPages);
    for(auto i : toSort) std::cout<<i<<"\n";
    std::cout<<"Press anything to contiune";
}

bool cmpYear(const books &a,const books &b)
{
    return a.year < b.year;
}

void sortByYear(std::vector<books>& booksList)
{
    std::vector<books> toSort;
    for(auto i : booksList) toSort.push_back(i);
    std::sort(toSort.begin(), toSort.end(), cmpYear);
    for(auto i : toSort) std::cout<<i<<"\n";
    std::cout<<"Press anything to contiune";
}
