# pragma once

# include <string>
# include <iostream>

class Warlock
{
    std::string name;
    std::string title;

    Warlock();
    Warlock(const Warlock&);
    Warlock& operator=(const Warlock&);

    public:

    Warlock(const std::string& n, const std::string& t)
    : name(n), title(t)
    { std::cout << name << ": This looks like another boring day.\n"; }

    ~Warlock() { std::cout << name << ": My job is done!\n"; }

    void introduce() const { std::cout << name << ": I am " << name << ", " << title << "!\n"; }

    const std::string& getName() const { return name; }
    const std::string& getTitle() const { return title; }

    void setTitle(const std::string& s) { title = s; }
};