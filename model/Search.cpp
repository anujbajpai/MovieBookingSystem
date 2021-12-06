#include <iostream>

using namespace std;

class Search {
  public:
    vector<Movie> GetMovieByLanguage(Language language);
    vector<Movie> GetMovieByGenre(Genre genre);
    vector<Movie> GetMovieByTitle(String name);
}
