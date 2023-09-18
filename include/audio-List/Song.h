
#ifndef SONG_H
#define SONG_H

#include <string>



class Song
{

public:
    Song( const std::string& title, const std::string& artist);
    static Song createSong();
    void display() const;

private: //keep data private(encapsulation)
    std::string title;
    std::string artist;
    // double duration;
};

#endif // SONG_H