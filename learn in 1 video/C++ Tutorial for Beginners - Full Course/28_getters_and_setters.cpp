#include <iostream>
using namespace std;

class Movie
{
private:
    string rating;

public:
    string title;
    string director;
    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "R" || aRating == "NR" || aRating == "PG-13")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR"; // for not rated
        }
    }

    string getRating()
    {
        return rating;
    }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("Dog");
    cout << avengers.title << endl;
    cout << avengers.director << endl;
    // cout << avengers.rating << endl;
    cout << avengers.getRating() << endl;

    return 0;
}