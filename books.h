#ifndef BOOKS_H
#define BOOKS_H
#include <string>
#include <iostream>
#include <vector>
class books
{
public:
    books(std::string,std::string,std::string,std::string,int,std::string,int);
    books(){}
    virtual ~books(){}
    friend std::ostream& operator << (std::ostream&, const books &);
    friend void sortByAuthor(std::vector<books>&);
    friend void sortByTitle(std::vector<books>&);
    friend void sortByLanguage(std::vector<books>&);
    friend void sortByCountry(std::vector<books>&);
    friend void sortByPages(std::vector<books>&);
    friend void sortByYear(std::vector<books>&);
    friend bool cmpAuthor(const books &, const books &);
    friend bool cmpTitle(const books &,const books &);
    friend bool cmpLanguage(const books &,const books &);
    friend bool cmpCountry(const books &,const books &);
    friend bool cmpPages(const books &,const books &);
    friend bool cmpYear(const books &,const books &);
    friend void findBookByAuthor(std::vector<books>&,std::string);
    friend void findBookByTitle(std::vector<books>&,std::string);
    friend void findBookByLanguage(std::vector<books>&,std::string);
    friend void findBookByCountry(std::vector<books>&,std::string);
private:
    std::string author;
    std::string country;
    std::string language;
    std::string link;
    int pages;
    std::string title;
    int year;
};

#endif // BOOKS_H
